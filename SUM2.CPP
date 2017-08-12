#include<iostream.h>
#include<conio.h>
#include<math.h>

int fact(int);

void main()
{
  clrscr();
  float x,sum;
  cout<<"Enter value of x: ";
  cin>>x;
  sum = x;
  for (int i = 2; i < 7; i++)
  {
    if (i % 2 == 0)
      sum = sum - (pow(x,i)/fact(i));
    if (i % 2 != 0)
      sum = sum + (pow(x,i)/fact(i));
  }
  cout<<"Sum = "<<sum;
  getch();
}
int fact(int a)
{
  int f,b;
  b = a;
  while (b)
  {
    f = f * b;
    --b;
  }
  return f;
}