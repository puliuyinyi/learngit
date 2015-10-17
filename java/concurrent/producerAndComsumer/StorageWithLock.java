package producerAndComsumer;

import java.util.concurrent.locks.Condition;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

/**
 * 
 * @author Frank
 * 仓库
 */
public class StorageWithLock {
	static int MAX_SIZE = 100; 
	private int productsNum;
	/*锁对象建议用byte[0]*/
//	private static final byte[] lockObj = new byte[0];
	private boolean beforeIsWaitedFlag = false;
	private static final Lock lock = new ReentrantLock();
	private static final Condition condition = lock.newCondition();
//	private static final Condition condition2 = lock.newCondition();
	public StorageWithLock(int productsNum) {
		this.productsNum = productsNum;
	}
	
	public void produce(int num) {
		lock.lock();
//		System.out.println(condition == condition2); //false
		while(productsNum + num > MAX_SIZE) {
			System.out.println("现产品数量：" + productsNum + " 欲生产 " + num + " 个,生产失败！");
			try {
				if(beforeIsWaitedFlag) {
					num = (int) (Math.random() * MAX_SIZE);
					continue;
				}
				beforeIsWaitedFlag = true;
				condition.await();
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
			
		productsNum += num;
		System.out.println("生产了 " + num + "个产品，总数变为" + productsNum + "个！");
		beforeIsWaitedFlag = false;
		condition.signalAll();
		lock.unlock();
	}

	public void consume(int num) {
		
		lock.lock();
		while(productsNum - num < 0) {
			System.out.println("现产品数量：" + productsNum + " 欲消费 " + num + " 个,消费失败！");
			try {
				if(beforeIsWaitedFlag) {
					num = (int) (Math.random() * MAX_SIZE);
					continue;
				}
				beforeIsWaitedFlag = true;
				condition.await();
				
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
		
		productsNum -= num;
		System.out.println("消费了 " + num + "个产品，总数变为" + productsNum + "个！");
		beforeIsWaitedFlag = false;
		condition.signalAll();
		lock.unlock();	
	}
}
