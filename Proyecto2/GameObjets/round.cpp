#include "round.h"

Round::Round()
{


}

void Round::Nextround()
{
     vida.bubbleSort(pob);
     vida.cruzarPoblacion(pob);
}
