// Authors:	Nick Brubaker
//			Dominic Doty
//			Andrew Kuklinski
// Description: Implementation of animal class and subclasses
// References: 
//		Printing the name of a class - https://stackoverflow.com/questions/3649278/how-can-i-get-the-class-name-from-a-c-object
//		Random number generation - https://stackoverflow.com/questions/363681/how-do-i-generate-random-integers-within-a-specific-range-in-java

#ifndef ANIMAL_H
#define ANIMAL_H

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
		Animal(string newName);
		void doSomething(string thing);
		void sleep();
		void wakeUp();
		virtual void makeNoise() = 0;
		virtual void eat() = 0;
		virtual void roam() = 0;
};

class Pachyderm: public Animal {
    public:
        using Animal::Animal;
		void makeNoise();
		void eat();
		void roam();
};

class Feline: public Animal {
    public:
        using Animal::Animal;
        void eat();
        void roam();
};

class Canine: public Animal {
    public:
        using Animal::Animal;
        void makeNoise();
        void eat();
        void roam();
};

class Hippo: public Pachyderm {
    public:
        Hippo(string newName);
        void makeNoise();
};

class Elephant: public Pachyderm {
    public:
        Elephant(string newName);
        void makeNoise();
        void eat();
};

class Rhino: public Pachyderm {
    public:
        Rhino(string newName);
        void makeNoise();
        void roam();
};

class Tiger: public Feline {
    public:
        Tiger(string newName);
        void makeNoise();
};

class Lion: public Feline {
    public:
        Lion(string newName);
        void makeNoise();
};

class Cat: public Feline {
    private:
        void iAmaCat();
    public:
        Cat(string newName);
        void wakeUp();
        void makeNoise();
        void eat();
        void roam();
        void sleep();
};

class Wolf: public Canine {
    public:
        Wolf(string newName);
        void makeNoise();
};
class Dog: public Canine {
    public:
        Dog(string newName);
        void makeNoise();
};

#endif //ANIMAL_H