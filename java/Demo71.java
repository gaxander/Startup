import java.util.*;
public class Demo71{
	public static void main(String[]args){
		ArrayList al = new ArrayList();
		System.out.println(al);
		System.out.println("al.size():"+al.size());
		Clerk Liming = new Clerk("李明",32,10500);
		al.add(Liming);
		System.out.println(al);
		System.out.println("al.get(0):"+(Clerk)al.get(0));
	}
}
class Clerk{
	private String name;
	private int age;
	private float salary;
	public Clerk(String name,int age,float salary){
		this.name = name;
		this.age = age;
		this.salary = salary;

	}
	public String toString(){
		return "Clerk<Name:"+this.name+",age:"+this.age+",Salary:"+this.salary;
	}
}
