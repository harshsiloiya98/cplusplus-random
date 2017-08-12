#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int n;
  cout<<"Enter number of rows: ";
  cin>>n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= (n-i); j++)
      cout<<" ";
    for (int k = i; k >=1; k--)
      cout<<k;
    for (char c = 'A'; c <= (i + 63); c++)
      cout<<c;
    cout<<"\n";
  }
  getch();
}