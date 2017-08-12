#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c;
char x;
clrscr();
cout<<"Enter any two no.s:";
cin>>a>>b;
cout<<"Enter the operation you want to perform:";
cin>>x;
switch(x)
{
case '+':
c = a + b;
break;
case '-':
c = a - b;
break;
case '*':
c = a * b;
break;
case '/':
c = a / b;
break;
default:
cout<<"Invalid symbol!!";
}
cout<<c;
getch();
}