#include<iostream>
using namespace std;

class Department{
    public:
        string deptName;
};

class Teacher : public Department{
    public:
        string teacherName;
        string domain;
        
};

class Student : public Department{
    public:
        string stName;
        int rollNo;
};


int main(){

    Student s1;
    s1.deptName = "CSE";
    s1.stName = "Satya";
    s1.rollNo = 10;

    Teacher t1;
    t1.deptName = "CSE";
    t1.teacherName = "Rudra Pal";
    t1.domain = "Data Science";
   
    return 0;
}