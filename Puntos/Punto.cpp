#include <windows.h>
#include <iostream>
#include <cmath>
#include <array>
#include <string>

#define pi PI 3.14159265
#include "Punto.h"

using namespace std;

punto2d::punto2D() {
	a = 0;
	b = 0;
}

void punto2D::setPosition(float x, float y){
	a = x;
	b = y; 									}

void punto2D::transfer(float t1, float t2) {
	a += t1;
	b += t2; 	}

void punto2D::rotateRespectOrigin(float t1){
	a = c* cos(t1*pi/180) - b*sin(t1*pi/180);
	b = c* sin (t1*pi/180) + b*cos (t1*pi/180); }

void punto2D::scalar(float t1, float t2){
	a *= temp1;
	b *= temp1; 						}

float punto2D::getX(){
	return a; 		}

float punto2D::getY(){
	return b;
}