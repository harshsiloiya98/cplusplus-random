#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int a[20],size;
  cout<<"Enter size of array (max. 20): ";
  cin>>size;
  cout<<"\n";
  for (int i = 0; i < size; i++)
  {
    cout<<"Enter element "<<i + 1<<": ";
    cin>>a[i];
  }
  cout<<"\nArray before sorting => ";
  for (int j = 0; j < size; j++)
    cout<<a[j]<<" ";
  for (int m = 0; m < size; m++)
  {
    for (int n = 0; n < size; n++)
    {
      if (a[m] < a[n])
      {
	a[m] = a[m] + a[n];
	a[n] = a[m] - a[n];
	a[m] = a[m] - a[n];
      }
    }
  }
  cout<<"\nArray after sorting => ";
  for (int k = 0; k < size; k++)
    cout<<a[k]<<" ";
  getch();
}