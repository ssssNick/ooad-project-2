/* Authors:	Nick Brubaker
 * 			Dominic Doty
 * 			Andrew Kuklinski
 * Description: Zoo Announcer class that implements an observer pattern
 * 
*/

////////////////////////////////////////////////////////////////////
///      THIS IS THE OBSERVER PATTERN IMPLEMENTATION SPOT        ///
////////////////////////////////////////////////////////////////////

#include "generic_observer.h"
#include "zookeeper.h"

class ZooAnnouncer : public Observer {
    public:
        explicit ZooAnnouncer(Zookeeper& zookeeper);
        ~ZooAnnouncer();
        virtual void update(Observable& subject) override;
    private:
        Zookeeper& keeper;
        void announce_activity(Zookeeper_Activities_t status);
};