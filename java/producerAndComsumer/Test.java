package producerAndComsumer;


public class Test {

	public static void main(String[] args) {
		
//		Storage storage = new Storage(45);
//		Producer producer = new Producer(storage);
//		producer.start();
//		
//		Comsumer comsumer = new Comsumer(storage);
//		comsumer.start();
		
		StorageWithLock s = new StorageWithLock(50);
		Producer p = new Producer(s);
		Comsumer c = new Comsumer(s);
		
		p.start();
		c.start();
		
	}

}
