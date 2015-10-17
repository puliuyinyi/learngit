package producerAndComsumer;

public class Comsumer extends Thread{
	
//	private Storage storage;
	private StorageWithLock storage;
	private int consumeNum = (int) (Math.random() * Storage.MAX_SIZE);
	
//	public Comsumer(Storage storage) {
//		this.storage = storage;
//	}
	public Comsumer(StorageWithLock storage) {
		this.storage = storage;
	}
	
	@Override
	public void run() {
		while(true) {
			consumeNum = (int) (Math.random() * Storage.MAX_SIZE);
			storage.consume(consumeNum);
		}
	}
}
