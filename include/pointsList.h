#ifndef POINTSLIST_H
#define POINTSLIST_H
typedef struct pointsList PointsList;
#include "../include/points.h"

PointsList* initPointsList();

void insertPointsList(PointsList* list, Points* points);

void imprimeListaPontos(PointsList* l);

#endif