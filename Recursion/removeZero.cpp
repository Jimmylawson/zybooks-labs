#include<iostream>

using namespace std;


int removeZero(int value){
 if(value <10)
     return value;
else if(value %10 ==0)return removeZero(value/10);
else
     return removeZero(value/10)*10+ value%10;
}
int main(){
    cout << endl;
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << removeZero(x);

    return 0;
}