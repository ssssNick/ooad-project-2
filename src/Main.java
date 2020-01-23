// Author: Nick Brubaker

public class Main
{

	public static void main(String[] args)
	{
		
		Animal a = new Animal("Allen");
		a.sleep();

	}

}

class Animal 
{
	
	private String name;
	
	public Animal(String newName)
	{
		this.name = newName;
	}
	
	public void sleep() 
	{
		System.out.println(this.name + " the Animal is sleeping");
	}

}

