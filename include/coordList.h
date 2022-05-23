#ifndef COORDLIST_H
#define COORDLIST_H
typedef struct coordsList CoordsList;
//pinto
#include "../include/pointsList.h"
#include "../include/coords.h"

CoordsList* initCoordsList();

void insertCoordsList(CoordsList* list, Coords* coord);

void imprimeListaCoord(CoordsList* l);

#endif