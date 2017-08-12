#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
int t;
double p,r,simple_interest,compound_interest;
clrscr();
cout<<"Enter the sum:";
cin>>p;
cout<<"Enter the rate of interest:";
cin>>r;
cout<<"Enter the time period:";
cin>>t;
simple_interest = (p * r * t) / 100;
cout<<"Simple interest for the amount = "<<simple_interest;
compound_interest = ((p * pow ((1 + r/100),t))) - p;
cout<<"\n"<<"Compound interest for the amount = "<<compound_interest;
getch();
}