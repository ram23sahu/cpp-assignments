#include<iostream>
using namespace std;

class Employee
{
   protected:
      int id;
      float sal;

    public:
    //parameterless constructor
    Employee()
    {
        id=0;
        sal=0.0;
    }  

    //parameterized constructor
    Employee(int id,float sal)
    {
        this->id=id;
        this->sal=sal;
    }

    //get fun
    int get_id()
    {
        return id;
    }

    //set fun
    void set_id(int id)
    {
        this->id=id;
    }

    float get_sal()
    {
        return sal;
    }

    void set_sal(float sal)
    {
        this->sal=sal;
    }

    //accept fun
    virtual void acceptData()
    {
        cout<<"Enter id : ";
        cin>>id;
        cout<<"Enter salary : ";
        cin>>sal;
    }

    //display fun
    virtual void displayData()
    {
        cout<<"Id is :"<<id<<endl;
        cout<<"Salary is :"<<sal<<endl;
    }

    virtual ~Employee()
    {
     
    }
};

class Manager:virtual public Employee
{
  protected:
    float bonus;

   protected:
     void acceptBonus()
     {
        cout<<"Enter Bonus :";
        cin>>bonus;
     }  

     void displayBonus()
     {
        cout<<"Bonus is :"<<bonus<<endl;
     }  

  public:
     //parameterless constructor
      Manager()
      {
        bonus=0.0;
      }
     
     //parameterized constructor
     Manager(int id,float sal,float bonus)
     {
        this->id=id;
        this->sal=sal;
        this->bonus=bonus;
     }

      float get_bonus()
    {
        return bonus;
    }

    void set_bonus(float bonus)
    {
        this->bonus=bonus;
    }

    //accept fun
     void acceptData()
    {
        Employee::acceptData();
        acceptBonus();
    }

    //display fun
     void displayData()
    {
        Employee::displayData();
        displayBonus();
    }

    ~Manager()
    {
    
    }
};

class Salesman: virtual public Employee
{
    private:
      float commi;

    protected:
     void acceptCommi()
     {
        cout<<"Enter commision :";
        cin>>commi;
     }  

     void displayCommi()
     {
        cout<<"Commision is :"<<commi<<endl;
     }

    public:
      Salesman()
      {
        commi=0.0;
      } 

      Salesman(int id,float sal,float commi)
      {
        this->id=id;
        this->sal=sal;
        this->commi=commi;
      }

      float get_commi()
    {
        return commi;
    }

     void set_commi(float commi)
    {
        this->commi=commi;
    }

    //accept fun
    void acceptData()
    {
        Employee::acceptData();
        acceptCommi();
    } 

     //display fun
     void displayData()
    {
        Employee::displayData();
        displayCommi();
    }

    ~Salesman()
    {
     
    }
    
};

class Sales_manager:public Manager,public Salesman
{
    public:
  Sales_manager()
  {
    
  }

  /*Sales_manager(int id,float sal,float bonus,float commi)
  {
    this->id=id;
    this->sal=sal;
    this->bonus=bonus;
    this->commi=commi;
  }*/

  void acceptData()
  {
    Employee::acceptData();
    acceptBonus();
    acceptCommi();
  }

  void displayData()
  {
   Employee::displayData();
   displayBonus();
   displayCommi();
  }

  ~Sales_manager()
    {
     
    }
  
};

int menu()
{
    int choice;
    cout<<"0.For exit"<<endl;
    cout<<"1.add manager"<<endl;
    cout<<"2.add salesman"<<endl;
    cout<<"3.Add salesmanager"<<endl;
    cout<<"4.Display all employee"<<endl;
    cout<<"5.Display all Manager"<<endl;
    cout<<"6.Display all Salesman"<<endl;
    cout<<"7.Display all Salesmanager"<<endl;
    cout<<"8.Display all employee count"<<endl;
    cout<<"enter choice : ";
    cin>>choice;
    return choice;
}

int main()
{
  int choice;
  int count=0;
  Employee *epr[10];

  while((choice=menu())!=0)
  {
    switch (choice)
    {
    case 0:
        
        break;

    case 1:
    if(count<10)
    {
       epr[count]= new Manager();
       epr[count]->acceptData();
       count++; 
    }else
       cout<<"Array if full..."<<endl;  
       break;

    case 2:
    if(count<10)
    {
       epr[count]= new Salesman();
       epr[count]->acceptData();
       count++;  
    }else
       cout<<"Array if full..."<<endl;
       break;

    case 3:
    if(count<10)
    {
       epr[count]= new Sales_manager();
       epr[count]->acceptData();
       count++;   
    }else 
        cout<<"Array if full..."<<endl;
        break;

    case 4:
        for(int i=0;i<count;i++)
        {
            epr[i]->displayData();
        }
        break;

    case 5:
        for(int i=0;i<count;i++)
        {
            if(typeid(*epr[i])==typeid(Manager))
            epr[i]->displayData();
        }
        break;

    case 6:
        for(int i=0;i<count;i++)
        {
            if(typeid(*epr[i])==typeid(Salesman))
            epr[i]->displayData();
        }
        break;

    case 7:
        for(int i=0;i<count;i++)
        {
            if(typeid(*epr[i])==typeid(Sales_manager))
            epr[i]->displayData();
        }
        break;

    case 8:
        cout<<" Count is :"<<count<<endl;
        break;
    
    default:
        cout<<"Invalid choice...."<<endl;
        break;
    }
  }
     cout<<"Thank you....."<<endl;

    
    for (int i = 0; i < 3; i++)
    {
        delete epr[i];
    }
   
}
