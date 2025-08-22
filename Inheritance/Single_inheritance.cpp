#include<iostream>
using namespace std;

class Department{
    public:
        string deptName;
    protected:
        string deptId;
    //parameterized constructor
    Department(string deptName, string deptId){
        cout<<"I am Parent Constructor"<<endl;
        this->deptId = deptId;
        this->deptName = deptName;
    }   

};

class CopmputerSciece : public Department{
    public:
        string degree;
        int strength;
    //parameterized constructor-> here after parent constructor executed then child constructor will be executed
    CopmputerSciece(string deptName, string deptId, string degree, int strength) : Department(deptName, deptId){
        cout<<"I am Child Constructor"<<endl;
        this->degree = degree;
        this->strength=strength;
       
    }

    void print(){
        cout<<"DeptName: "<<deptName<<endl;
        cout<<"DeptId: "<<deptId<<endl;
        cout<<"degree: "<<degree<<endl;
        cout<<"strength: "<<strength<<endl;

    }
};

int main(){

    CopmputerSciece c("CSE", "NITACSE2025", "MCA", 60);
    // Department d("CSE");
    // cout<<"DeptName is: "<<d.deptName;
    c.print();
    return 0;
}