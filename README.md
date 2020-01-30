# Project 1 - Object Oriented Design and Analysis
### Authors: Andrew Kuklinski & Nick Brubaker & Dominic Doty

## Running the Code
Example in OpenJDK 8:

*Prep:*  `mkdir -p bin build/src build/inc`

*Build:*  `javac -d bin -s build/src -h build/inc -verbose -deprecation src/*.java`

*Run:*  `java -cp bin Main`

*Run and capture output:*  `java -cp bin Main > dayatthezoo.out`


## Code Organization
* **src/**: Contains all source files.
  * **Main.java**: Instantiates all zoo animals and zookeeper, starts zookeeper methods.
  * **Animal.java**: Detailed animal implementations. Animals print outputs to stdout.
  * **zookeeper.java**: Class that runs a zoo full of animals.  Responsibilities of the zookeeper:
    * Wake the Animals
    * Roll Call the Animals
    * Feed the Animals
    * Exercise the Animals
    * Shut down the zoo (Animals to Sleep)
* **bin/**: Contains all compiled class files (assuming you're using the above compile command).
