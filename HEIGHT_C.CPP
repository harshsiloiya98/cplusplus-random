#include<iostream.h>
#include<conio.h>
void main()
{
double h1;
int h2,h3,h4;
clrscr();
cout<<"Enter your height (in cm):";
cin>>h1;
h2 = h1 / 2.54;
h3 = h2 / 12;
h4 = h2 % 12;
cout<<"Your height (in ft.) is: "<<h3<<" feet and "<<h4<<" inches.";
getch();
}
