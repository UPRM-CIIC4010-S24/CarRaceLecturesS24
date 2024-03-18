#pragma once
#include "ofMain.h"
#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle {

public:

    Truck(int xPos, int yPos, ofColor c, int d) : Vehicle(xPos, yPos, c, d) {}
    
    virtual void draw();
    virtual void draw(ofColor c);

};
