#ifndef COORDS_H
#define COORDS_H

typedef struct coords Coords;

void imprimeCoords(Coords* c);

Coords* setCoordsValue(float token, Coords* coord);

Coords* allocCoords();

#endif