//
// Created by conejo on 17/10/19.
//

#ifndef PARTESPARAPROJ2_PLAYER_H
#define PARTESPARAPROJ2_PLAYER_H
#include <iostream>
#include "../sturctures/LinkedList.h"
#include "../GameObjets/Torre.h"


class Player {
private:
    int credits=100;
    LinkedList<Torre> *Torr= new LinkedList<Torre>();
    int mapa[10][10]={{ 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 },
                      { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 },
                      { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 },
                      { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 },
                      { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 },
                      { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 },
                      { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 },
                      { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 },
                      { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 },
                      { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 }};
public:
    void updatemapa(int P);
    std::string verMapa();
    int getCredits() const;
    void setCredits(int value);
    LinkedList<Torre> *getTorr() const;
    void setTorr(LinkedList<Torre> *torr);

};


#endif //PARTESPARAPROJ2_PLAYER_H
