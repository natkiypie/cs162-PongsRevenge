#pragma once

#include "ofMain.h"

class Ball {

  public:
    Ball();
    void draw();
    void move();

  private:
    ofVec2f position;
    ofVec2f velocity;
    int width;
    int height;
    ofColor color;
};
