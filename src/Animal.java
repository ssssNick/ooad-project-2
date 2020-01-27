// Authors: Nick Brubaker and...
// Description: Implementation of animal class and subclasses
// References: 
// 		Printing the name of a class - https://stackoverflow.com/questions/6271417/java-get-the-current-class-name

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

class Hippo extends Pachyderm 
{
	
	public Hippo(String newName)
	{
		super(newName);
	}
	
		public void makeNoise() 
	{
		this.doSomething("making Hippo sounds");
	}

}

class Elephant extends Pachyderm 
{
	
	public Elephant(String newName)
	{
		super(newName);
	}
	
		public void makeNoise() 
	{
		this.doSomething("making Elephant sounds");
	}

}

class Rhino extends Pachyderm 
{
	
	public Rhino(String newName)
	{
		super(newName);
	}
	
		public void makeNoise() 
	{
		this.doSomething("making Rhino sounds");
	}

}

class Tiger extends Feline 
{
	
	public Tiger(String newName)
	{
		super(newName);
	}
	
		public void makeNoise() 
	{
		this.doSomething("growling");
	}

}

class Lion extends Feline 
{
	
	public Lion(String newName)
	{
		super(newName);
	}
	
		public void makeNoise() 
	{
		this.doSomething("roaring");
	}

}

class Cat extends Feline 
{
	
	public Cat(String newName)
	{
		super(newName);
	}
	
		public void makeNoise() 
	{
		this.doSomething("meowing");
	}

}

class Wolf extends Canine 
{
	
	public Wolf(String newName)
	{
		super(newName);
	}
	
		public void makeNoise() 
	{
		this.doSomething("making Wolf sounds");
	}

}

class Dog extends Canine 
{
	
	public Dog(String newName)
	{
		super(newName);
	}
	
		public void makeNoise() 
	{
		this.doSomething("woofing");
	}
}

