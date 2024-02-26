#include "ofApp.h"
#include "Car.h"

//--------------------------------------------------------------
void ofApp::setup(){

    car1.setXPos(0);
    car1.setYPos(0);
    car1.setColor(ofColor::red);

}

//--------------------------------------------------------------
void ofApp::update(){

    if ((car1.getDirection() == 1) && (car1.getXPos()+60 < ofGetWindowWidth())) {
            car1.setXPos(car1.getXPos()+5);
    } else if (car1.getDirection() == 1) {
            car1.setDirection(-1);
    } else if (car1.getXPos() > 0) {
            car1.setXPos(car1.getXPos()-5);
    } else {
            car1.setDirection(1);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    car1.draw();
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
