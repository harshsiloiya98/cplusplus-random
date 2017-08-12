#include<iostream.h>
#include<conio.h>
int main()
{
  cout<<"Start"<<endl;
  try
  {
    cout<<"Inside of try block";
    throw 100;
    cout<<"\nEnd of try block";
  }
  catch(double i)
  {
    cout<<"\nIn catch block";
    cout<<"\nValue is "<<i;
  }
  cout<<"\nEnd of program";
  getch();
  return 0;
}
