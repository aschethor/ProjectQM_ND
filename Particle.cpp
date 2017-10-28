//
// Created by aschethor on 24.10.17.
//

#include "Particle.h"
#include <math.h>

double inline square(double a){
    return a*a;
}

double Particle::distance(Particle particle) {
    return sqrt(distance_squared(particle));
}

double Particle::distance_squared(Particle particle) {
    return square(x-particle.x)+square(y-particle.y)+square(z-particle.z);
}

double Particle::kinetic_term(Particle particle) {
    return mass*distance_squared(particle);
}