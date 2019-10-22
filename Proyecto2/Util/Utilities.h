//
// Created by conejo on 13/10/19.
//

#ifndef PARTESPARAPROJ2_UTILITIES_H
#define PARTESPARAPROJ2_UTILITIES_H

#include <stdlib.h>
#include <time.h>
#include <random>
#include <iostream>
class Utilities {
public:
    static int random(int min, int max) {
        bool flag=true;
        int nume=0;
        while(flag){
            if(nume<min){
                std::random_device rd;
                std::mt19937 num(rd());
                std::uniform_int_distribution<> dist(min,max);
                nume=dist(num);

            }else{flag=false;}


        }




        return nume;
    }

    static float random(float min, float max) {
        std::random_device rd;
        std::mt19937 num(rd());
        std::uniform_real_distribution<> dist(min,max);
        return dist(num);
    }

    static int randoms(int min, int max) {
        srand(time(NULL));
        int num;
        num =min+rand()%(max-1);



        return num;
    }
};


#endif //PARTESPARAPROJ2_UTILITIES_H
