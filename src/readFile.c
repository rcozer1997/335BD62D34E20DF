#include "../include/readFile.h"
#include "../include/pointsList.h"
#include "../include/points.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void readFile(){

    FILE* arq = fopen("data/entrada.txt", "r");
    FILE* saida = fopen("data/saida.txt", "w"); 
    if (arq == NULL)
    {
        printf("Problems in opening the archive!\n");
        exit(1);
    }
    char* line;
    size_t len=0;
    PointsList* pList = initPointsList();
    
    int count;
    char* token;
    float coordinate;
  
    while(getline(&line, &len, arq) != -1){
        CoordsList* cList = initCoordsList();
        char *novastr = strchr(line, '\n' );
        if (novastr){
            *novastr = 0;
        }

        count = 0;
        for(int i = 0; i<strlen(line); i++){
             if(line[i] == ',')
                count++;
        }
        Points* point = allocPoints(point);
        point = setPointID(strdup(strtok(line, ",")), point);
        int i = 0;
       
        while(token != NULL || i < count+1) {
            if(i == count){
                token = strtok(NULL, "\n");
                if(token != NULL){
                    coordinate = atof(token);
                    Coords* coord = allocCoords();
                    coord = setCoordsValue(coordinate, coord);
                    insertCoordsList(cList, coord);
                
                }
            }
            else{
                token = strtok(NULL, ",");
                coordinate = atof(token);
                Coords* coord = allocCoords();
                coord = setCoordsValue(coordinate, coord);
                insertCoordsList(cList, coord);
                
            }
            
            
            i++;
        }
        setPointCoords(cList, point);
        insertPointsList(pList, point);
    }
    
    imprimeListaPontos(pList);

    printf("%d", count);
     
    fclose(arq);
    fclose(saida);
}   
    


