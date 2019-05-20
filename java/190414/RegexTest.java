import java.util.regex.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.*;

public class RegexTest
{
	public static void main(String []args)
	{
		String reg = ".*?\\.txt";
		Pattern p = Pattern.compile(reg); 
		Matcher m = p.matcher(args.length>0 ? args[0] : new String("beijing.txt")); 
		if(!m.find())
		{
			System.out.println("match failed");
			System.exit(1);
		}
		System.out.println(m.group(0));
	}
}
