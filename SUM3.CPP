#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
  clrscr();
  float x,n,sum = 0;
  cout<<"Enter value of x: ";
  cin>>x;
  cout<<"Enter value of n: ";
  cin>>n;
  for (int i = 1; i <= n; i++)
    sum = sum + (pow(x,i)/i);
  cout<<"Sum = "<<sum;
  getch();
}

