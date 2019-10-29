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
     * @brief swap
     * @param a
     * @param b
     */
    void swap(Node<Creaturas> *a, Node<Creaturas> *b);
    /**
     * @brief bubbleSort
     * @param start
     */
    void bubbleSort(LinkedList<Creaturas> *start);
    /**
     * @brief cruzarPoblacion
     * @param listacreat
     */
    void cruzarPoblacion(LinkedList<Creaturas>* listacreat);
    /**
     * @brief Lc
     */
    LinkedList<Creaturas>* Lc;
    /**
     * @brief Generation
     */
    int Generation;
};


#endif //PARTESPARAPROJ2_GENETICO_H
