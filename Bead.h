//
// Created by aschethor on 24.10.17.
//

#ifndef PROJECTQM_ND_BEAD_H
#define PROJECTQM_ND_BEAD_H

#include <vector>
#include "Particle.h"

using namespace std;

class Bead {
public:
    vector<Particle> particles;
    double kinetic_term(Bead bead);
    double potential_term();
    void step(vector<double> randoms);//TODO
};


#endif //PROJECTQM_ND_BEAD_H
