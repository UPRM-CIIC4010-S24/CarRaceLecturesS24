#pragma once
#include "ofMain.h"
#include "Car.h"

using namespace std;

class PoliceCar : public Car {

public:
    PoliceCar(int xPos, int yPos, ofColor c, int d) : Car(xPos,yPos,c,d) {}

    virtual void draw(); // Override draw method

};
