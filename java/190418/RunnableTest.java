public class RunnableTest implements Runnable
{
	private int i =0 ;
	public void run()
	{
		for (; i <100 ; i++)
		{
			System.out.println(Thread.currentThread().getName() + " " + i);
		}
	}

	public static void main(String []args)
	{
		for (int i = 0;i<100; i++)
		{
			System.out.println(Thread.currentThread().getName()+" "+i);
			if( i == 20)
			{
				RunnableTest rt = new RunnableTest();
				new Thread( rt, "NewThread1").start();
				new Thread( rt, "NewThread2").start();
			}
		}
	}
}

