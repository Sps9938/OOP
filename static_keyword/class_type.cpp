#include<iostream>
using namespace std;

class A{
    public:
        static int  x;
    void incX(){
        x = x+1;
    }
};
//defination of static with scope resultion operator in c++
int A :: x = 0;
int main(){

    static A obj1, obj2;
    obj1.x = 100;
    // obj2.x = 200;

    cout<<obj1.x<<endl;
    cout<<obj2.x<<endl;


    return 0;
}