#pragma once

#include "ofMain.h"

#include "ofxMetaballs.h"

class ofApp : public ofBaseApp {
public:
	void setup();
	void update();
	void draw();
	
	MarchingCubes iso;
	ofEasyCam cam;
};
