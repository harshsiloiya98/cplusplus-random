#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  for (int i = 'A'; i <= 'F'; i++)
  {
    cout<<endl;
    for (int j = 'A'; j <= i; j++)
    {
      cout<<(char)j;
    }
  }
  getch();
}