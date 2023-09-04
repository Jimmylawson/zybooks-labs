#include<iostream>
#include<vector>
#include<iomanip>
#include<string>
using namespace std;


class Student{
    public:
        Student(string first, string last, double gpa);
        double GetGPA() { return gpa; }
        string GetLast() { return last; }
        string GetFirst() { return first; }

    private:
        string first;
        string last;
        double gpa;
};

Student::Student(string first,string last,double gpa){
            this->first = first;
            this->last = last;
            this->gpa = gpa;
}


class Course{
    private:
    vector<Student> roster;

    public:
        //int CourseSize();
        void AddStudent(Student s);
        vector<Student> GetDeansList();
        void DropStudent(string last);
        int CountStudents();
        Student FindStudentHighestGPA();
};


void Course::DropStudent(string last){
        for (int i = 0; i < roster.size();i++){
            if(roster[i].GetLast()==last){
                roster.erase(roster.begin() + i);
            }
        }
}
 Student Course:: FindStudentHighestGPA(){
        Student highest = roster[0];
        for (int i = 0; i < roster.size();i++){
            if(roster[i].GetGPA()> highest.GetGPA()){
                highest = roster[i];
            }
        }
        return highest;
 }
vector<Student>Course::GetDeansList(){
        vector<Student> deanList;
        for(auto student:roster){
            if(student.GetGPA()>=3.5){
                deanList.push_back(student);
            }
        }

        return deanList;
}
 int Course::CountStudents(){
         return roster.size();
 }

void Course::AddStudent(Student s){
        roster.push_back(s);
}

int main(){
        Course course;
       
        vector<Student> deanList;

        course.AddStudent(Student("Henry", "Bendel", 3.6));
        course.AddStudent(Student("Jimmy", "Lawson", 2.9));
        course.AddStudent(Student("Lydia", "Robinson", 3.6));
        course.AddStudent(Student("Sonya", "King", 2.9));

        deanList = course.GetDeansList();
        cout << "Dean's list: " << endl;
        cout << fixed << setprecision(1);
        for(Student student: deanList){
            cout << student.GetFirst() << " " << student.GetLast() << endl;
        }

        return 0;
}