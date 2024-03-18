
#include "Truck.h"

using namespace std;

void Truck::draw() {

    draw(getColor());

}

void Truck::draw(ofColor c) {

    ofSetColor(c);
    
    // Draw body
    ofDrawRectangle(getXPos()+40,getYPos()+10,20,10);

    // Draw cargo
    ofDrawRectangle(getXPos()+0,getYPos()+0,40,20);

    // Draw roof
    //ofDrawLine(getXPos()+10,getYPos()+10,getXPos()+20,getYPos()+0);
    //ofDrawLine(getXPos()+20,getYPos()+0,getXPos()+40,getYPos()+0);
    ofDrawLine(getXPos()+40,getYPos()+0,getXPos()+60,getYPos()+10);

    // Draw tires
    ofDrawCircle(getXPos()+15,getYPos()+25,5);
    ofDrawCircle(getXPos()+20,getYPos()+25,5);
    ofDrawCircle(getXPos()+45,getYPos()+25,5);

}