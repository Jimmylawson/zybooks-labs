#include<iostream>
#include<string>
using namespace std;


int main(){
    int red,green,blue,gray;

    cout << "\nEnter three values: ";
    cin >> red >> green >> blue;


    if(red < green && red < blue){
        gray = red;
    }else if(green < red && green < blue){
        gray = green;
    }else{
        gray = blue;
    }

    red -= gray;
    green -= gray;
    blue -= gray;

    cout << red << " " << green << " " << blue;
}