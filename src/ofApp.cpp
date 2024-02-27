#include "ofApp.h"
#include "Car.h"

//--------------------------------------------------------------
void ofApp::setup(){

    int lane = 0;
    for (int i=0; i < ofApp::numCars; i++) { // Hardcoded 10
        cars.push_back(Car(0,lane,ofColor::yellow, 1));
        lane += 40;
    }

    // car1.setXPos(0);
    // car1.setYPos(0);
    // car1.setColor(ofColor::red);

}

//--------------------------------------------------------------
void ofApp::update(){

    for (int i = 0; i < ofApp::numCars; i++) {
        if ((cars[i].getDirection() == 1) && (cars[i].getXPos() + 60 < ofGetWindowWidth())) {
            cars[i].setXPos(cars[i].getXPos() + 5);
        } else if (cars[i].getDirection() == 1) {
            cars[i].setDirection(-1);
        } else if (cars[i].getXPos() > 0) {
            cars[i].setXPos(cars[i].getXPos() - 5);
        } else {
            cars[i].setDirection(1);
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    for (int i=0; i<ofApp::numCars; i++) {
        cars[i].draw();
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
