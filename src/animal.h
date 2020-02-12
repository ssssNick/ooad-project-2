// Authors:	Nick Brubaker
//			Dominic Doty
//			Andrew Kuklinski
// Description: Implementation of animal class and subclasses
// References:
//		Printing the name of a class - https://stackoverflow.com/questions/3649278/how-can-i-get-the-class-name-from-a-c-object
//		Random number generation - https://stackoverflow.com/questions/363681/how-do-i-generate-random-integers-within-a-specific-range-in-java

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using std::string;

class Animal
{
private:
    string name;

protected:
    string type;

public:
    explicit Animal(const string &newName);
    virtual ~Animal() {}
    void doSomething(const string &thing);
    virtual void sleep();
    virtual void wakeUp();
    virtual void makeNoise() = 0;
    virtual void eat() = 0;
    virtual void roam() = 0;
};

class Pachyderm : public Animal
{
public:
    using Animal::Animal;
    virtual void makeNoise() override;
    virtual void eat() override;
    virtual void roam() override;
};

class Feline : public Animal
{
public:
    using Animal::Animal;
    virtual void eat() override;
    virtual void roam() override;
};

class Canine : public Animal
{
public:
    using Animal::Animal;
    virtual void makeNoise() override;
    virtual void eat() override;
    virtual void roam() override;
};

class Hippo : public Pachyderm
{
public:
    explicit Hippo(const string &newName);
    void makeNoise() override;
};

class Elephant : public Pachyderm
{
public:
    explicit Elephant(const string &newName);
    void makeNoise() override;
    void eat() override;
};

class Rhino : public Pachyderm
{
public:
    explicit Rhino(const string &newName);
    void makeNoise() override;
    void roam() override;
};

class Tiger : public Feline
{
public:
    explicit Tiger(const string &newName);
    void makeNoise() override;
};

class Lion : public Feline
{
public:
    explicit Lion(const string &newName);
    void makeNoise() override;
};

class Cat : public Feline
{
private:
    void iAmaCat();

public:
    explicit Cat(const string &newName);
    void wakeUp() override;
    void makeNoise() override;
    void eat() override;
    void roam() override;
    void sleep() override;
};

class Wolf : public Canine
{
public:
    explicit Wolf(const string &newName);
    void makeNoise() override;
};
class Dog : public Canine
{
public:
    explicit Dog(const string &newName);
    void makeNoise() override;
};

#endif //ANIMAL_H
