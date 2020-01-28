import java.util.AbstractMap;

// Authors:	Nick Brubaker
//			Dominic Doty
//			Andrew Kuklinski
// Description: Simulates a zoo with animals

public class Main {

	public static void main(String[] args) {
		// Testing
		Animal[] animal_objects = new Animal[8];
		animal_objects[0] = new Hippo("Harold");
		animal_objects[1] = new Elephant("Ellie");
		animal_objects[2] = new Rhino("Ronald");
		animal_objects[3] = new Tiger("Tim");
		animal_objects[4] = new Lion("Lauren");
		animal_objects[5] = new Cat("Chadwick");
		animal_objects[6] = new Wolf("Winona");
		animal_objects[7] = new Dog("Darcy");

		for (Animal animal : animal_objects) {
			animal.wakeUp();
			animal.makeNoise();
			animal.eat();
			animal.roam();
			animal.sleep();
		}
		// End Test

	}
}