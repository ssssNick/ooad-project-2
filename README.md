# Project 2 - Object Oriented Design and Analysis
### Authors: Andrew Kuklinski & Nick Brubaker & Dominic Doty

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