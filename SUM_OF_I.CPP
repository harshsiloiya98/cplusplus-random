#include<iostream.h>
#include<conio.h>
void main()
{
  int m,n,sum;
  clrscr();
  cout<<"Start from which number ?";
  cin>>m;
  cout<<"Till which number ?";
  cin>>n;
  sum = 0;
  for (int i = m; i <= n; i++)
  {
    sum = sum + i;
  }
  cout<<"Sum of integers from "<<m<<" to "<<n<<" is = "<<sum;
  getch();
}