import java.io.*;

public class FileInputStreamTest
{
	public static void main(String []args)
		throws Exception
	{
		FileInputStream fis = new FileInputStream("FileInputStreamTest.java");
		byte [] bbuf = new byte[1024];
		//南京南
		int hasRead = 0;
		while((hasRead = fis.read(bbuf))>0)
		{
			System.out.println(new String(bbuf, 0, hasRead));
		}
		fis.close();
		FileOutputStream fos = new FileOutputStream("out.dat");
		for(int index =0;index <500;index ++)
			fos.write(index & 0xff);
		fos.close();
	}
}
