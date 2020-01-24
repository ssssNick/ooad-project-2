// Authors: Nick Brubaker...
// References: 
// 		Printing the name of a class - https://stackoverflow.com/questions/6271417/java-get-the-current-class-name

public class Main
{

	public static void main(String[] args)
	{
		
		Canine a = new Canine("Allen");
		a.roam();
		
	}

}

class Animal 
{

	private String type;
	private String name;
	
	public Animal(String newName)
	{
		this.type = this.getClass().getName();
		this.name = newName;
	}
	
	public void doSomething(String thing)
	{
		System.out.println(this.name + " the " + this.type + " started " + thing);		
	}
	
	public void sleep() 
	{
		this.doSomething("sleeping");
	}

}

class Pachyderm extends Animal 
{
	
	public Pachyderm(String newName)
	{
		super(newName);
	}
	
		public void roam() 
	{
		this.doSomething("roaming noisily");
	}

}

class Feline extends Animal 
{
	
	public Feline(String newName)
	{
		super(newName);
	}
	
		public void roam() 
	{
		this.doSomething("roaming quietly");
	}

}

class Canine extends Animal 
{
	
	public Canine(String newName)
	{
		super(newName);
	}
	
		public void roam() 
	{
		this.doSomething("roaming happily");
	}

}

