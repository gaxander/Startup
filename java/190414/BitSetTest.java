import java.util.*;

public class BitSetTest{
	public static void main(String []args){
		Random rand = new  Random();
		byte bt = (byte) rand.nextInt();
		BitSet bb = new BitSet();
		for (int i =7; i>=0; i--)
		{
			if(((1<<i)&bt)!=0)
				bb.set(i);
			else
				bb.clear(i);
		}
		System.out.println("Byte value: " + bt);
		System.out.println(bb);
	}
}
