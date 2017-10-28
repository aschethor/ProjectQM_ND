//
// Created by aschethor on 24.10.17.
//

#ifndef PROJECTQM_ND_PARTICLE_H
#define PROJECTQM_ND_PARTICLE_H

#include <vector>

using namespace std;

class Particle {
private:
    double x,y,z;
    double mass;
    //double charge; --> later

public:
    double distance_squared(Particle particle);
    double distance(Particle particle);
    double kinetic_term(Particle particle);
    double potential_term();//TODO
    void step(vector<double> randoms);//TODO
};

#endif //PROJECTQM_ND_PARTICLE_H