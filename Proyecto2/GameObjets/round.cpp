#include "round.h"
#include <QDebug>
Round::Round()
{
std::string creatXML= xml1.xmlPobl;
this->pob = xml1.XML2lcreat(creatXML);
qDebug()<< QString::fromStdString(creatXML);
}

void Round::Nextround(int maze[10][10])
{
     vida.bubbleSort(pob);
     vida.cruzarPoblacion(pob);
     for(int i=0;i<pob->getSize();i++){
         aPath.aStarSearch(maze,90,0);
         pob->getElement(i)->getData().ruta=aPath.getRoute();
     }
     std::string creatXML= xml1.xmlPobl;
     qDebug()<< "====================Siguiente round=====================";
     qDebug()<< QString::fromStdString(creatXML);
}

void Round::setRutaLista(int maze[10][10])
{
    for(int i=0;i<pob->getSize();i++){
        if(Utilities::random(0,100)<10){aPath.aStarSearch(maze,90,0);
            pob->getElement(i)->getData().ruta=aPath.getRoute();}
        else {bPath.isReachable(maze,9,0,0,5);
        pob->getElement(i)->getData().ruta=bPath.ruta;
        }
    }
}
