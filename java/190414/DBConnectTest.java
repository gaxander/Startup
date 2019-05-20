import java.util.*;
import java.sql.*;

public class DBConnectTest
{
	public static void main(String[]args)
	{
		String url=null, user=null, pwd=null, class_name=null;
		Connection conn=null;
		Locale current_locale = Locale.getDefault(Locale.Category.FORMAT);
		try
		{
			ResourceBundle rb = ResourceBundle.getBundle("zteconfig", current_locale);
			url = rb.getString("url");
			user = rb.getString("user");
			pwd = rb.getString("pwd");
			class_name = rb.getString("class_name");
		}
		catch(Exception e)
		{
			System.out.println(e);
			System.exit(1);
		}
		try{
			Class.forName(class_name);
			conn = DriverManager.getConnection(url, user, pwd);
		}
		catch (Exception e)
		{
			System.out.println(e);
			System.exit(2);
		}
		if(! conn.equals(null))
		{
			System.out.println("DB connected Successly!");
		}
		else
		{
			System.out.println("DB connected Failed!");
		}
		try
		{
			conn.close();
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
}
