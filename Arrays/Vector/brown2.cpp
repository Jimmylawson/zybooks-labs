#include<iostream>
#include<vector>
#include<fstream>
#include<string>

using namespace std;



int main(){
    //const int SENTINEL = -99;
    // Is the vector sorted?
    // The user will give us values, store in a vector,return if vector is sorted.. ascending order;
    vector<int> numbers;
    bool isSorted = true;
    int index = 0;
    int userInput;
    string filename;//File name 
    ifstream inFile;//input file stream
    do{
        cout << "Enter the filename: ";
        getline(cin, filename);

        inFile.open(filename); // open the file by typing the file name and add with .txt;

    } while (!inFile);

    while(!inFile.eof()){//rof(means end of File: use to check if there is error in th file)
        inFile >> userInput;
        numbers.push_back(userInput);
    }

    inFile.close();//you close the file

    int sz = numbers.size();
   while(isSorted && index < sz-1){
     if(numbers[index] > numbers[index + 1]){
         isSorted = false;
     }
     index++;
   }

   if(isSorted){
       cout << "The list is sorted." << endl;
   }else{
       cout << "The list is not sorted" << endl;
   }
}