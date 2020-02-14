/* Authors:	Nick Brubaker
 * 			Dominic Doty
 * 			Andrew Kuklinski
 * Description: Implementation of strategy pattern for the animal roll-call behavior
 *              The useage of this pattern can be found in zookeeper.cpp/.h under
 *              Zookeeper::allRollCall().
 * References:
 *      https://www.robertlarsononline.com/2017/01/27/strategy-pattern-using-cplusplus/
 *      https://www.youtube.com/watch?v=KAyJAYmYnik
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

/* NoiseBehavior class is the encapsulated interface class for the 
*  strategy pattern
*/
class NoiseBehavior
{
    public:
        virtual ~NoiseBehavior() {}
        virtual string MakeNoise() = 0;
};

/* The following classes inheriate from NoiseBehavior
*  and act as concrete sub-classes.
*/
class HippoNoise : public NoiseBehavior
{
    public:
        virtual ~HippoNoise() {}
        string MakeNoise();
};

class ElephantNoise : public NoiseBehavior
{
    public:
        virtual ~ElephantNoise() {}
        string MakeNoise();
};

class RhinoNoise : public NoiseBehavior
{
    public:
        virtual ~RhinoNoise() {}
        string MakeNoise();
};
class TigerNoise : public NoiseBehavior
{
    public:
        virtual ~TigerNoise() {}
        string MakeNoise();
};

class LionNoise : public NoiseBehavior
{
    public:
        virtual ~LionNoise() {}
        string MakeNoise();
};

class CatNoise : public NoiseBehavior
{
    public:
        virtual ~CatNoise() {}
        string MakeNoise();
};

class CanineNoise : public NoiseBehavior
{
    public:
        virtual ~CanineNoise() {}
        string MakeNoise();
};


#endif //STRATEGY_WAKEUP_H