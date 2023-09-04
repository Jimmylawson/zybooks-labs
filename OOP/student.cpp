#include<iostream>
#include<iomanip>
using namespace std;


class Student{
    private:
        string name;
        double gpa ;
    public:
        Student();
        void SetName(string name) { this->name = name; }
        string GetName() { return name; }
        void SetGPA(double gpa) { this->gpa = gpa; }
        double GetGPA() { return gpa; }

};

Student::Student(){
        name = "Louis";
        gpa = 1.0;
}
int main(){

        Student student;
        cout << student.GetName() << "/ " << student.GetGPA() << endl;

        student.SetName("Felix");
        student.SetGPA(3.7);
        cout << student.GetName() << "/ " << student.GetGPA() << endl;
}