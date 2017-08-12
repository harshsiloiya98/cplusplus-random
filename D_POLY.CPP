#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class Person
{
  protected:
  char name[20];
  char DateOfBirth[12];
  char city[20];
  char phoneNo[10];

  public:
  virtual void accept()
  {
    cout<<"\nName: ";
    cin>>name;
    cout<<"\nDate of birth: ";
    cin>>DateOfBirth;
    cout<<"\nCity: ";
    cin>>city;
    cout<<"\nResidence phone number: ";
    cin>>phoneNo;
  }
  virtual void display()
  {
    cout<<"Name: "<<name<<endl;
    cout<<"Date of birth: "<<DateOfBirth<<endl;
    cout<<"City: "<<city<<endl;
    cout<<"Phone number: "<<phoneNo<<endl;
  }
};

class Customer:public Person
{
  private:
  char billing_address[30];
  float amount_outstanding;

  public:
  void accept()
  {
    cout<<"Enter customer details :-"<<endl;
    Person::accept();
    cout<<"\nCustomer's billing address: ";
    gets(billing_address);
    cout<<"\nAmount due: ";
    cin>>amount_outstanding;
  }
  void display()
  {
    cout<<"\n\nCUSTOMER DETAILS"<<"\n=================="<<endl;
    Person::display();
    cout<<"Billing address: ";
    puts(billing_address);
    cout<<"Amount outstanding: "<<amount_outstanding<<endl;
  }
};

class Dealer:public Person
{
  private:
  char shop_address[30];
  int num_sold;

  public:
  void accept()
  {
    cout<<"\nEnter dealer details :-"<<endl;
    Person::accept();
    cout<<"\nShop address: ";
    gets(shop_address);
    cout<<"\nNumber sold: ";
    cin>>num_sold;
  }
  void display()
  {
    cout<<"\n\nDEALER DETAILS"<<"\n================"<<endl;
    Person::display();
    cout<<"Shop address: ";
    puts(shop_address);
    cout<<"Number sold: "<<num_sold<<endl;
  }
};

void main()
{
  clrscr();
  Person *ptr;
  ptr = new Customer;
  ptr -> accept();
  ptr -> display();
  ptr = new Dealer;
  ptr -> accept();
  ptr -> display();
  getch();
}
