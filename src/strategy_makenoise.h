/* Authors:	Nick Brubaker
 * 			Dominic Doty
 * 			Andrew Kuklinski
 * Description: Implementation of strategy pattern for the animal wakeup behavior
 * References:
 *      https://www.robertlarsononline.com/2017/01/27/strategy-pattern-using-cplusplus/
 * 
*/

////////////////////////////////////////////////////////////////////
///      THIS IS THE STRATEGY PATTERN IMPLEMENTATION SPOT        ///
////////////////////////////////////////////////////////////////////


#ifndef STRATEGY_WAKEUP_H
#define STRATEGY_WAKEUP_H

#include <iostream>
using std::string;
using std::cout;

//this is the interface class 
class NoiseBehavior
{
    public:
        virtual ~NoiseBehavior() {}
        virtual void MakeNoise() = 0;
};

//these are the concrete sub-classes linked to the interface
class WolfNoise: public NoiseBehavior
{
    public:
        WolfNoise();
        virtual ~WolfNoise() {}
        virtual void MakeNoise() = 0;
};







#endif //STRATEGY_WAKEUP_H