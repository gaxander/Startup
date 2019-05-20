import java.io.*;

public class FileWriterTest
{
	public static void main(String []args)
		throws Exception
	{
		FileWriter fw = new FileWriter("out.txt"); 
		for(int index =0;index <500;index ++)
		{
			fw.write((index%128+'0') & 0x7f);
		}
		fw.close();
	}
}
