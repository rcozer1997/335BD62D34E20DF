#include "../include/pointsList.h"
#include "../include/coordList.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct cellPoints CellPoints;

struct cellPoints {
    Points* points;
    CellPoints* next;
};

struct pointsList{
    CellPoints* first;
    CellPoints* last;
};

PointsList* initPointsList(){
    PointsList* list = (PointsList*)malloc(sizeof(PointsList));
    list->first = NULL;
    list->last = NULL;

    return list;
}

void insertPointsList(PointsList* list, Points* points){
    CellPoints* new = (CellPoints*)malloc(sizeof(CellPoints));
    new->points = points;
    new->next = NULL;

    if(list->first == NULL){
        list->first = new;

    }
    if(list->last != NULL){
        list->last->next = new;
    }
        list->last = new;
}

void imprimeListaPontos(PointsList* l){
 
  CellPoints* p;

  for(p = l->first; p != NULL; p = p->next){
    imprimePontos(p->points);
     printf( "(" );

   imprimeListaCoord(returnCoordsList(p->points));

    printf( ")\n" );
  }

}