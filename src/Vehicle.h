#pragma once
#include "ofMain.h"

using namespace std;

class Vehicle {

private:
    int xPos;
    int yPos;
    ofColor color;
    int direction;

public:
    int getXPos() const { return xPos; }
    int getYPos() const { return yPos; }
    ofColor getColor() const { return color; }
    int getDirection() const { return direction; }

    void setXPos(int xpos) { xPos = xpos; }
    void setYPos(int ypos) { yPos = ypos; }
    void setColor(ofColor c) { color = c; }
    void setDirection(int d) { direction = d; }

    Vehicle(int xPos, int yPos, ofColor c, int d) {
        this->xPos = xPos;
        this->yPos = yPos;
        this->color = c;
        this->direction = d;
    }

    // Car() {

    //     this->xPos = 0;
    //     this->yPos = 0;
    //     this->color = ofColor::white;
    //     this->direction = 1;

    // }

    virtual void draw() = 0;
    virtual void draw(ofColor c) = 0;

};
