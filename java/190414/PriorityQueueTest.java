import java.util.*;

public class PriorityQueueTest
{
	public static void main(String[]args)
	{
		PriorityQueue<Integer> pq = new PriorityQueue<Integer>();
		pq.offer(4);
		pq.offer(3);
		pq.offer(2);
		pq.offer(1);
		System.out.println(pq);
		pq.add(9);
		System.out.println(pq.element());
		pq.clear();
		System.out.println(pq);
	}
}
