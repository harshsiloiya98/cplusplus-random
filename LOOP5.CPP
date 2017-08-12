#include<iostream.h>
#include<iomanip.h>
int main()
{
  int k;
  for (int i = 1; i <= 4; i++)
  {
    for (int j = 1; j <= 4 - i; j++)
    {
      cout<<"    ";
    }
    k = i;
    for (int n = 1; n <= i; n++)
    {
      cout<<setw(4)<<"*";
    }
    k = k - 2;
    for (int m = 1; m < i; m++)
    {
      cout<<setw(4)<<"*";
    }
    cout<<endl<<endl;
  }
  return 0;
}
