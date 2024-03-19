/*Q3. Create a namespace NStudent. Create the Student class(created as per assignment-1 Q3) inside
namespace. Test the functionalities.*/

#include<iostream>
using namespace std;

namespace NSTUDENT
{
    class Student
{
    private:
    string name;
    int rollno;
    int marks;

    public :
    //initializing data member 
    void initStudent()
    {
        string name="xyz";
        int rollno=0;
        int marks=0;
        cout<<"Default name of student is:-"<<name<<endl;
        cout<<"Default rollno of student is:-"<<rollno<<endl;
        cout<<"Default marks of student is:-"<<marks<<endl;


    }
     
     //Function for accepting student info
    void acceptStudentFromConsole()
    {
        cout<<"Enter Student Name:-"<<endl;
        cin>>name;
        cout<<"Enter Student rollno:-"<<endl;
        cin>>rollno;
        cout<<"Enter Student marks:-"<<endl;
        cin>>marks;

    }
    
    //Function for displaying student info
    void printStudentOnConsole()
    {
        //acceptStudentFromConsole();      tried taking information fro user inside display function
        cout<<" name of student is:-"<<name<<endl;
        cout<<" rollno of student is:-"<<rollno<<endl;
        cout<<" marks of student is:-"<<marks<<endl;
    }
};
}

using namespace NSTUDENT;
int main()
{
    //creating student object inside namespace
    NSTUDENT::Student s1;

    cout<<"Default info of student : "<<endl;
    s1.initStudent();
     
    cout<<"Accepting student info : "<<endl;
    s1.acceptStudentFromConsole();

    cout<<"Displaing student info : "<<endl;
    s1.printStudentOnConsole();

    
    return 0;
}