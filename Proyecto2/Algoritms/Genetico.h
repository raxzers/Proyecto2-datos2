//
// Created by conejo on 13/10/19.
//

#ifndef PARTESPARAPROJ2_GENETICO_H
#define PARTESPARAPROJ2_GENETICO_H

#include "../sturctures/LinkedList.h"
#include "../sturctures/Node.h"
#include "../GameObjets/Creaturas.h"
#include "../Util/Utilities.h"

class Genetico {
public:
    /**
    *  @brief intercambio entre nodos
    * @param a nodos para el intercambio
    * @para b nodos para el intercambio
    *
    **/
    void swap(Node<Creaturas> *a, Node<Creaturas> *b);
    /**
    * @brief algoritmo de ordenamiento tipo burbuja
    * @param start lista para ordenar
    **/
    void bubbleSort(LinkedList<Creaturas> *start);
    /**
    * @brief algoritmo para cruzar la poblacion
    * @param start lista para cruzar
    *
    **/
    void cruzarPoblacion(LinkedList<Creaturas>* listacreat);
    /**
    * @brief lista de creaturas
    *
    **/
    LinkedList<Creaturas>* Lc;
    /**
    * @brief generacion de la poblacion
    *
    **/
    int Generation;
};


#endif //PARTESPARAPROJ2_GENETICO_H
