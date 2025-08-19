#include<iostream>
#include<string>
using namespace std;

class Teacher {
//access specifiers(accssible only inside class)
private:
    double salary;
//access specifiers(accessible everywhere)
public:
    string name;
    string dept;
    string subject;
    

    void changeDept(string newDept){
        dept = newDept;
    }
//setter->purpose for set the private value
    void setSalary(double s){
        salary = s;
    }
//getter->purpose for getting the private value
    double getSalary(){
        return salary;
    }
};

int main(){
    Teacher t1;
    t1.name = "Satya";
    t1.dept = "Computer Science and Engineering";
    t1.subject = "C++";
    t1.setSalary(300000);

    cout<<"Teachrer salary: "<<t1.getSalary()<<endl;


}
