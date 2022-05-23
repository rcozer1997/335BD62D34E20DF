#include "../include/coords.h"
#include <stdio.h>
#include <stdlib.h>

struct coords{
    float value;
};

void imprimeCoords(Coords* c){
    printf("%.2f ", c->value);
}

Coords* setCoordsValue(float value, Coords* coord){
    coord->value = value;
    return coord;
}

Coords* allocCoords(){
    Coords* coord = (Coords*)malloc(sizeof(Coords));
    return coord;
}
    