#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int n;
  char a = 'Z';
  cout<<"Enter number of rows: ";
  cin>>n;
  for (int i = 1; i <= n; i++)
  {
    cout<<"\n";
    for (int j = n; j >= i; j--)
      cout<<a;
    a = a - i - 1;
  }
  getch();
}