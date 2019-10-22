//
// Created by conejo on 13/10/19.
//

#ifndef PARTESPARAPROJ2_TORRE_H
#define PARTESPARAPROJ2_TORRE_H


#include <string>
#include "../Util/Utilities.h"
class Torre {
public:
    Torre();
    void  setTorre();
    std::string retClin();


    int dano,pos,idTor,alcance;

    void setPos();
    int getPos() const;

    const std::string &getTipo() const;

private:
    std::string tipo ;

};


#endif //PARTESPARAPROJ2_TORRE_H
