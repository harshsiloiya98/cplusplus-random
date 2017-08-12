#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int lower,upper,p1,p2,n;
  cout<<"Enter lower range (> 0): ";
  cin>>lower;
  cout<<"Enter upper range: ";
  cin>>upper;
  cout<<"\nTWIN PRIMES"<<"\n==========="<<endl;
  for (int i = lower; i < upper; i++)
  {
    n = i + 2;
    if (n > upper)
      break;
    for (int j = 2; j < i; j++)
    {
      if (i % j == 0)
      {
	p1 = 0;
	break;
      }
      else
	p1 = 1;
    }
    for (int k = 2; k < n; k++)
    {
      if (n % k == 0)
      {
	p2 = 0;
	break;
      }
      else
	p2 = 1;
    }
    if (p1 == 1 && p2 == 1)
      cout<<i<<" "<<n<<endl;
  }
  getch();
}




