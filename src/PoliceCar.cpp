
#include "PoliceCar.h"

using namespace std;

void PoliceCar::draw(ofColor c) {

    Car::draw(c);

    // Draw stobe light
    ofDrawCircle(getXPos()+28,getYPos()-4,2);


}

void PoliceCar::draw() { 
    draw(getColor());
}