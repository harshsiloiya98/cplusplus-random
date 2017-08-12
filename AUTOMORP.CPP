#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
  clrscr();
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  int square = pow(n,2);
  int temp1 = 1,temp2 = 1;
  while (n > 0)
  {
    temp1 = (temp1 * 10) + (square % 10);
    temp2 = (temp2 * 10) + (n % 10);
    n = n / 10;
    square = square / 10;
  }
  if (temp1 == temp2)
    cout<<"It is an automorphic number";
  else
    cout<<"It is not an automorphic number";
  getch();
}