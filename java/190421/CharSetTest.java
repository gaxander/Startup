import java.util.*;
import java.io.*;
import java.nio.*;
import java.nio.charset.*;

public class CharSetTest{
	public static void main(String []args)
	{
		SortedMap<String, Charset> map = Charset.availableCharsets();
		for(String item: map.keySet())
		{
			System.out.println(item+"->"+map.get(item));
		}
	}
}
