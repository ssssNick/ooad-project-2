/* Authors:	Nick Brubaker
 * 			Dominic Doty
 * 			Andrew Kuklinski
 * Description: Interface for a generic observer/observable
 * References:
 * 
*/

#ifndef GENERIC_OBSERVER_H
#define GENERIC_OBSERVER_H

// Notes on C++ interfaces from:
// https://stackoverflow.com/questions/318064/how-do-you-declare-an-interface-in-c

// Notes on C++ observer from:
// https://riptutorial.com/cplusplus/example/24695/observer-pattern

class Observer;
class Observable;

class Observer {
    public:
        virtual ~Observer() {}
        virtual void update(Observable& subject) = 0;
};

class Observable {
    public:
        virtual ~Observable() {}
        virtual void add_observer(Observer& obs) = 0;
        virtual void remove_observer(Observer& obs) = 0;
        virtual void notify_observers() = 0;
};

#endif //GENERIC_OBSERVER_H
