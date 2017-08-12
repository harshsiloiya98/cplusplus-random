#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  for (int i = 5; i >= 1; i--)
  {
    cout<<"\n";
    for (int j = 5; j >= i; j--)
    {
      cout<<i;
    }
  }
  getch();
}