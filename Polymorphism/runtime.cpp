#include<iostream>
using namespace std;
/*virtual function*/
class Parent{
    public:
    void getInfo(){
        cout<<"I am Base Class"<<endl;
    }

    virtual void hello(){
        cout<<"This is From Parent"<<endl;
     }
};

class Child : public Parent{
    public:
    void getInfo(){
        cout<<"I am Derived Class"<<endl;
    }
    void hello(){
        cout<<"This is From child"<<endl;
    }
};
/* override
class Parent{
    public:
    void getInfo(){
        cout<<"I am Base Class"<<endl;
    }
};

class Child : public Parent{
    public:
    void getInfo(){
        cout<<"I am Derived Class"<<endl;
    }
};

*/
int main(){
    // Child c1;
    // c1.getInfo();

    // Parent p1;
    // p1.getInfo();

    // Child c1;
    Parent p1;
    p1.hello();
    return 0;
}