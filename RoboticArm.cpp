#include "RoboticArm.h"


RoboticArm::RoboticArm(double a, double b, double c, bool atl){
	x=a;
	y=b;
	z=c;
	atlas=atl;
}
double RoboticArm::getX(){
	return x;
}
double RoboticArm::getY(){
	return y;
}
double RoboticArm::getZ(){
	return z;
}
bool RoboticArm::getAtlas(){
	return atlas;
}

void RoboticArm::move(double a, double b, double c){
	x+=a;
	y+=b;
	z+=c;
}

//Aquí se podría hacer una gestión de errores para que reaccione ante la orden de agarrar si ya lo tienes

void RoboticArms::grab(){
	atlas = true;
}
RoboticArm::release(){
	atlas = false;
}
