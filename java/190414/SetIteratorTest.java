import java.util.*;

public class SetIteratorTest
{
	public static void main(String []args)
	{
		Set<String> s = new HashSet<String>();
		s.add(new String("南"));
		s.add(new String("北"));
		s.add(new String("东"));
		s.add(new String("西"));
		s.add(new String("中"));
		Iterator i = s.iterator();
		while(i.hasNext())
			System.out.println(i.next());
	}
}

