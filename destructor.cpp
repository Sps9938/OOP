#include<iostream>
using namespace std;

class Student{

    public:
        string name;
        string dept;
        string subject;
        double *cgpaPtr; 

  
     Student(string name, string dept, string subject, double cgpa){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    } 

    ~Student(){
        cout<<"I am Destructor, everything are deleted"<<endl;
        //dynamically allocated memory before delete the object, ensure before object destroyed memory should be free
        delete cgpaPtr;//memorey leak possible
    }
      
    void getInfo(){
        
    cout<<"Student Name: "<<name<<endl;
    cout<<"Student Dept "<<dept<<endl;
    cout<<"Student subject: "<<subject<<endl;
    cout<<"Student CGPA: "<<*cgpaPtr<<endl;
    }

};

int main(){
    Student s1("Satya", "CSE", "AI", 8.18);
    
    cout<<"information of 1st student is "<<endl;
    s1.getInfo();
    
    return 0;

}