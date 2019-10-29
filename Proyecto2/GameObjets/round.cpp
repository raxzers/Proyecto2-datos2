#include "round.h"

Round::Round()
{
std::string creatXML= xml1.xmlPobl;
this->pob = xml1.XML2lcreat(creatXML);
}

void Round::Nextround(int maze[10][10])
{
     vida.bubbleSort(pob);
     vida.cruzarPoblacion(pob);
     for(int i=0;i<pob->getSize();i++){
         aPath.aStarSearch(maze,90,0);
         pob->getElement(i)->getData().ruta=aPath.getRoute();
     }
}

void Round::setRutaLista(int maze[10][10])
{
    for(int i=0;i<pob->getSize();i++){
        //if(){}
        aPath.aStarSearch(maze,90,0);
        pob->getElement(i)->getData().ruta=aPath.getRoute();
    }
}
