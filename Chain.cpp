//
// Created by aschethor on 24.10.17.
//

#include "Chain.h"
#include "Constants.h"
#include <math.h>

double Chain::potential_term() {
    double potential_term = 0;
    for(int i=0;i<beads.size();i++){
        potential_term += beads[i].potential_term();
    }
    return potential_term*BETA/beads.size();
}

double Chain::kinetic_term() {
    double kinetic_term = beads[0].kinetic_term(beads[beads.size()-1]);
    for(int i=1;i<beads.size();i++){
        kinetic_term += beads[i].kinetic_term(beads[i-1]);
    }
    return kinetic_term/BETA/H_BAR*beads.size();
}

double Chain::probability() {
    return exp(-kinetic_term()-potential_term());
}