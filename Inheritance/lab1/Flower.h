#ifndef FLOWERH
#define FLOWERH

#include "Plant.h"
#include <iostream>
#include <string>

using namespace std;

class Flower:public Plant{
    public:
        void SetPlantType(bool userIsAnnual);
        bool GetPlantType()const;
        void SetColorOfFlower(string flower);
        string GetColorOfFlower()const;
        void PrintInfo() const;
    private:
        bool isAnnual;
        string flower;
};

#endif // FLOWERH