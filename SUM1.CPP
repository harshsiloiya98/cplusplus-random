#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
  long int s = 0;
  int x,n;
  clrscr();
  cout<<"Enter value of x: ";
  cin>>x;
  cout<<"Enter value of n: ";
  cin>>n;
  for (int i = 0; i <= n; i++)
  {
    s = s + pow(x,i);
  }
  cout<<"S = "<<s;
  getch();
}
