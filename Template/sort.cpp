#include<iostream>

using namespace std;

//Template function to find the ascending,descending and in order fuction

template<typename T>

int CheckOrder(T temp1, T temp2, T temp3, T temp4){

    if(temp1>temp2&&temp2>temp3&&temp3>temp4){
        cout<<"Is in ascending order:";
        return 1;
    }
    else if(temp1<temp2&&temp2<temp3&&temp3<temp4){
        cout<<"Is in descending order"<<endl;
        return -1;
    }else{
    cout<<"Is in in order"<<endl;
    return 0;
}
}

int main(){
    int num1, num2, num3, num4;
    cout<<"Enter 4 numbers to check order: ";
    cin >> num1 >> num2 >> num3 >> num4;
    string str1,str2,str3,str4;
    cout<<"Enter 4 strings to check order: ";
    cin >> str1 >> str2 >> str3 >> str4;
    double temp1, temp2, temp3, temp4;
    cout<<"Enter 4 doubles to check order: ";
    cin >> temp1 >> temp2 >> temp3 >> temp4;
    
    cout<<CheckOrder(num1,num2,num3,num4)<<endl;
    cout<<CheckOrder(str1,str2,str3,str4)<<endl;
    cout<<CheckOrder(temp1,temp2,temp3,temp4)<<endl;
    return 0;
    
}