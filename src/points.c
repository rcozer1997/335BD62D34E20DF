#include "../include/points.h"
#include "../include/coordList.h"
#include <stdio.h>
#include <stdlib.h>

struct points{
    char* id;
    CoordsList* coordinatesList;   
};


Points* allocPoints(){
    Points* point = (Points*)malloc(sizeof(Points));
    return point;
}
    
Points* setPointID(char* str, Points* point){
    point->id = str;
    return point;
}

void imprimePontos(Points* p){
    printf("%s", p->id);
}

CoordsList* returnCoordsList(Points* point){
    return point->coordinatesList;
}

Points* setPointCoords(CoordsList* coords, Points* point){
    point->coordinatesList = coords;
        return point;
}
/*
char* returnPointID(Points* point){
    return point->id;
}
*/