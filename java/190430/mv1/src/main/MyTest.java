import org.springframework.boot.*;
import org.springframework.boot.autoconfigure.*;
import org.sprintframework.web.bind.annotation.*;

@RestContronller
@EnableAutoConfiguration
public class MyTest
{
	@RequstMapping("/")
	String home() {
		return "Hello World!";
	}

	public static void main(String[]args)
	{
		SpringApplication.run(MyTest.class, args);
	}
}
