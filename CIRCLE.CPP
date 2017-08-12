#include<iostream.h>
#include<conio.h>
void main()
{
double r,ar,c;
int choice;
clrscr();
cout<<"CIRCLE MENU"<<endl;
cout<<"Select your option:-"<<endl;
cout<<"1. Area calculation"<<endl;
cout<<"2. Circumference calculation"<<endl;
cin>>choice;
if(choice == 1)
{
cout<<"Enter the radius of the circle (in cm):";
cin>>r;
ar = 3.14 * r * r;
cout<<"Area of the circle is = "<<ar<<" sq cm."<<endl;
}
else if(choice == 2)
{
cout<<"Enter the radius of the circle (in cm):";
cin>>r;
c = 2 * 3.14 * r;
cout<<"Circumference of the circle = "<<c<<" cm."<<endl;
}
else
{
cout<<"Invalid selection!!";
}
getch();
}
