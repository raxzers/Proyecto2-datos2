//
// Created by conejo on 13/10/19.
//

#include "Torre.h"
std::string Torre::retClin() {

    return this->tipo+"," +std::to_string(this->pos);
}

Torre::Torre() {


}

void Torre::setTorre(int id) {

    switch(id){
        case 1:
            this->tipo="1";
            this->dano=1;
            this->alcance=1;
            break;
        case 2:
            this->tipo="2";
            this->dano=2;
            this->alcance=2;
            break;
        case 3:
            this->tipo="3";
            this->dano=4;
            this->alcance=3;
            break;
    case 4:
        this->tipo="3";
        this->dano=5;
        this->alcance=4;
        break;


    }


}

int Torre::getPos() const {
    return pos;
}

const std::string &Torre::getTipo() const {
    return tipo;
}

void Torre::setPos(int pos) {
 this->pos = pos;


}
