#ifndef ROUND_H
#define ROUND_H
#include "Creaturas.h"
#include "../sturctures/LinkedList.h"
#include "Algoritms/Genetico.h"
#include "../Util/xmlparser.h"

class Round
{
public:
    Round();
    void Nextround();
private:
    LinkedList<Creaturas> *pob= new LinkedList<Creaturas>();
    Genetico vida=Genetico();
};

#endif // ROUND_H
