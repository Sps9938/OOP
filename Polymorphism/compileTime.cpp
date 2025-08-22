#include<iostream>
using namespace std;


class Print{
    public:
    int real, imag;
    //constructor overloacing
        Print(){};
        Print(int r, int i) : real(r), imag(i){}
        Print(int X){
            cout<<X<<endl;
        }
        Print(char ch){
            cout<<ch<<endl;
        }

    //function overloading
    void add(int x, int y){
        cout<<x+y<<endl;
    }
    void add(double x, double y){
        cout<<x+y<<endl;

    }

    //operator overloading
    Print operator+(const Print &obj){
        return  Print(real+obj.real, imag+obj.imag);
    }
        
};
int main(){
    // Print p1('^');
    Print p1(10, 8), p2(5, 19);
    // // p1.add(2.7, 8.9);
    // p1.add(2, 9);
    Print p3 = p1+p2;
    cout<<p3.real<<" + "<<p3.imag<<"i"<<endl;

    return 0;
}