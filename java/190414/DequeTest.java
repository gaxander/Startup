import java.util.*;

public class DequeTest
{
	public static void main(String [] args)
	{
		Deque<String> dq = new ArrayDeque<String>();
		dq.addLast(new String("南京南"));
		dq.addFirst(new String("北京西"));
		System.out.println(dq);
		System.out.println(dq.getLast());
		System.out.println(dq.getFirst());
	}
}
