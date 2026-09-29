#include "RoboticArm.h"
#include <iostream>

using namespace std;

int main(){
	RoboticArm brazo(0, 0, 0, false);
	printf("Brazo creado en x:0 y:0 y z:0\nMoviendose a nuevas coordenadas:\n");
	brazo.move(4,7,-3);
	printf("Posición actual:\nX:%f\nY:%f\nZ:%f\n\n", brazo.getX(), brazo.getY(), brazo.getZ());
	brazo.grab();
	if(brazo.getAtlas())
		printf("El robot sujeta algo\n");
	else
		printf("El robot falló al coger algo");

}
