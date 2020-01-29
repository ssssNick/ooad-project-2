/* Authors:	Nick Brubaker
 * 			Dominic Doty
 * 			Andrew Kuklinski
 * Description: zookeeper class to care for all the animals in the zoo
 * References:
 * 			Output to file: https://www.geeksforgeeks.org/redirecting-system-out-println-output-to-a-file-in-java/
 * 
*/
public class zookeeper{
	
	private String zname;
	
	public zookeeper(String newName) {
		this.zname = newName;
		System.out.println("Hello zoo! My name is " + this.zname);
		System.out.println("I will be taking care of you today!!!\n");
	}
	
	public void allWakeUp(Animal[] zoo) {
		System.out.println("**" + this.zname + " says: Time to wake up!");
		for(Animal animal : zoo) {
			animal.wakeUp();
		}
		System.out.println("-----------------------------------\n");
	}
	
	public void allRollCall(Animal[] zoo) {
		System.out.println("**" + this.zname + " says: Everyone here?");
		for(Animal animal : zoo) {
			animal.makeNoise();
		}
		System.out.println("-----------------------------------\n");
	}
	
	public void allEating(Animal[] zoo) {
		System.out.println("**" + this.zname + " says: FOOD!");
		for(Animal animal : zoo) {
			animal.eat();
		}
		System.out.println("-----------------------------------\n");
	}
	
	public void allExercise(Animal[] zoo) {
		System.out.println("**" + this.zname + " says: Time to get your exercise.");
		for(Animal animal : zoo) {
			animal.roam();
		}
		System.out.println("-----------------------------------\n");
	}
	
	public void allSleep(Animal[] zoo) {
		System.out.println("**" + this.zname + " says: The zoo is closed, time for sleeping.");
		for(Animal animal : zoo) {
			animal.sleep();
		}
		System.out.println("-----------------------------------\n");
	}
	
}