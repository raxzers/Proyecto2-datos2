//
// Created by conejo on 13/10/19.
//

#include "Creaturas.h"
#include "../Util/Utilities.h"
//agregar crear la parte de atributos
Creaturas::Creaturas(std::string nm) {
    this->unTag=nm;

//"Rart","Rarq","Rm","Rf","vel"
    this->gen =1;
    std::bitset<6> Rart((unsigned)Utilities::random(1, 10));
    std::bitset<6> Rarq((unsigned)Utilities::random(1, 10));
    std::bitset<6> Rf((unsigned)Utilities::random(1, 10));
    std::bitset<6> vel((unsigned)Utilities::random(1,10));
    std::bitset<6> Rm((unsigned)Utilities::random(1,10));



    std::string mystring =Rart.to_string();
    mystring.append( vel.to_string());
    mystring.append(Rf.to_string());
    mystring.append(Rarq.to_string());
    mystring.append( Rm.to_string());
    std::bitset<30> set18(mystring);


    this->atributos =(int)set18.to_ulong();
    this->vida = calcFitn()*5;

}

Creaturas::Creaturas(std::string nm, std::string gen) {
    this->unTag=nm;

//"Rart","Rarq","Rm","Rf","vel"
    this->gen = std::stoi(gen);
    std::bitset<6> Rart((unsigned)Utilities::random(1, 10));
    std::bitset<6> Rarq((unsigned)Utilities::random(1, 10));
    std::bitset<6> Rf((unsigned)Utilities::random(1, 10));
    std::bitset<6> vel((unsigned)Utilities::random(1,10));
    std::bitset<6> Rm((unsigned)Utilities::random(1,10));



    std::string mystring =Rart.to_string();
    mystring.append( vel.to_string());
    mystring.append(Rf.to_string());
    mystring.append(Rarq.to_string());
    mystring.append( Rm.to_string());
    std::bitset<30> set18(mystring);


    this->atributos =(int)set18.to_ulong();
    this->vida = calcFitn()*5;
}

std::string Creaturas::display() {

    std::bitset<30> set18(this->atributos);
    std::string sal="";
    sal.append(this->unTag+" ");
    int j=0, caract=0;
    std::bitset<6> tmp;
    for(int i=0;i<set18.size()+1;i++){

        if(j<6){
            tmp[j]=set18[i];
            j++;

        }else{
            j=0;
            sal.append(this->txt[caract]+" ");
            sal.append(std::to_string(tmp.to_ulong())+" ");
            atributo[caract]=tmp.to_ulong();
            tmp.reset();
            tmp[j]=set18[i];
            j++,caract++;

        }


    }


    sal.append("fitness "+std::to_string(calcFitn()));
    //std::cout << set18<< std::endl;
    return sal;
}



void Creaturas::fillSPECIAL() {

}

float Creaturas::calcFitn() {
    int atr[5];

    std::bitset<30> set18(this->atributos);


    int j=0, atrFlg=0;
    std::bitset<6> tmp;
    for(int i=0;i<set18.size()+1;i++){

        if(j<6){//pregunta si j es  mayor a 6
            tmp[j]=set18[i];
            j++;

        }else{
            j=0;

            atr[atrFlg]=(unsigned) tmp.to_ulong();
            tmp.reset();
            tmp[j]=set18[i];
            j++,atrFlg++;

        }


    }

    float fit=0;

    for (int i=0;i<5;i++){
        fit+=atr[i];
    }


    return fit/5;
}

Creaturas::Creaturas() {

}
