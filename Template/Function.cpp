#include<iostream>

using namespace std;

//Template to find the min of a string,int and a character

template<typename T>

T Min(T temp1,T temp2,T temp3){
    T min = temp1;
    if(temp2<min)
        min = temp2;
    else if(temp3<min)
        min = temp3;

    return min;
}

int main(){
    int num1,num2,num3;
    string name1,name2,name3;
    char ch1,ch2,ch3;

    cout<<"Enter three numbers: ";
    cin>>num1>>num2>>num3;
    cout << "Enter three names: ";
    cin >> name1 >> name2 >> name3;
    cout << "Enter three characters: ";
    cin >> ch1 >> ch2 >> ch3;

    cout<<"Min int: "<<Min(num1,num2,num3)<<endl;
    cout<<"Min name: "<<Min(name1,name2,name3)<<endl;
    cout<<"Min character : "<<Min(ch1,ch2,ch3)<<endl;

    return 0;
}