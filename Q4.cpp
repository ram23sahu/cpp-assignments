/*Q4. Write a class Address. Implement constructors, getters, setters, accept(), and display() methods.
Instead of char[] use string datatype*/

#include<iostream>
#include<string>
using namespace std;

class Address
{
    private:
    string homename;
    int homenumber;
    string city;
    int pincode;

    public:

    //parameterless constructor
    Address()
    {
        homename="xxxxxx";
        homenumber=0;
        city="xxxxxx";
        pincode=0;

    }

    //parameterized constructor
    Address(string homename,int homenumber,string city,int pincode)
    {
        this->homename=homename;
        this->homenumber=homenumber;
        this->city=city;
        this->pincode=pincode;
    }

    //function for accept
    void accept()
    {
      cout<<"Enter housename : "<<endl;
      cin>>homename;
      cout<<"Enter homenumber : "<<endl;
      cin>>homenumber;
      cout<<"Enter city name : "<<endl;
      cin>>city;
      cout<<"Enter pincode : "<<endl;
      cin>>pincode;
      cout<<endl;
    }

    //Function for display
    void display()
    {
        cout<<"Homename is : "<<homename<<endl;
        cout<<"Homenumber is : "<<homenumber<<endl;
        cout<<"City name is : "<<city<<endl;
        cout<<"Pincode is : "<<pincode<<endl;
    }

    //get functions
    string gethomename()
    {
        
        return homename;
    }

    int gethomenumber()
    {
       
        return homenumber;
    }

    string getcity()
    {
        
        return city;
    }

    int getpincode()
    {

        return pincode;
    }

    //set functions
    void sethomename(string hname)
    {
        homename=hname;
        
    }

     void sethomenumber(int hnumber)
    {
        homenumber=hnumber;
         
    }

     void setcity(string cname)
    {
        city=cname;
        
    }

     void setpincode(int npin)
    {
      pincode=npin;
    {


};

int main()
{
    Address a1;
    a1.accept();
    a1.getpincode();
    a1.setpincode(413005);

    cout<<endl;

    Address a2("sun",1234,"solapur",1457);
    
    a2.getpincode();
    a2.setpincode(14);
    a2.display();
   
    return 0;
}
