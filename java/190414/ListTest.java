import java.util.ArrayList;
import java.util.List;

public class ListTest
{
	public static void main(String []args)
	{
		List<String> books = new ArrayList<String>();
		books.add(new String("疯狂Java讲义"));
		books.add(new String("南京南"));
		System.out.println(books);
		System.out.println(books.get(1));
	}
}

