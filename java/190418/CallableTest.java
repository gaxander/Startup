import java.util.concurrent.*;

public class CallableTest
{
	public static void main(String[]args)
	
	{	
		CallableTest ct = new CallableTest();
		FutureTask<Integer> task = new FutureTask<Integer> (( Callable<Integer>)()->{
		int i=0;
		for(; i<50;i++)
		{
			System.out.println(Thread.currentThread().getName()+" "+i);
		}
			return i;
		});
		
		for(int i=0; i< 100; i++)
		{
			//System.out.println(Thread.currentThread().getName()+" "+i);
			if(i == 20)
			{
				new Thread(task, "ReturnableSubThread").start();
			}
		}
			try
			{
				System.out.println("SubThreadReturned :"+task.get());
			}
			catch (Exception e)
			{
				e.printStackTrace();
			}
		
	}
}

