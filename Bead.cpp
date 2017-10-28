//
// Created by aschethor on 24.10.17.
//

#include "Bead.h"

double Bead::kinetic_term(Bead bead) {
    double kinetic_term = 0;
    for(int i=0;i<particles.size();i++){
        kinetic_term += particles[i].kinetic_term(bead.particles[i]);
    }
    return kinetic_term;
}

double Bead::potential_term() {
    double potential_term = 0;
    for(int i=0;i<particles.size();i++){
        potential_term += particles[i].potential_term();
    }
    return potential_term;
}