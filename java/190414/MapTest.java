import java.util.*;
import java.math.*;

public class MapTest
{
	public static void main(String []args)
	{
		Map<String, BigInteger> sm = new HashMap<String,BigInteger>();
		sm.put(new String("Id"),new BigInteger("200131"));
		sm.put(new String("Phone"), new BigInteger("17602525529"));
		System.out.println(sm);
		System.out.println("keySet() : "+sm.keySet()); 
		System.out.println("getKey(): "+sm.EnTry.getKey()); 
	}
}
