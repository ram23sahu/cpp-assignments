#include<iostream>
using namespace std;

class Product
{ 
    protected:
    int id;
    string title;
    double price;

    public:
    //parameterless constructor
    Product()
    {
         id=0;
         title="   ";
         price=0.0;
    }

    //parameterized constructor
    Product(int id,string title,double price)
    {
        this->id=id;
        this->title=title;
        this->price=price;
    }

    //accept function
    //partially complete function
    virtual void acceptData()
    {
      cout<<"Enter id : ";
      cin>>id;
      cout<<"Enter title : ";
      cin>>title;
      cout<<"Enter price : ";
      cin>>price;
    }

    //display function
    //partially complete function
    virtual void displayData()
    {
      cout<<"Id is : "<<id<<endl;
      cout<<"Title is : "<<title<<endl;
      cout<<"Price is : "<<price<<endl;
    }

   //get price fun
   double getPrice()
   {
    return price;
   }
};

class Book : public Product
{
   private:
   
   string author;
   

   public:
   //parameterless constructor
   Book()
   {
    author="   ";
   }

   //parameterized constructor
   Book(int id,string title,string author,double price)
   {
    this->id=id;
    this->title=title;
    this->author=author;
    this->price=price;
   }

   //accept function
   //runtime polymorphism // override function
   void acceptData()
   {
    Product::acceptData();
    cout<<"Enter author name :";
    cin>>author;
   }

   //display function
   //runtime polymorphism //override function
   void displayData()
   {
    Product::displayData();
    cout<<"Author is : "<<author<<endl;
   }

};

class Tape : public Product
{
  private:
  string artist;

  public:
  //parameterless constructor
  Tape()
  {
    artist="   ";
  }

  //parameterized constructor
  Tape(int id,string title,string artist,double price)
  {
    this->id=id;
    this->title=title;
    this->artist=artist;
    this->price=price;
  }

  //accept function
  void acceptData()
  {
    Product::acceptData();
    cout<<"Enter artist name :";
    cin>>artist;
  }

  //display function
   void displayData()
   {
    Product::displayData();
    cout<<"Artist is : "<<artist<<endl;
   }

  
};

int menu()
{  
    int choice;
    cout<<"0.For exit"<<endl;
    cout<<"1.Add book"<<endl;
    cout<<"2.Add tape"<<endl;
    cout<<"Enter choice"<<endl;
    cin>>choice;
    return choice;
}



int main()
{
    int choice;
    int count=0;
    double total_bill=0;
    double Book_price=0;
    double Tape_price=0;
   
   // double calculateFinalBill()=0;
    Product *prodarr[3];
    while((choice=menu())!=0)
    {

        switch(choice)
        {   case 0 :
            break;

            case 1 :
            if(count<3)
            {
              prodarr[count]=new Book();    //upcasting
              prodarr[count]->acceptData();
              count++;
            }else
              cout<<"Array is full..."<<endl;
              break;

              case 2 :
              if(count<3)
              {
               prodarr[count]=new Tape();
               prodarr[count]->acceptData();
               count++;
              }else
               cout<<"Array is full..."<<endl;
               break;

               default:
               cout<<"Invalid choice..."<<endl;
               break;
        }

         }
              cout<<"Thank you...."<<endl;

             
               for(int i=0;i<3;i++)
              {
                if(typeid(*prodarr[i])==typeid(Book))
               {
                 Book_price+=prodarr[i]->getPrice();
               };

                if(typeid(*prodarr[i])==typeid(Tape))
               {
                 Tape_price+=prodarr[i]->getPrice();
               };
                }

                 total_bill=(Book_price*0.9)+(Tape_price*0.5);

                 cout<<"Final bill is : "<<total_bill<<endl;
          
            
    for (int i = 0; i < 3; i++)
    {
        delete prodarr[i];
    }
                
                
       
}