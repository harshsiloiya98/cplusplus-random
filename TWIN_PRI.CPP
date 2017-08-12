#include<iostream.h>
#include<conio.h>
int prime(int);
void main()
{
  clrscr();
  int lower,upper;
  cout<<"Enter lower range: ";
  cin>>lower;
  cout<<"Enter upper range: ";
  cin>>upper;
  cout<<"\nTWIN PRIMES"<<endl<<"==========="<<endl;
  for (int i = lower; i <= upper; i++)
  {
    if (prime(i) == 1)
    {
      if (prime(i + 2) == 1)
	cout<<i<<" "<<i + 2<<endl;
    }
  }
  getch();
}
int prime(int n)
{
  int p,m;
  m = n;
  for (int x = 2; x < m; x++)
  {
    if (m % x == 0)
    {
      p = 0;
      break;
    }
    else
      p = 1;
  }
  return p;
}
