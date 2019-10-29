#ifndef ROUND_H
#define ROUND_H
#include "Creaturas.h"
#include "../sturctures/LinkedList.h"
#include "Algoritms/Genetico.h"
#include "../Util/xmlparser.h"
#include"../Util/Utilities.h"
#include "Algoritms/astar.h"
#include "Algoritms/backtrack.h"

class Round
{
public:
    Round();
    void Nextround(int maze[10][10]);
    void setRutaLista(int maze[10][10]);
private:
    LinkedList<Creaturas> *pob= new LinkedList<Creaturas>();
    Genetico vida=Genetico();
     XMLParser xml1=XMLParser();
     Astar aPath= Astar();
     Backtrack bPath=Backtrack();
};

#endif // ROUND_H
