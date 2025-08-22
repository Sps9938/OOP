#include<iostream>
using namespace std;

class Department{
    public:
        string deptName;
};

class CopmputerSciece : public Department{
    public:
        string degree;
        int strength;
        
};

class Student : public CopmputerSciece{
    public:
        string stName;
        int rollNo;
};


int main(){

    Student s1;
    s1.deptName = "CSE";
    s1.degree = "MCA";
    s1.strength = 60;
    s1.stName = "Satya";
    s1.rollNo = 10;

    cout<<"deptName: "<<s1.deptName<<endl;
    cout<<"degree: "<<s1.degree<<endl;
    cout<<"strength: "<<s1.strength<<endl;
    cout<<"stName: "<<s1.stName<<endl;
    cout<<"rollNo: "<<s1.rollNo<<endl;

   
    return 0;
}