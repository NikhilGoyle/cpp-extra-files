#ifndef SOLARSYSTEM_H
#define SOLARSYSTEM_H

#include <iostream>
#include <string>
#include <vector>
#include "Planet.h"

using namespace std;

class SolarSystem {
    private:
        string name;
        vector<Planet> planets;
    public:
        SolarSystem(string name);
        string getName();
        void addPlanet(Planet newPlanet);
};

#endif