// Authors:	Nick Brubaker
//			Dominic Doty
//			Andrew Kuklinski
// Description: Implementation of animal class and subclasses
// References: 
//		Printing the name of a class - https://stackoverflow.com/questions/3649278/how-can-i-get-the-class-name-from-a-c-object
//		Random number generation - https://stackoverflow.com/questions/363681/how-do-i-generate-random-integers-within-a-specific-range-in-java

//TODO split into .cpp and .h files

#ifndef ANIMAL
#define ANIMAL

#include <stdlib.h>
#include <iostream>
#include <typeinfo>

using namespace std;

class Animal {

	private:
		string name;

	protected:
		string type;

	public: 
		Animal(string newName) {
			type =  "Animal";
			name = newName;
		}

		void doSomething(string thing) {
			cout << "\n" << name << " the " << type << " started " << thing;
		}

		virtual void sleep() {
			doSomething("sleeping");
		}

		virtual void wakeUp() {
			doSomething("waking up");
		}

		virtual void makeNoise() {

		}

		virtual void eat() {

		}

		virtual void roam() {
			
		}
};

class Pachyderm: public Animal {

	public:

		Pachyderm(string newName) : Animal(newName) {

		}

		void makeNoise() {
			doSomething("grunting");
		}

		void eat() {
			doSomething("eating grass");
		}

		void roam() {
			doSomething("roaming noisily");
		}

};

class Feline: public Animal {

	public:

		Feline(string newName) : Animal(newName) {

		}
	
		void eat() {
			doSomething("eating poor, poor animals");
		}

		void roam() {
			doSomething("stalking quietly");
		}

};

class Canine: public Animal {

	public:

		Canine(string newName) : Animal(newName) {

		}
	
		void makeNoise() {
			doSomething("howling");
		}

		void eat() {
			doSomething("eating a squirrel");
		}

		void roam() {
			doSomething("roaming happily");
		}

};

class Hippo: public Pachyderm {

	public:

		Hippo(string newName) : Pachyderm(newName) {
			type =  "Hippo";
		}
	
		void makeNoise() {
			doSomething("making Hippo sounds");
		}

};

class Elephant: public Pachyderm {

	public:

		Elephant(string newName) : Pachyderm(newName) {
			type =  "Elephant";			
		}	
		
		void makeNoise() {
			doSomething("making Elephant sounds");
		}

		void eat() {
			doSomething("eating a tree top");
		}

};

class Rhino: public Pachyderm {

	public:

		Rhino(string newName) : Pachyderm(newName) {
			type =  "Rhino";			
		}	
	
		void makeNoise() {
			doSomething("making Rhino sounds");
		}

		void roam() {
			doSomething("digging a midden");
		}

};

class Tiger: public Feline {

	public:

		Tiger(string newName) : Feline(newName) {
			type =  "Tiger";			
		}	
	
		void makeNoise() {
			doSomething("growling");
		}

};

class Lion: public Feline {

	public:

		Lion(string newName) : Feline(newName) {
			type =  "Lion";			
		}	
	
		void makeNoise() {
			doSomething("roaring");
		}

};

class Cat: public Feline {

	private: 
	
		void iAmaCat() {

			int random = rand() % 6;

			switch (random) {

			case 0:
				doSomething("waking up");
				break;
			case 1:
				doSomething("meowing");
				break;
			case 2:
				doSomething("eating");
				break;
			case 3:
				doSomething("prowling");
				break;
			case 4:
				doSomething("laying on laptop keyboard while you try to type");
				break;
			case 5:
				doSomething("sleeping");
				break;
			default:
				doSomething("random number error");
				break;
			}
		}

	public:

		Cat(string newName) : Feline(newName) {
			type =  "Cat";			
		}	

		void wakeUp() {
			iAmaCat();
		}

		void makeNoise() {
			iAmaCat();
		}

		void eat() {
			iAmaCat();
		}

		void roam() {
			iAmaCat();
		}

		void sleep() {
			iAmaCat();
		}

};

class Wolf: public Canine {

	public:

		Wolf(string newName) : Canine(newName) {
			type =  "Wolf";			
		}	
	
		void makeNoise() {
			doSomething("making Wolf sounds");
		}

};

class Dog: public Canine {

	public:

		Dog(string newName) : Canine(newName) {
			type =  "Dog";			
		}	
	
		void makeNoise() {
			doSomething("woofing");
		}

};

#endif