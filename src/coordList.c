#include "../include/coordList.h"
#include "../include/coords.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct cellCoords CellCoords;

struct coordsList{
    CellCoords* first;
    CellCoords* last;
};

struct cellCoords {
    Coords* coordinates;
    CellCoords* next;
};

CoordsList* initCoordsList(){
    CoordsList* list = (CoordsList*)malloc(sizeof(CoordsList));
    list->first = NULL;
    list->last = NULL;

    return list;
}

void insertCoordsList(CoordsList* list, Coords* coord){
    CellCoords* new = (CellCoords*)malloc(sizeof(CellCoords));
    new->coordinates = coord;
    new->next = NULL;

    if(list->first == NULL){
        list->first = new;

    }
    if(list->last != NULL){
        list->last->next = new;
    }
        list->last = new;
}


void imprimeListaCoord(CoordsList* l){
 
  CellCoords* c;

  for(c = l->first; c != NULL; c = c->next){
    imprimeCoords(c->coordinates);
  }
}