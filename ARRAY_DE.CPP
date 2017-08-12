#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int a[10];
  int del,flag,pos = 0;
  for (int i = 0; i < 10; i++)
  {
    cout<<"Enter element "<<i + 1<<": ";
    cin>>a[i];
  }
  cout<<"\nEnter number you want to delete: ";
  cin>>del;
  for (int j = 0; j < 10; j++)
  {
    if (a[j] == del)
    {
      flag = 1;
      break;
    }
    else
      flag = 0;
  }
  if (flag == 0)
    cout<<"ELEMENT NOT PRESENT IN ARRAY !!";
  else
  {
    while (a[pos] != del && pos < 10)
      pos++;
    for (int k = pos; k < 10; k++)
      a[k] = a[k+1];
    k--;
    cout<<"\nChanged array => ";
    for (int m = 0; m < k; m++)
      cout<<a[m]<<" ";
  }
  getch();
}


