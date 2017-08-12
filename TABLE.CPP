#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int a,b;
  cout<<"Enter the number for which you want the table: ";
  cin>>a;
  cout<<"Till which number you want the table of "<<a<<" ? ";
  cin>>b;
  cout<<"\n\nTABLE FOR "<<a<<endl<<"============="<<endl;
  for (int c = 1; c <= b; c++)
  {
    cout<<a<<" x "<<c<<" = "<<a*c<<endl;
  }
  getch();
}
