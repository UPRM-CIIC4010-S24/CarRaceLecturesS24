#pragma once
#include "ofMain.h"
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle {

public:

    Car(int xPos, int yPos, ofColor c, int d) : Vehicle(xPos, yPos, c, d) {}
    
    virtual void draw();
    virtual void draw(ofColor c);

};
