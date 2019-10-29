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
    /**
     * @brief Torr
     */
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
    /**
     * @brief updatemapa
     * @param P
     */
    void updatemapa(int P);
    /**
     * @brief verMapa
     * @return
     */
    std::string verMapa();
    /**
     * @brief getCredits
     * @return
     */
    int getCredits() const;
    /**
     * @brief setCredits
     * @param value
     */
    void setCredits(int value);
    /**
     * @brief getTorr
     * @return
     */
    LinkedList<Torre> *getTorr() const;
    /**
     * @brief setTorr
     * @param torr
     */
    void setTorr(LinkedList<Torre> *torr);

};


#endif //PARTESPARAPROJ2_PLAYER_H
