#ifndef PLANET_H
#define PLANET_H

#include <iostream>
#include <string>


using namespace std;

class Planet {
    private:
        string name;
        double distanceFromSun;
        bool isGaseous;
    public:
        Planet(string name, double weight, bool isGaseous);
        string getName();
        double getDistanceFromSun();
        bool getIsGaseous();
};

#endif