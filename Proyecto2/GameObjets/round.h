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
    /**
     * @brief Nextround
     * @param maze
     */
    void Nextround(int maze[10][10]);
    /**
     * @brief setRutaLista
     * @param maze
     */
    void setRutaLista(int maze[10][10]);
private:
    /**
     * @brief pob
     */
    LinkedList<Creaturas> *pob= new LinkedList<Creaturas>();
    /**
     * @brief vida
     */
    Genetico vida=Genetico();
    /**
      * @brief xml1
      */
     XMLParser xml1=XMLParser();
     /**
      * @brief aPath
      */
     Astar aPath= Astar();
     /**
      * @brief bPath
      */
     Backtrack bPath=Backtrack();
};

#endif // ROUND_H
