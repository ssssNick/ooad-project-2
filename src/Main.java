// Authors:	Nick Brubaker
//			Dominic Doty
//			Andrew Kuklinski
// Description: Simulates a zoo with animals

public class Main
{

	public static void main(String[] args)
	{
		
		Dog d = new Dog("Dan");
		d.sleep();
		d.roam();
		d.makeNoise();
		
		Cat c = new Cat("Chadwick");
		c.sleep();
		c.roam();
		c.makeNoise();
	}

}