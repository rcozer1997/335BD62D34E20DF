#ifndef POINTS_H
#define POINTS_H

typedef struct points Points;
#include "../include/coordList.h"

Points* initPoints(char* id);

Points* setPointID(char* str, Points* point);

Points* allocPoints();

void imprimePontos(Points* p);

CoordsList* returnCoordsList(Points* point);

Points* setPointCoords(CoordsList* coords, Points* point);

#endif 