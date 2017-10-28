//
// Created by aschethor on 24.10.17.
//

#ifndef PROJECTQM_ND_CHAIN_H
#define PROJECTQM_ND_CHAIN_H

#include <vector>
#include "Bead.h"

using namespace std;

class Chain {
public:
    vector<Bead> beads;
    double kinetic_term();
    double potential_term();
    double probability();
    void step();//TODO
};


#endif //PROJECTQM_ND_CHAIN_H
