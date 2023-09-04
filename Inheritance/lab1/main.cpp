#include<iostream>
#include<string>
#include<vector>
#include "Plant.h"
#include "Flower.h"

using namespace std;


void PrintVector(vector<Plant*> myGarden){
    for(int i=0;i<myGarden.size();i++){
        cout << "Plant " << i + 1 << " "
             << "Information: " << endl;
            myGarden[i]->PrintInfo();
            cout << endl;
    }
}


int main(){
    vector<Plant*> myGarden;
    Plant* myPlant;
    Flower* myFlower;
    string plantName, flowerName, buff, colorOfFlowers;
    int plantCost, flowerCost;
    bool isAnnual;
    string input;

    cout << "Enter the number of plants: ";
    cin >> input;
    while(input!= "-1"){

        if(input == "plant"){
            myPlant = new Plant();
            cin >> plantName;
            cin >> plantCost;
            myPlant->SetPlantName(plantName);
            myPlant->SetPlantCost(plantCost);
            myGarden.push_back(myPlant);
        }else if(input == "flower"){
            myFlower = new Flower();
            cin >> flowerName;
            cin >> flowerCost;
            cin >> buff;

            if(buff == "true")
                isAnnual = true;
            else 
                isAnnual = false;
            myFlower->SetPlantName(flowerName);
            myPlant->SetPlantCost(flowerCost);
           myFlower->SetPlantType(isAnnual);
           myFlower->SetColorOfFlower(colorOfFlowers);
            myGarden.push_back(myFlower);
        }
        cin >> input;
    }

    PrintVector(myGarden);

//delete myGarden;
    for(int i = 0; i < myGarden.size(); i++){
        delete myGarden.at(i);
        return 0;
}
}