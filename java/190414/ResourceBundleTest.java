import java.util.*;

public class ResourceBundleTest
{
	public static void main(String[]args)
	{
		Locale currentLocale = Locale.getDefault(Locale.Category.FORMAT);
		ResourceBundle rb = ResourceBundle.getBundle("person", currentLocale);
		Integer age = Integer.valueOf(rb.getString("age"));
		System.out.println(rb.getString("name"));
		System.out.println(rb.getString("genda")); 
		System.out.println(rb.getString("address")); 
		System.out.println(age);
	}
}
