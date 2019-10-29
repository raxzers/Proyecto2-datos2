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
    /**
     * @brief setTorre
     */
    void  setTorre();
    /**
     * @brief retClin
     * @return
     */
    std::string retClin();

    /**
     * @brief dano
     */
    int dano,pos,idTor,alcance;
    /**
     * @brief setPos
     */
    void setPos();
    /**
     * @brief getPos
     * @return
     */
    int getPos() const;
    /**
     * @brief getTipo
     * @return
     */
    const std::string &getTipo() const;

private:
    /**
     * @brief tipo
     */
    std::string tipo ;

};


#endif //PARTESPARAPROJ2_TORRE_H
