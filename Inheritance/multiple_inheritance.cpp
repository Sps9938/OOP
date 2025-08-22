#include<iostream>
using namespace std;

class Department{
    public:
        string deptName;
    Department(string deptName){
        this->deptName = deptName;
    }
};

class GuestFeculty{
    public:
        string branch;
        string course;
        string sub;
    GuestFeculty(string branch, string course, string sub){
        this->branch = branch;
        this->course = course;
        this->sub = sub;
    }
        
};

class Teacheer : public Department, public GuestFeculty{
    public:
        string teacherName;
        string domain;
    Teacheer(string deptName, string teacherName, string domain, string branch, string course, string sub) : GuestFeculty(branch, course, sub) , Department(deptName){
        this->teacherName = teacherName;
        this->domain = domain;
    }

    void print(){
        cout<<"deptName: "<<deptName<<endl;
        cout<<"teacherName: "<<teacherName<<endl;
        cout<<"domain: "<<domain<<endl;
        cout<<"branch: "<<branch<<endl;
        cout<<"course: "<<course<<endl;
        cout<<"sub: "<<sub<<endl;
    }
};


int main(){

    // Student s1;
    // s1.deptName = "CSE";
    // s1.degree = "MCA";
    // s1.strength = 60;
    // s1.stName = "Satya";
    // s1.rollNo = 10;

    // cout<<"deptName: "<<s1.deptName<<endl;
    // cout<<"degree: "<<s1.degree<<endl;
    // cout<<"strength: "<<s1.strength<<endl;
    // cout<<"stName: "<<s1.stName<<endl;
    // cout<<"rollNo: "<<s1.rollNo<<endl;
    Teacheer t1("CSE", "Satya", "DSA", "ECE", "B.Tch", "Data Structure");

   t1.print();
    return 0;
}