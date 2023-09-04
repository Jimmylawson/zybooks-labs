#include <iostream>
#include<string>

#include "Flower.h"

using namespace std;

 void Flower::SetPlantType(bool userIsAnuual){
    isAnnual = userIsAnuual;
 }
bool Flower::GetPlantType()const{return isAnnual;}

void Flower::SetColorOfFlower(string flower){
    this->flower = flower;
}
string Flower::GetColorOfFlower()const{return flower;}  

void Flower::PrintInfo()const{
    cout <<"Plant name: " << plantName << endl;
    cout<<"Cost: "<<plantCost<<endl;
    cout <<"Flower: " << flower << endl;
    cout<<" Annual: " << isAnnual << endl;
    cout << " Color of flowers: " << flower << endl;
}