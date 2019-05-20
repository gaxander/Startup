import java.io.*;

public class FileTest
{
	public static void main(String []args)
	{
		File newFile = new File("/home/jay/lan/java/190414/FileTest.class");
		String file_path = newFile.getPath();
		String absolutePath = newFile.getAbsolutePath();
		System.out.println(file_path);
		System.out.println(absolutePath);
		System.out.println(newFile.getParent());
		System.out.println(newFile.isFile());
		System.out.println(newFile.exists());
		System.out.println(newFile.renameTo(new File("FileTest.class2")));
		System.out.println(newFile.canRead());
	}
}

