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
    void swap(Node<Creaturas> *a, Node<Creaturas> *b);
    void bubbleSort(LinkedList<Creaturas> *start);
    void cruzarPoblacion(LinkedList<Creaturas>* listacreat);
    LinkedList<Creaturas>* Lc;
    int Generation;
};


#endif //PARTESPARAPROJ2_GENETICO_H
