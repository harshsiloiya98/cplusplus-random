#include<iostream.h>
#include<conio.h>
void main()
{
int cel,fahr;
clrscr();
cout<<"Enter the temperature in celsius:";
cin>>cel;
fahr = ((9 * cel)/5) + 32;
cout<<"Temperature in fahrenheit:"<<fahr;
getch();
}