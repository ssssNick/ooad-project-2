# Project 2 - Object Oriented Design and Analysis
### Authors: Andrew Kuklinski & Nick Brubaker & Dominic Doty

## Environment: C++, GCC, Makefile

## Running the Code
Example assuming GCC/G++ and make installed.

*Build:* `make`

*Run:* `./proj_2`

*Clean:* `make clean`

## Code Organization
* **src/**: Contains all source files.
  * **main.cpp**: Instantiates all zoo animals and zookeeper, starts zookeeper methods.
  * **animal.cpp**: Detailed animal implementations. Animals print outputs to stdout.
  * **zookeeper.cpp**: Class that runs a zoo full of animals.  Responsibilities of the zookeeper:
    * Wake the Animals
    * Roll Call the Animals
    * Feed the Animals
    * Exercise the Animals
    * Shut down the zoo (Animals to Sleep)
* **build/**: Build objects directory
* **proj_2**: Output binary

## To Do:
- [x] Rewrite zoo in another OO language
- [x] Add at least one strategy pattern. One behaviour delegated and referenced rather than inheriting and overriding, initialize this behaviour in the strategy pattern manner. Clearly document where this is happening in the code.
- [x] Add observer pattern "ZooAnnouncer" that observes the Zookeeper. When the Zookeeper starts a task, it will notify the Announcer. Announcer will print what the Zookeeper is doing. Don't remove the Zookeepers original announcements. Once Zookeeper is done, ZooAnnouncer should deconstruct. Clearly document where this is happening in the code.
- [x] Capture output in text file for turn in.
- [ ] Create UML class diagram for final program with strategy and observer. Document all attributes, accessibility, and methods. Also include multiplicity in associations.
- [ ] Create UML sequence diagram for the revised Zoo. Show top level objects that are instantiated, executed, and deconstructed. (Readable: Go to Animal level, but not lower.)
- [x] Create UML activity diagram for the revised Zoo. Show major operations from start to finish. (Again, omit subclasses)
- [x] Create UML use case diagram for the Zookeeper (as actor). Consider include/extend tasks. Use the WAVE rule.
