#include<iostream.h>
#include<conio.h>
class Palindrome
{
  int n1,n2,rem,rev;
  public:
  void display()
  {
    cout<<"Enter any number:";
    cin>>n1;
  }
  void reverse()
  {
    rev = 0,n2 = n1;
    while (n1)
    {
      rem = n1 % 10;
      rev = rem + (rev * 10);
      n1 = n1 / 10;
    }
    if (rev == n2)
    {
      cout<<"The number is a palindrome";
    }
    else
    {
      cout<<"The number is not a palindrome";
    }
  }
};

void main()
{
  clrscr();
  Palindrome p;
  p.display();
  p.reverse();
  getch();
}