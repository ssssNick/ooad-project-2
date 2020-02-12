/* Authors:	Nick Brubaker
 * 			Dominic Doty
 * 			Andrew Kuklinski
 * Description: zookeeper class to care for all the animals in the zoo
 * References:
 * 			Output to file: https://www.geeksforgeeks.org/redirecting-system-out-println-output-to-a-file-in-java/
 * 
*/

#ifndef ZOOKEEPER_H
#define ZOOKEEPER_H

#include "animal.h"
#include "generic_observer.h"
#include <forward_list>
#include <iostream>
using std::string;

typedef enum {idle, waking, calling, feeding, exercising, sleeping}Zookeeper_Activities_t;

class Zookeeper : public Observable {
    private:
        string zname;
        std::forward_list<Observer*> observers;
        Zookeeper_Activities_t status;
        void set_status(Zookeeper_Activities_t new_status);
    public:
        explicit Zookeeper(const string& newName);
        virtual void add_observer(Observer& obs) override;
        virtual void remove_observer(Observer& obs) override;
        virtual void notify_observers() override;
        Zookeeper_Activities_t get_status();
        void allWakeUp(Animal ** zoo, const int num_animals);
        void allRollCall(Animal ** zoo, const int num_animals);
        void allEating(Animal ** zoo, const int num_animals);
        void allExercise(Animal ** zoo, const int num_animals);
        void allSleep(Animal ** zoo, const int num_animals);
};

#endif //ZOOKEEPER_H
