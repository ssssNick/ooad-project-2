// Authors:	Nick Brubaker
//			Dominic Doty
//			Andrew Kuklinski
// Description: Implementation of animal class and subclasses
// References: 
//		Printing the name of a class - https://stackoverflow.com/questions/3649278/how-can-i-get-the-class-name-from-a-c-object
//		Random number generation - https://stackoverflow.com/questions/363681/how-do-i-generate-random-integers-within-a-specific-range-in-java

#include "animal.h"

#include <iostream>
using std::cout;

//======ANIMAL======//

Animal::Animal(const string& newName) : name(newName), type("Animal"){}

void Animal::doSomething(const string& thing) {
	cout << "\n" << name << " the " << type << " started " << thing;
}

void Animal::sleep() {
	doSomething("sleeping");
}

void Animal::wakeUp() {
	doSomething("waking up");
}

void Animal::performNoise(){
	doSomething(noiseBehavior_inst->MakeNoise());
}
void Animal::setNoiseBehavior(NoiseBehavior * obj){
	noiseBehavior_inst = obj;
}

//======PACHYDERM======//

/*void Pachyderm::makeNoise() {
	doSomething("grunting");
}*/

void Pachyderm::eat() {
	doSomething("eating grass");
}

void Pachyderm::roam() {
	doSomething("roaming noisily");
}

//======FELINE======//

void Feline::eat() {
	doSomething("eating poor, poor animals");
}

void Feline::roam() {
	doSomething("stalking quietly");
}


//======CANINE======//

/*void Canine::makeNoise() {
	doSomething("howling");
}*/

void Canine::eat() {
	doSomething("eating a squirrel");
}

void Canine::roam() {
	doSomething("roaming happily");
}

//======HIPPO======//

Hippo::Hippo(const string& newName) : Pachyderm(newName) {
	type =  "Hippo";
}

/*void Hippo::makeNoise() {
	doSomething("making Hippo sounds");
}*/

//======ELEPHANT======//

Elephant::Elephant(const string& newName) : Pachyderm(newName) {
	type =  "Elephant";			
}	

/*void Elephant::makeNoise() {
	doSomething("making Elephant sounds");
}*/

void Elephant::eat() {
	doSomething("eating a tree top");
}

//======RHINO======//

Rhino::Rhino(const string& newName) : Pachyderm(newName) {
	type =  "Rhino";			
}	

/*void Rhino::makeNoise() {
	doSomething("making Rhino sounds");
}*/

void Rhino::roam() {
	doSomething("digging a midden");
}

//======TIGER======//

Tiger::Tiger(const string& newName) : Feline(newName) {
	type =  "Tiger";			
}	

/*void Tiger::makeNoise() {
	doSomething("growling");
}*/

//======LION======//

Lion::Lion(const string& newName) : Feline(newName) {
	type =  "Lion";			
}	

/*void Lion::makeNoise() {
	doSomething("roaring");
}*/

//======CAT======//

void Cat::iAmaCat() {

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

Cat::Cat(const string& newName) : Feline(newName) {
	type =  "Cat";			
}

void Cat::wakeUp() {
	iAmaCat();
}

/*void Cat::makeNoise() {
	iAmaCat();
}*/

void Cat::eat() {
	iAmaCat();
}

void Cat::roam() {
	iAmaCat();
}

void Cat::sleep() {
	iAmaCat();
}

//======WOLF======//

Wolf::Wolf(const string& newName) : Canine(newName) {
	type =  "Wolf";			
}	

/*void Wolf::makeNoise() {
	doSomething("making Wolf sounds");
}*/

//======DOG======//

Dog::Dog(const string& newName) : Canine(newName) {
	type =  "Dog";			
}	

/*void Dog::makeNoise() {
	doSomething("woofing");
}*/
