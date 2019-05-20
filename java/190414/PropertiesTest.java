import java.util.*;
import java.io.*;

public class PropertiesTest
{
	public static void main(String []args)
		throws Exception
	{
		FileInputStream ifs = new FileInputStream("test.properties");
		Properties p = new Properties();
		p.load(ifs);
		System.out.println(p.getProperty("address"));
	}
}
