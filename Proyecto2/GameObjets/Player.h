//
// Created by conejo on 17/10/19.
//

#ifndef PARTESPARAPROJ2_PLAYER_H
#define PARTESPARAPROJ2_PLAYER_H
#include <iostream>

class Player {
private:
    int credits=100;
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
    //lista torres
    int getCredits() const;
    void setCredits(int value);
};


#endif //PARTESPARAPROJ2_PLAYER_H
