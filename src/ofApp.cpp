#include "ofApp.h"
#include "PoliceCar.h"

//--------------------------------------------------------------
void ofApp::setup(){

    int lane = 10;
    for (int i=0; i < ofApp::numCars; i++) { // Hardcoded 10
        if (i % 2 == 0) {
            cars.push_back(new PoliceCar(0,lane,ofColor::yellow, 1));
        } else {
            cars.push_back(new Car(0,lane,ofColor::yellow, 1));
        }
        lane += 40;
    }

    // car1.setXPos(0);
    // car1.setYPos(0);
    // car1.setColor(ofColor::red);

}

//--------------------------------------------------------------
void ofApp::update(){

    if (raceFinished) return;

    for (int i = 0; i < ofApp::numCars; i++) {
        cars[i]->setColor(ofColor::yellow);
        int moveDistance = ofRandom(5);
        if ((cars[i]->getDirection() == 1) && (cars[i]->getXPos() + 60 < ofGetWindowWidth())) {
            cars[i]->setXPos(cars[i]->getXPos() + moveDistance);
        } else if (cars[i]->getDirection() == 1) {
            raceFinished = true;
        // Dead code from here on
        } else if (cars[i]->getXPos() > 0) {
            cars[i]->setXPos(cars[i]->getXPos() - moveDistance);
        } else {
            raceFinished = true;
            // cars[i]->setDirection(1);
        }
    }
    int maxPosition = 0;  // Position of leading car 
    for (int i=1; i<ofApp::numCars; i++) {
        if (cars[i]->getXPos() > cars[maxPosition]->getXPos()) {
            maxPosition = i;
        }

    }
    cars[maxPosition]->setColor(ofColor::red);
    
    // for (int i=0; i<ofApp::numCars; i++) {
    //     if (cars[i]->getXPos() < 0) {
    //         raceFinished = true;
    //         break;
    //     }
    // }
}

//--------------------------------------------------------------
void ofApp::draw(){

    //cars[maxPosition].draw();

    for (int i=0; i<ofApp::numCars; i++) {
        cars[i]->draw();
    }
    // car1.draw();
    // Car(10,10,ofColor::blue).draw();
    // Car(100,100,ofColor::red).draw();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
