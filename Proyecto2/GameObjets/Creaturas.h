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
    /**
     * @brief Creaturas
     * @param nm
     */
    Creaturas(std::string nm);
    /**
     * @brief Creaturas
     * @param nm
     * @param gen
     */
    Creaturas(std::string nm,std::string gen);
    /**
     * @brief Creaturas
     * @param nm
     * @param Rart
     * @param Rarq
     * @param Rm
     * @param Rf
     * @param vel
     */
    Creaturas(std::string nm,int Rart,int Rarq,int Rm,int Rf,int vel);
    /**
     * @brief display
     * @return
     */
    std::string display();
    /**
     * @brief ruta
     */
    std::string ruta="";
    /**
     * @brief atributos
     */
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
