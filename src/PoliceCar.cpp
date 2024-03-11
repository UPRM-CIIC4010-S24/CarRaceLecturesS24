
#include "PoliceCar.h"

using namespace std;

void PoliceCar::draw() {

    Car::draw();

    // Draw stobe light
    ofDrawCircle(getXPos()+28,getYPos()-4,2);


}