#include<iostream>
using namespace std;

class Date
{
    
private:

    //Data Members
    int day;
    int month;
    int year;

public :
    //Member Function

    void initDate()
    {
        int day = 1;
        int month = 1;
        int year = 1947;
        cout<<"default date is:-"<<day<<"/"<<month<<"/"<<year<<endl;
    }
     
     void acceptDateOnConsole()
     {
        cout<<"Give Day:-"<<endl;
        cin>>day;
        cout<<"Give Month :-"<<endl;
        cin>>month;
        cout<<"Give Year :-"<<endl;
        cin>>year;
     }

     void printDateOnConsole()
     {
        acceptDateOnConsole();
        cout<<"date is:-"<<day<<"/"<<month<<"/"<<year<<endl;
     }

     bool isLeapYear()
     {
        if(year % 400==0 && year % 100==0)
        {
            cout<<"Year is leap"<<endl;
        }
        else if(year % 4== 0)
        {
            cout<<"Year is leap"<<endl;
        }
        else
        {
            cout<<"Year is not leap"<<endl; 
        }
       return true;
     }

     
};
     int menu()
     {
        int choice;
        cout<<"1 for default date "<<endl;
        cout<<"2 for accept date "<<endl;
        cout<<"3 for display date "<<endl;
        cout<<"4 for to know leap year "<<endl;
        cout<<"5 for exit"<<endl;
        cout<<"Enter the choice:- "<<endl;
        cin>>choice;
        return choice;
        
     }
     

    int main()
    {
        
        Date d1;
        
        int choice;
        while((choice=menu()) != 5)
        {
        switch(choice)
        {
        case 1:
        {
            d1.initDate();
            break;
        }
        case 2:
        {
            d1.acceptDateOnConsole();
            break;
        }
 
       case 3:
        {
            d1.printDateOnConsole();
            break;
        }

         case 4:
        {
            d1.isLeapYear();
            break;
        }
        default:
          cout<<"Invalid choice"<<endl;
          break;

      }
      
     }
        cout<<"Thank you"<<endl; 
        return 0;
    }
