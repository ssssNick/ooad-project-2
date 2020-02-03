// Authors:	Nick Brubaker
//			Dominic Doty
//			Andrew Kuklinski
// Description: Simulates a zoo with animals


#include "animal.cpp"
#include "zookeeper.cpp"
#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	Animal *animal_objects[16];

	Animal *a;

	animal_objects[0] = new Hippo("Harold");
	animal_objects[1] = new Elephant("Ellie");
	animal_objects[2] = new Rhino("Ronald");
	animal_objects[3] = new Tiger("Tim");
	animal_objects[4] = new Lion("Lauren");
	animal_objects[5] = new Cat("Chadwick");
	animal_objects[6] = new Wolf("Winona");
	animal_objects[7] = new Dog("Darcy");
	animal_objects[8] = new Hippo("Halbarad");
	animal_objects[9] = new Elephant("Elrond");
	animal_objects[10] = new Rhino("Radagast");
	animal_objects[11] = new Tiger("Took, Pippin");
	animal_objects[12] = new Lion("Legolas");
	animal_objects[13] = new Cat("Celeborn");
	animal_objects[14] = new Wolf("Witch-King of Angmar");
	animal_objects[15] = new Dog("Denethor II");

	Zookeeper *handler = new Zookeeper("BillyRay");

	handler->allWakeUp(animal_objects);
	handler->allRollCall(animal_objects);
	handler->allEating(animal_objects);
	handler->allExercise(animal_objects);
	handler->allSleep(animal_objects);
}
