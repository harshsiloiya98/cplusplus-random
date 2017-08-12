#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int a[40],b,size;
  int flag = 0;
  cout<<"Enter size of array: ";
  cin>>size;
  cout<<"\n";
  for (int i = 0; i < size; i++)
  {
    cout<<"Enter element "<<i + 1<<": ";
    cin>>a[i];
  }
  for (int j = 0; j < size; j++)
  {
    if (a[j] < 0)
      flag++;
    else
    {
      for (int k = j + 1; k < size; k++)
      {
	if (a[j] > a[k] && a[k] < 0)
	{
	  b = a[k];
	  for (int l = k; l > flag; l--)
	    a[l] = a[l - 1];
	  a[flag] = b;
	  flag++;
	}
      }
    }
  }
  cout<<"\nNew array => ";
  for (int m = 0; m < size; m++)
    cout<<a[m]<<" ";
  getch();
}





