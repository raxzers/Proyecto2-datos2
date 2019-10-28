//
// Created by conejo on 13/10/19.
//

#ifndef PARTESPARAPROJ2_CREATURAS_H
#define PARTESPARAPROJ2_CREATURAS_H
#include <iostream>
#include <random>
#include <string>
#include <bits/stdc++.h>

class Creaturas {
public:
    Creaturas();
    Creaturas(std::string nm);
    Creaturas(std::string nm,std::string gen);
    Creaturas(std::string nm,int Rart,int Rarq,int Rm,int Rf,int vel);
    std::string display();
    std::string ruta="";
    int atributos=0;
    int vida=0;
    int gen;
    std::string unTag;
    int  atributo[5]={0,0,0,0,0};
    void fillSPECIAL();
    std::string txt[5]={"Rart","Rarq","Rm","Rf","vel"};
    float calcFitn();
};




#endif //PARTESPARAPROJ2_CREATURAS_H
