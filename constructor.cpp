#include<iostream>
using namespace std;

class Student{

    public:
        string name;
        string dept;
        string subject;
        double *cgpaPtr; 

    //non-parameterized constructor
    // Student(){
    //     cout<<"I am Constructor"<<endl;
    //  dept = "CSE";
        
    // }

    //parameterized constructor
    // Student(string n, string d, string s, double c){
    //     name = n;
    //     dept = d;
    //     subject = s;
    //     cgpa = c;
    // }
   

    //use of this keyword (without using this comiler not understood who are the properties(main attributes) and who are the local member)
    //   Student(string nanme, string dept, string subject, double cgpa){
    //     name = name;
    //     dept = dept;
    //     subject = subject;
    //     cgpa = cgpa;
    // }
//1st student
     Student(string name, string dept, string subject, double cgpa){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    } 


    //create shallow copy constructor
    // Student(Student &obj){
    //     cout<<"I am custom shallow copy constructor"<<endl;
    //     this->name = obj.name;
    //     this->dept = obj.dept;
    //     this->subject = obj.subject;
    //     this->cgpa = obj.cgpa;
    // }


    //2nd student -> copy(here shallow type copy failed)
    // Student(Student &obj){
    //     cout<<"I am custom  copy constructor "<<endl;
    //     this->name = obj.name;
    //     this->dept = obj.dept;
    //     this->subject = obj.subject;
    //     this->cgpaPtr = obj.cgpaPtr;
    // }

    Student(Student &obj){
        cout<<"I am custom Deep copy constructor "<<endl;
        this->name = obj.name;
        this->dept = obj.dept;
        this->subject = obj.subject;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }
    // void setCgpa(double c){
    //     cgpa = c;
    // }
    // double getCgpa(){
    //     return cgpa;
    // }
      
    void getInfo(){
        
    cout<<"Student Name: "<<name<<endl;
    cout<<"Student Dept "<<dept<<endl;
    cout<<"Student subject: "<<subject<<endl;
    cout<<"Student CGPA: "<<*cgpaPtr<<endl;
    }

};

int main(){
    Student s1("Satya", "CSE", "AI", 8.18);
    // s1.name = "Satya Prakash Sahu";
    // s1.dept = "Computer Science and Engineering";
    // s1.subject = "AI";
    // s1.setCgpa(8.18);
    // cout<<"information of 1st student is "<<endl;
    // s1.getInfo();
//jo tha usko point kar lia s2->s1
    Student s2(s1);
//abhi main kuch changes karunga toh only s2 reflect hona chiya
   *( s2.cgpaPtr) = 9.42;
    cout<<"information of 2nd student is "<<endl;
    s2.getInfo();
    cout<<endl;
     cout<<"information of 1st student is "<<endl;
    s1.getInfo();
    
    return 0;

}