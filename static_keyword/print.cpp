#include<iostream>
using namespace std;

class ABC{
    public:
        ABC(){
            cout<<"Constructor"<<endl;
        }
    ~ABC(){
        cout<<"Destructor"<<endl;
    }
};

int main(){
    if(true){
        static ABC obj; //life time stroe at memory after main fuction done then memory will destroy
        
    }

    cout<<"end of main function"<<endl;
    return 0;
}