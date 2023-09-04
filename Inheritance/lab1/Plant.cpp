#include<iostream>

#include "Plant.h"

using namespace std;

Plant::~Plant(){
    cout << "Plant destructor called" << endl;
}

void Plant::SetPlantName(string userPlant){
    plantName = userPlant;
}
string Plant::GetPlantName()const{return plantName;}

void Plant::SetPlantCost(int userPlantCost){
    plantCost =userPlantCost; 
}

int Plant::GetPlantCost()const{return plantCost;
}

void Plant::PrintInfo()const override{
    cout << "Plant Information: " << endl;
    cout << "Plant Name: " << plantName << endl;
    cout<<"Plant Cost: "<<plantCost<<endl;
}

