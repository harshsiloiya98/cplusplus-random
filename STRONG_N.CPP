#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int num,temp,fact,a;
  int sum = 0;
  cout<<"Enter a number: ";
  cin>>num;
  temp = num;
  while (temp)
  {
    fact = 1;
    a = temp % 10;
    while (a)
    {
      fact = fact * a;
      --a;
    }
    sum = sum + fact;
    temp = temp / 10;
  }
  if (sum == num)
    cout<<"The number is a strong number";
  else
    cout<<"The number is not a strong number";
  getch();
}