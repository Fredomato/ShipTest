#ifndef FRED_H
#define FRED_H

#ifdef __cplusplus
extern int FredsQuestWoodCollected;
extern int FredsQuestWoodOnHand;

extern "C" {
#include "z64actor.h"
#endif

bool HandleTreeBonk(Actor* actor);
extern uint32_t corralledTrees;

#ifdef __cplusplus
}
#endif

#endif