#include<fstream.h>
#include<iostream.h>
#include<conio.h>
class Customer
{
  char mobileNo[11];
  char name[25];
  char dateOfBirth[9];
  char billingAddress[51];
  char city[25];
  char phoneNo[11];
  float amountOutstanding;
  public:
  void print()
  {
    cout<<"\nMobile phone number: ";
    cout<<mobileNo;
    cout<<"\nName: ";
    cout<<name;
    cout<<"\nDate of birth: ";
    cout<<dateOfBirth;
    cout<<"\nCustomer's billing address: ";
    cout<<billingAddress;
    cout<<"\nCity: ";
    cout<<city;
    cout<<"\nResidence phone number: ";
    cout<<phoneNo;
    cout<<"\nAmount due: ";
    cout<<amountOutstanding;
  }
  void get()
  {
    cout<<"\nMobile phone no.: ";
    cin>>mobileNo;
    cout<<"\nName: ";
    gets(name);
    cout<<"\nDate of birth: ";
    cin>>dateOfBirth;
    cout<<"\nCustomer's billing address: ";
    gets(billingAddress);
    cout<<"\nCity: ";
    gets(city);
    cout<<"\nPhone no.: ";
    cin>>phoneNo;
    cout<<"\nAmount due: ";
    cin>>amountOutstanding;
  }
};

int main()
{
  int ch;
  Customer object;
  while (1)
  {
    cout<<"\n\nDIAZ CUSTOMER TRACKING SYSTEM\n";
    cout<<"\n1.Enter customer details";
    cout<<"\n2.Display all records";
    cout<<"\n0.Exit";
    cout<<"\nEnter your choice: ";
    cin>>ch;
    if (ch == 1)
    {
      ofstream ofile("customer.dat");
      char reply = 'y';
      while (reply == 'y' || reply == 'Y')
      {
        cout<<"\nEnter customer details :- ";
        object.get();
        ofile.write((char *)&object,sizeof(object));
        cout<<"\nDo you wish to continue: ";
        cin>>reply;
      }
      ofile.close();
    }
    if (ch == 2)
    {
      ifstream ifile("customer.dat");
      ifile.read((char *)&object,sizeof(object));
      while (ifile)
      {
        object.print();
        ifile.read((char *)&object,sizeof(object));
      }
      ifile.close();
    }
    if (ch == 0)
    {
      cout<<"\nThank you for choosing Diaz Telecommunications";
      break;
    }
  }
  getch();
  return 0;
}
