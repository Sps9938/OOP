#include<iostream>
using namespace std;

// void fun(){
//     int x = 0;
//     cout<<"x="<<x<<endl;
//     x++;
// }
void fun(){
    static int x = 0; //life time on memory
    cout<<"x="<<x<<endl;
    x++;
}
int main(){
    fun();
    fun();
    fun();
    fun();
}