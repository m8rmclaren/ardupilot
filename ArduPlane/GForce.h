//
// Created by Hayden Roszell on 10/19/20.
//

#ifndef ARDUPILOT_GFORCE_H
#define ARDUPILOT_GFORCE_H


class GForce {
private:
    int gForceX;
    int gForceY;
    int gForceZ;
    int gForce; // magnitude of gforce
public:
    void calcForceX();
    void calcForceY();
    void calcForceZ();
    void calcTotalForce();
};


#endif //ARDUPILOT_GFORCE_H
