#include<iostream>
#include<vector>

using namespace std;


//Ranged based for loop or for each loop
int main(){
    vector<int> examGrades(4);

    for(double &gradeVal : examGrades){
        double grade;
        cin >> grade;
        gradeVal = grade;
    }

    double averageGrade = 0.0;
    cout << endl;
    for(double gradeVal: examGrades){
        averageGrade += gradeVal;
    }
    averageGrade /= examGrades.size();
    cout<<"Average grade: "<<averageGrade<<endl;
}
