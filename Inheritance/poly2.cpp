#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Employee{
    protected:
        string name;
    public:
    void SetName(string employeeName){
        name = employeeName;
    }
    virtual  void PrintInfo(){
        cout << name << endl;
    }
};

class Nurse:public Employee{
    public:
        void SetHospital(string hospital){
        this->hospital = hospital;
        }
        void PrintInfo(){
        cout << name << " owns " << hospital << " hospital" << endl;
        }
    private:
        string hospital;
};

class SalesPerson:public Employee{
    public:
    void SetProduct(string product){
        this->product = product;
    }
    void PrintInfo(){
        cout << name << " sells " << product << endl;
    }
    private:
        string product;
};

int main(){
    Employee *person1;
    Nurse *person2;
    SalesPerson *person3;
    vector<Employee *> EmployeeList;

    person1 = new Employee();
    person1->SetName("Mary");

    person2 = new Nurse();
    person2->SetName("Jimmy");
    person2->SetHospital("Maticia");

    person3 = new SalesPerson();
    person3->SetName("John");
    person3->SetProduct("Insurance!");

    EmployeeList.push_back(person1);
    EmployeeList.push_back(person2);
    EmployeeList.push_back(person3);

    for (int i = 0; i < EmployeeList.size();i++){
        EmployeeList.at(i)->PrintInfo();
    }

    return 0;
    system("pause>0");
}