
#include "Car.h"

using namespace std;

void Car::draw() {

    draw(getColor());

}

void Car::draw(ofColor c) {

    ofSetColor(c);
    
    // Draw body
    ofDrawRectangle(getXPos()+0,getYPos()+10,60,10);
    // Draw roof
    ofDrawLine(getXPos()+10,getYPos()+10,getXPos()+20,getYPos()+0);
    ofDrawLine(getXPos()+20,getYPos()+0,getXPos()+40,getYPos()+0);
    ofDrawLine(getXPos()+40,getYPos()+0,getXPos()+50,getYPos()+10);

    // Draw tires
    ofDrawCircle(getXPos()+15,getYPos()+25,5);
    ofDrawCircle(getXPos()+45,getYPos()+25,5);

}