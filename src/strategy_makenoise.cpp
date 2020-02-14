/* Authors:	Nick Brubaker
 * 			Dominic Doty
 * 			Andrew Kuklinski
 * Description: Implementation of strategy pattern for the animal wakeup behavior
 * References:
 * 
*/

#include "strategy_makenoise.h"

string HippoNoise::MakeNoise() {
    return "making hippo sounds";
}

string ElephantNoise::MakeNoise() {
    return "making elephant sounds";
}

string RhinoNoise::MakeNoise() {
    return "making rhino sounds";
}

string TigerNoise::MakeNoise() {
    return "growling";
}

string LionNoise::MakeNoise() {
    return "roaring";
}

string CatNoise::MakeNoise() {
    int random = rand() % 6;
    string cat_out;
	switch (random) {
        case 0:
            cat_out = "waking up";
            break;
        case 1:
            cat_out = "meowing";
            break;
        case 2:
            cat_out = "eating";
            break;
        case 3:
            cat_out = "prowling";
            break;
        case 4:
            cat_out = "laying on laptop keyboard while you try to type";
            break;
        case 5:
            cat_out = "sleeping";
            break;
        default:
            cat_out = "random number error";
            break;
	}
    return cat_out;
}

string CanineNoise::MakeNoise() {
    return "howling";
}

