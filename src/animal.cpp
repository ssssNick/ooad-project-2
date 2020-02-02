// Authors:	Nick Brubaker
//			Dominic Doty
//			Andrew Kuklinski
// Description: Implementation of animal class and subclasses
// References: 
//		Printing the name of a class - https://stackoverflow.com/questions/6271417/java-get-the-current-class-name
//		Random number generation - https://stackoverflow.com/questions/363681/how-do-i-generate-random-integers-within-a-specific-range-in-java

import java.util.concurrent.ThreadLocalRandom;

abstract class Animal {

	private String type;
	private String name;

	public Animal(String newName) {
		this.type = this.getClass().getName();
		this.name = newName;
	}

	public void doSomething(String thing) {
		System.out.println(this.name + " the " + this.type + " started " + thing);
	}

	public void sleep() {
		this.doSomething("sleeping");
	}

	public void wakeUp() {
		this.doSomething("waking up");
	}

	abstract public void makeNoise();

	abstract public void eat();

	abstract public void roam();
}

abstract class Pachyderm extends Animal {

	public Pachyderm(String newName) {
		super(newName);
	}

	public void makeNoise() {
		this.doSomething("grunting");
	}

	public void eat() {
		this.doSomething("eating grass");
	}

	public void roam() {
		this.doSomething("roaming noisily");
	}

}

abstract class Feline extends Animal {

	public Feline(String newName) {
		super(newName);
	}

	public void eat() {
		this.doSomething("eating poor, poor animals");
	}

	public void roam() {
		this.doSomething("stalking quietly");
	}

}

abstract class Canine extends Animal {

	public Canine(String newName) {
		super(newName);
	}

	public void makeNoise() {
		this.doSomething("howling");
	}

	public void eat() {
		this.doSomething("eating a squirrel");
	}

	public void roam() {
		this.doSomething("roaming happily");
	}

}

class Hippo extends Pachyderm {

	public Hippo(String newName) {
		super(newName);
	}

	public void makeNoise() {
		this.doSomething("making Hippo sounds");
	}

}

class Elephant extends Pachyderm {

	public Elephant(String newName) {
		super(newName);
	}

	public void makeNoise() {
		this.doSomething("making Elephant sounds");
	}

	public void eat() {
		this.doSomething("eating a tree top");
	}

}

class Rhino extends Pachyderm {

	public Rhino(String newName) {
		super(newName);
	}

	public void makeNoise() {
		this.doSomething("making Rhino sounds");
	}

	public void roam() {
		this.doSomething("digging a midden");
	}

}

class Tiger extends Feline {

	public Tiger(String newName) {
		super(newName);
	}

	public void makeNoise() {
		this.doSomething("growling");
	}

}

class Lion extends Feline {

	public Lion(String newName) {
		super(newName);
	}

	public void makeNoise() {
		this.doSomething("roaring");
	}

}

class Cat extends Feline {

	public Cat(String newName) {
		super(newName);
	}

	private void iAmaCat() {
		int random = ThreadLocalRandom.current().nextInt(0, 6);

		switch (random) {
		case 0:
			this.doSomething("waking up");
			break;
		case 1:
			this.doSomething("meowing");
			break;
		case 2:
			this.doSomething("eating");
			break;
		case 3:
			this.doSomething("prowling");
			break;
		case 4:
			this.doSomething("laying on laptop keyboard while you try to type");
			break;
		case 5:
			this.doSomething("sleeping");
			break;
		default:
			this.doSomething("random number error");
			break;
		}
	}

	public void wakeUp() {
		this.iAmaCat();
	}

	public void makeNoise() {
		this.iAmaCat();
	}

	public void eat() {
		this.iAmaCat();
	}

	public void roam() {
		this.iAmaCat();
	}

	public void sleep() {
		this.iAmaCat();
	}
}

class Wolf extends Canine {

	public Wolf(String newName) {
		super(newName);
	}

	public void makeNoise() {
		this.doSomething("making Wolf sounds");
	}

}

class Dog extends Canine {

	public Dog(String newName) {
		super(newName);
	}

	public void makeNoise() {
		this.doSomething("woofing");
	}
}