#include<iostream.h>
#include<conio.h>
void main()
{
  int n,t,rev,rem;
  rev = 0;
  clrscr();
  cout<<"Enter a number:";
  cin>>n;
  t = n;
  reverse:
  if (t)
  {
    rem = t % 10;
    rev = rem + (rev * 10);
    t = t / 10;
  }
  if (t > 0)
    goto reverse;
  else
    cout<<"The reverse of the number is "<<rev;
  getch();
}