#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  float p,amt,si;
  int r,t;
  cout<<"Enter amount you want to deposit (min. 1000): ";
  cin>>p;
  cout<<"Enter time period (min. 1 year): ";
  cin>>t;
  if (p < 2000 && t >= 2)
    r = 5;
  else if ((p >= 2000 && p <= 6000) && t >= 2)
    r = 7;
  else if (p > 6000 && t == 1)
    r = 8;
  else if (t >= 5)
    r = 10;
  else
  {
    cout<<"ERROR !";
    goto exit;
  }
  si = (p * r * t) / 100;
  amt = p + si;
  cout<<"Simple interest = "<<si<<endl;
  cout<<"Amount withstanding after "<<t<<" years = "<<amt;
  exit:
  getch();
}
