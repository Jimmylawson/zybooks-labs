#include<iostream>//Preprocessor Directive
// Its a compile language that means a program called complier read your code for errors before e
// execution.

using namespace std;


  //Stelps for making leomonade]]
    /*
    1. By lemons
    2.Cut lemons
    3. Squuaz lemons into a pitcher
    4.Add water(2 quarts)
    5.Add sugar(1 cup)
    6.Stir
    7Serve over ice

    Driver-main program does no real work just calls functions
    that do the heavy lifting

    Stub-an empty function that only ecist for testing

    in c++ ANY modular piece of code is called a function

    In most prgramming langues is this:
    modules-base-everything is a module
    Functions-module that return information
    Procedures-do not return information

    in C++, everything is a function.
    A function call = This is what causes a function to execute
    Function-definition:This is the code that makes te function
    function header-return type,name of a the function,parameter list

 Return types
 we can return float,Doubles,Int,bool, nothing is called a void
     */

// Location to include a function
// 1.Before main
// 2..After main .. Via prototyping example: void PrintArray(float* array,int size);
//3.In a separate file. in a header file
void PrintArray(int *array, int size)
{ // Function header
  for (int i = 0; i < SIZE;i++){
    cout << array[i] << endl;
  }
} // Function definition

int main(){
  const int SIZE = 10;
  float testScore[10];
   for (int i = 0; i < SIZE;i++){
    testScores[i] = (i + 30) * 2.5;
  }
  PrintArray(testScore, SIZE);//Its a function call in main.

  for(int i = 0; i < SIZE;i++){
    testScore[i] *= 1.05;
  }
  cout << "Post Curve..." << endl;
  PrintArray(testScore, SIZE);


cout << "Caught Cheating..." << endl;
 for(int i = 0; i < SIZE;i++){
    testScore[i] *= .9;
  }
  
}