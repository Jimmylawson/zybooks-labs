#include<iostream>

using namespace std;


//Inheritance classes

class Computer{
    protected:
        string cpuUsage;
        string internet;
    public:
    void SetComputerStatus(string cpuStatus,string internetStatus){
        cpuUsage = cpuStatus;
        internet = internetStatus;
    }

    void PrintStatus(){
        cout << "CPU: " << cpuUsage << endl;
        cout << "Internet: " << internet << endl;
    }

};

//derived class
class Laptop:public Computer{
    private:
        string WifiQuality;
    public:
        void SetWifiStatus(string wifiStatus){
            
        WifiQuality = wifiStatus;
        }
        void PrintStatus(){
        Computer::PrintStatus();//Inheriting the print fuction from base class
        cout << "WIFI: " << WifiQuality << endl;
        }
};

int main(){
        Laptop myLaptop;
        myLaptop.SetComputerStatus("20%", "connnected");
        myLaptop.SetWifiStatus("bad");

        myLaptop.PrintStatus();
}