#include<iostream.h>
#include<conio.h>

class Prime
{
  int a,rem,count;
  public:
  void display()
  {
    cout<<"Enter any number:";
    cin>>a;
  }
  void division()
  {
    count = 0;
    for (int i = 2; i <= a; ++i)
    {
      rem = a % i;
      if (rem == 0)
      {
	count++;
      }
    }
    if (count > 1)
    {
      cout<<"The number is not a prime number ...";
    }
    else
    {
      cout<<"The number is a prime number ...";
    }
  }
};
			    //end of class
void main()
{
  clrscr();
  Prime p;
  p.display();
  p.division();
  getch();
}
