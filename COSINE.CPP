#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
  clrscr();
  float x,t,sum,n = 20;
  cout<<"Enter angle: ";
  cin>>x;
  x = (x * 3.1415926536) / 180;
  t = t + 1;
  sum = 1;
  for (int i = 1; i <= n; i++)
  {
    t = t * pow(-1,(2 * 1)-1) * x * x / (2 * i * (2 * i - 1));
    sum = sum + t;
  }
  cout<<"cos "<<x<<" = "<<sum;
  getch();
}
