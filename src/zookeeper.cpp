/* Authors:	Nick Brubaker
 * 			Dominic Doty
 * 			Andrew Kuklinski
 * Description: zookeeper class to care for all the animals in the zoo
 * References:
 * 			Output to file: https://www.geeksforgeeks.org/redirecting-system-out-println-output-to-a-file-in-java/
 * 
*/

#include "zookeeper.h"
using std::cout;

// Notes on C++ observer from:
// https://riptutorial.com/cplusplus/example/24695/observer-pattern

Zookeeper::Zookeeper(const string& newName) : zname(newName), status(idle){
	cout << "### Hello zoo! My name is " << zname;
	cout << "\n### I will be taking care of you today!!!\n";
	cout << "-----------------------------------\n";
}

void Zookeeper::set_status(Zookeeper_Activities_t new_status){
	status = new_status;
}

Zookeeper_Activities_t Zookeeper::get_status(){
	return status;
}

void Zookeeper::add_observer(Observer& obs) {
	observers.push_front(&obs);
}

void Zookeeper::remove_observer(Observer& obs) {
	observers.remove(&obs);
}

void Zookeeper::notify_observers() {
	for(auto* obs : observers) {
		obs->update(*this);
	}
}

void Zookeeper::allWakeUp(Animal ** zoo, const int num_animals) {
	this->set_status(waking);
	notify_observers();
	cout << "### " << zname << " says: Time to wake up!";
	for(int i = 0; i < num_animals; i++) zoo[i]->wakeUp();
	cout << "\n-----------------------------------\n";
}

/*  This function implments the Strategy Pattern.
*/
void Zookeeper::allRollCall(Animal ** zoo, const int num_animals) {
	this->set_status(calling);
	notify_observers();
	cout << "### " << zname << " says: Everyone here?\n";

	NoiseBehavior * noise_objects[num_animals];
	HippoNoise * hn = new HippoNoise();
	noise_objects[0] = hn;
	ElephantNoise * en = new ElephantNoise();
	noise_objects[1] = en;
	RhinoNoise * rn = new RhinoNoise();
	noise_objects[2] = rn;
	TigerNoise * tn = new TigerNoise();
	noise_objects[3] = tn;
	LionNoise * ln = new LionNoise();
	noise_objects[4] = ln;
	CatNoise * cn = new CatNoise();
	noise_objects[5] = cn;
	CanineNoise * can1 = new CanineNoise();
	noise_objects[6] = can1;
	noise_objects[7] = can1;

	for(int i = 0; i < num_animals; i++)
	{
		if(i<=7)
		{
			zoo[i]->setNoiseBehavior(noise_objects[i]);	
		}
		else
		{
			zoo[i]->setNoiseBehavior(noise_objects[i-8]);
		}
		zoo[i]->performNoise();
	}
	cout << "\n-----------------------------------\n";


	// WolfNoise * wn1 = new WolfNoise();
	// otherNoise * other = new otherNoise();
	// animal_objects[0]->setNoiseBehavior(other);
	// animal_objects[0]->performNoise();
}

void Zookeeper::allEating(Animal ** zoo, const int num_animals) {
	this->set_status(feeding);
	notify_observers();
	cout << "### " << zname << " says: FOOD!";
	for(int i = 0; i < num_animals; i++) zoo[i]->eat();
	cout << "\n-----------------------------------\n";
}

void Zookeeper::allExercise(Animal ** zoo, const int num_animals) {
	this->set_status(exercising);
	notify_observers();
	cout << "### " << zname << " says: Time to get your exercise.";
	for(int i = 0; i < num_animals; i++) zoo[i]->roam();
	cout << "\n-----------------------------------\n";
}

void Zookeeper::allSleep(Animal ** zoo, const int num_animals) {
	this->set_status(sleeping);
	notify_observers();
	cout << "### " << zname << " says: The zoo is closed, time for sleeping.";
	for(int i = 0; i < num_animals; i++) zoo[i]->sleep();
	cout << "\n-----------------------------------\n";
}
