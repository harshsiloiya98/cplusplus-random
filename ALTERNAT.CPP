#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int a[10];
  for (int i = 0; i < 10; i++)
  {
    cout<<"Enter element "<<i + 1<<": ";
    cin>>a[i];
  }
  for (int j = 0; j < 10; j += 2)
  {
    a[j] = a[j] + a[j+1];
    a[j+1] = a[j] - a[j+1];
    a[j] = a[j] - a[j+1];
  }
  cout<<"\nNew array => ";
  for (int k = 0; k < 10; k++)
    cout<<a[k]<<" ";
  getch();
}