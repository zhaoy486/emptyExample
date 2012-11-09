#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    size = 50;
    ofEnableSmoothing();
    ofSetCircleResolution(5);
    ofBackground(255, 100, 40);
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
}

//--------------------------------------------------------------
void testApp::update(){
    yPos ++;

}

//--------------------------------------------------------------
void testApp::draw(){
    ofCircle(100, yPos, size);
    ofEllipse(mouseX,mouseY, size, size*4);
    ofRect(ofGetWidth()/2, ofGetHeight()/2, 50, 50);
    ofLine(ofGetWidth(), ofGetHeight(), ofGetWidth()/2, ofGetHeight()/2);
    cout<<"mysize is :"<<size<<endl;
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}