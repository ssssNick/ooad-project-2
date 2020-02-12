/* Authors:	Nick Brubaker
 * 			Dominic Doty
 * 			Andrew Kuklinski
 * Description: Zoo Announcer class that implements an observer pattern
 * 
*/

////////////////////////////////////////////////////////////////////
///      THIS IS THE OBSERVER PATTERN IMPLEMENTATION SPOT        ///
////////////////////////////////////////////////////////////////////

#include "zoo_announcer.h"
#include "zookeeper.h"
using std::cout;

ZooAnnouncer::ZooAnnouncer(Zookeeper& zookeeper) : keeper(zookeeper) {
    keeper.add_observer(*this);
}

ZooAnnouncer::~ZooAnnouncer() {
    keeper.remove_observer(*this);
    cout << "==> Announcer: I'm going home now.\n";
}

void ZooAnnouncer::update(Observable& subject) {
    if (&subject == &keeper)
    {
        Zookeeper_Activities_t status = keeper.get_status();
        announce_activity(status);
    }
    else
    {
        cout << "==> Announcer Error: Notified by an unexpected observable.\n";
    }
}

void ZooAnnouncer::announce_activity(Zookeeper_Activities_t status) {    
    switch (status)
    {
    case idle:
        cout << "==> Announcer: The Zookeeper isn't doing anything folks!\n";
        break;
    
    case waking:
        cout << "==> Announcer: Get ready folks, the Zookeeper is waking the animals!\n";
        break;

    case calling:
        cout << "==> Announcer: The Zookeeper says it's roll call time!\n";
        break;

    case feeding:
        cout << "==> Announcer: The Zookeeper is going to feed the animals now!\n";
        break;

    case exercising:
        cout << "==> Announcer: The Zookeeper will now make the animals move! (It isn't cruelty though)\n";
        break;

    case sleeping:
        cout << "==> Announcer: The Zookeeper is putting the animals to sleep. Time to go!\n";
        break;

    default:
        cout << "==> Announcer Error: Unhandled Zookeeper Status\n";
        break;
    }
}
