/* Authors:	Nick Brubaker
 * 			Dominic Doty
 * 			Andrew Kuklinski
 * Description: zookeeper class to care for all the animals in the zoo
 * References:
 * 			Output to file: https://www.geeksforgeeks.org/redirecting-system-out-println-output-to-a-file-in-java/
 * 
*/

//TODO split into .cpp and .h files

#include "animal.cpp"
#include <iostream>
#include <vector>

//TODO pass this in instead of hardcoding it
#define NUM_ANIMALS 16

using namespace std;

class Zookeeper {
	
	private:
		string zname;
	
	public: 
	
		Zookeeper(string newName) {
			zname = newName;
			cout << "Hello zoo! My name is " << zname;
			cout << "\nI will be taking care of you today!!!\n";
		}
		
		void allWakeUp(Animal ** zoo) {
			cout << "**" << zname << " says: Time to wake up!";
			for(int i = 0; i < NUM_ANIMALS; i++) zoo[i]->wakeUp();
			cout << "\n-----------------------------------\n";
		}
		
		void allRollCall(Animal ** zoo) {
			cout << "**" << zname << " says: Everyone here?";
			for(int i = 0; i < NUM_ANIMALS; i++) zoo[i]->makeNoise();
			cout << "\n-----------------------------------\n";
		}
		
		void allEating(Animal ** zoo) {
			cout << "**" << zname << " says: FOOD!";
			for(int i = 0; i < NUM_ANIMALS; i++) zoo[i]->eat();
			cout << "\n-----------------------------------\n";
		}
		
		void allExercise(Animal ** zoo) {
			cout << "**" << zname << " says: Time to get your exercise.";
			for(int i = 0; i < NUM_ANIMALS; i++) zoo[i]->roam();
			cout << "\n-----------------------------------\n";
		}
		
		void allSleep(Animal ** zoo) {
			cout << "**" << zname << " says: The zoo is closed, time for sleeping.";
			for(int i = 0; i < NUM_ANIMALS; i++) zoo[i]->sleep();
			cout << "\n-----------------------------------\n";
		}
	
};
