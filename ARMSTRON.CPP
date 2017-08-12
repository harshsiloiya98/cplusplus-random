#include<iostream.h>
#include<conio.h>

class Armstrong
{
  int n,rem,arm,temp;
  public:
  void accept()
  {
    cout<<"Enter any number:";
    cin>>n;
  }
  void calculate()
  {
    temp = n,arm = 0;
    while (temp)
    {
      rem = temp % 10;
      arm = (rem * rem * rem) + arm;
      temp = temp / 10;
    }
    if (arm == n)
    {
      cout<<"It is an armstrong number ...";
    }
    else
    {
      cout<<"It is not an armstrong number ...";
    }
  }
};

int main()
{
  Armstrong a;
  a.accept();
  a.calculate();
  getch();
  return 0;
}
