#include<iostream>
using namespace std;
//pure virtual function called also abstracton
class Shape{
    virtual void draw() = 0; // pure virtual function 
};

class Circle : public Shape{
    public:
        void draw(){
            cout<<"drawing a circle"<<endl;
        }
};
int main(){
    Shape s1;
    s1.draw();
    Circle c1;
    c1.draw();
    return 0;
}