#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

// int main(){
//     //Parallel Arrays
//     string student[10];
//     float gpa[10];

//     for (int i = 0; i < 10;i++){
//         cout << "Enter student #" << i + 1 << "'s name: " << endl;
//         getline(cin, student[i]);
//         cout << "Enter" << student[i] << "'s GPA: ";
//         cin >> gpa[i];
//         cin.ignore();
//     }
//     cout << "Student\tGPA" << endl;
//     cout << "--------\t---" << endl;
//     for (int i = 0; i < 10;i++){
//         cout << student[i] << "\t" << gpa[i] << endl;
//     }
// }


//n-dimensional arrays

int main(){
    const int NUMSTUDENTS = 5;
    const int NUMEXAMS = 3;
    string stuName;
    float  gradeItem;
    string student[NUMSTUDENTS];
    float grades[NUMSTUDENTS][NUMEXAMS + 1];

    for (int i = 0; i < NUMSTUDENTS;i++){
        cout << "\nEnter the student name: ";
        getline(cin, stuName);
        student[i] = stuName;
    }
    for (int i = 0; i < NUMEXAMS;i++){
        for (int j = 0; j < NUMSTUDENTS;j++){
            cout << "Enter " << student[j] << "'s grade on exam: ";
            cin >> gradeItem;
            grades[j][i] = gradeItem;
        }
    }

    for (int i = 0; i < NUMSTUDENTS;i++){
        gradeItem = 0;
        for (int j = 0; j < NUMEXAMS; j++)
        {
            gradeItem += grades[i][j];
        }
        grades[i][NUMEXAMS] = gradeItem / NUMEXAMS;
    }

    cout << fixed << setprecision(2);
    cout << "Student" << setw(20) << " Final Average";

    for (int i = 0; i < NUMSTUDENTS;i++){
        cout << student[i] << setw(20) << grades[i][NUMEXAMS];
    }
}