#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
  int x,n,sum;
  clrscr();
  while (1)
  {
    cout<<"Enter degree of polynomial:";
    cin>>n;
    cout<<"Enter value of x:";
    cin>>x;
    if (n < 0)
    {
      cout<<"\nWrong value for exponents, re-try!"<<endl;
      continue;
    }
    else
      break;
  }
  sum = 1;
  for (int i = n; i >= 1; i--)
  {
    sum = 1 + (sum * x);
  }
  cout<<"\nx = "<<x<<", n = "<<n<<", sum = "<<sum<<endl;
  getch();
}
