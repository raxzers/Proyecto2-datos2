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
    /**
    * @brief creditos para las torre
    *
    **/
    int credits=100;
    /**
    *@brief lista de torres
    *
    **/
    LinkedList<Torre> *Torr= new LinkedList<Torre>();
    /**
    * @brief representcion del mapa del juego
    *
    **/
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
    /**
    * @brief actualiza la matriz
    * @param p poscion
    **/
    void updatemapa(int P);
    /**
    * @brief ve el mapa en string
    * @return el mapa en string
    **/
    std::string verMapa();
    /**
    *
    *@brief encapsulacion para la variable credit
    **/
    int getCredits() const;
    /**
    *
    * @brief encapsulacion para la variable credit
    **/
    void setCredits(int value);
    /**
    *
    * @brief encapsulacion para la variable Torr
    **/
    LinkedList<Torre> *getTorr() const;
    /**
    *
    * @brief encapsulacion para la variable Torr
    **/
    void setTorr(Torre torr);

};


#endif //PARTESPARAPROJ2_PLAYER_H
