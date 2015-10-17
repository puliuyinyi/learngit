package producerAndComsumer;


/**
 * 
 * @author Frank
 * �ֿ�
 */
public class Storage {
	static int MAX_SIZE = 100; 
	private int productsNum;
	/*����������byte[0]*/
	private static final byte[] lockObj = new byte[0];
	private boolean beforeIsWaitedFlag = false;
	
	public Storage(int productsNum) {
		this.productsNum = productsNum;
	}
	
	public void produce(int num) {
		
		synchronized (lockObj) {
			while(productsNum + num > MAX_SIZE) {
				System.out.println("�ֲ�Ʒ������" + productsNum + " ������ " + num + " ��,����ʧ�ܣ�");
				try {
					if(beforeIsWaitedFlag) {
						num = (int) (Math.random() * MAX_SIZE);
						continue;
					}
					beforeIsWaitedFlag = true;
					lockObj.wait();
					
				} catch (InterruptedException e) {
					e.printStackTrace();
				}
			}
			
			productsNum += num;
			System.out.println("������ " + num + "����Ʒ��������Ϊ" + productsNum + "����");
			beforeIsWaitedFlag = false;
			lockObj.notifyAll();
		}
	}
	
	public void consume(int num) {
		
		synchronized (lockObj) {
			while(productsNum - num < 0) {
				System.out.println("�ֲ�Ʒ������" + productsNum + " ������ " + num + " ��,����ʧ�ܣ�");
				try {
					if(beforeIsWaitedFlag) {
						num = (int) (Math.random() * MAX_SIZE);
						continue;
					}
					beforeIsWaitedFlag = true;
					lockObj.wait();
					
				} catch (InterruptedException e) {
					e.printStackTrace();
				}
			}
			
			productsNum -= num;
			System.out.println("������ " + num + "����Ʒ��������Ϊ" + productsNum + "����");
			beforeIsWaitedFlag = false;
			lockObj.notifyAll();
			
		}
	}
}
