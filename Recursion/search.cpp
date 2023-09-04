#include<iostream>

using namespace std;

void GuessNumber(int lowVal,int highVal){
    int mid;
    char userAnswer;
    mid = (lowVal + highVal) / 2;
    cout<<"Is it "<< mid << "?"<<endl;
    cin >> userAnswer;

    if((userAnswer !='l')&&(userAnswer != 'h')){
        cout<<"Thank You!"<<endl;
    }
    else{
        if(userAnswer == 'l')
            GuessNumber(lowVal,mid);
        else
            GuessNumber(mid + 1, highVal);
    }
}

int main(){
    cout << "Choose a number between 0 and 100" << endl;
    cout << "Answer with: " << endl;
    cout << "l(your lower number)" << endl;
    cout << "h(your num is higher)" << endl;
    cout<<" any other key (guess is right)" << endl;
    GuessNumber(0, 100);
}