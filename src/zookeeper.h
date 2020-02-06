/* Authors:	Nick Brubaker
 * 			Dominic Doty
 * 			Andrew Kuklinski
 * Description: zookeeper class to care for all the animals in the zoo
 * References:
 * 			Output to file: https://www.geeksforgeeks.org/redirecting-system-out-println-output-to-a-file-in-java/
 * 
*/

#include <iostream>
#include <vector>
#include "animal.h"

using namespace std;

class Zookeeper {
    private:
        string zname;
    public:
        Zookeeper(string newName);
        void allWakeUp(Animal ** zoo, const int num_animals);
        void allRollCall(Animal ** zoo, const int num_animals);
        void allEating(Animal ** zoo, const int num_animals);
        void allExercise(Animal ** zoo, const int num_animals);
        void allSleep(Animal ** zoo, const int num_animals);
};