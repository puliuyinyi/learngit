package producerAndComsumer;

public class Producer extends Thread{
	
//	private Storage storage;
	private StorageWithLock storage;
	private int produceNum = (int) (Math.random() * Storage.MAX_SIZE);
	
//	public Producer(Storage storage) {
//		this.storage = storage;
//	}
	public Producer(StorageWithLock storage) {
		this.storage = storage;
	}
	
	@Override
	public void run() {
		while(true) {
			produceNum = (int) (Math.random() * Storage.MAX_SIZE);
			storage.produce(produceNum);
		}
	}
	

}
