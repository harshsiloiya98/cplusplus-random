#include<iostream.h>
#include<conio.h>

int fact(int);

void main()
{
  float n,x,sum = 0;
  clrscr();
  cout<<"Till how many terms ? ";
  cin>>n;
  for (int i = 0; i <= n; i++)
  {
    x = fact(i);
    sum = sum + (1/x);
  }
  cout<<"Sum = "<<sum;
  getch();
}
int fact(int a)
{
  int f = 1,b;
  b = a;
  while (b)
  {
    f = f * b;
    --b;
  }
  return f;
}