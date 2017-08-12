#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int a[50],num,pos,size;
  cout<<"Enter size of array: ";
  cin>>size;
  cout<<"\n";
  for (int i = 0; i < size; i++)
  {
    cout<<"Enter element "<<i + 1<<": ";
    cin>>a[i];
  }
  cout<<"Enter number you want to insert: ";
  cin>>num;
  cout<<"Enter position at which you want the number: ";
  cin>>pos;
  pos--;
  for (int j = size; j > pos; j--)
    a[j] = a[j - 1];
  a[pos] = num;
  cout<<"\nChanged array => ";
  for (int k = 0; k < size + 1; k++)
    cout<<a[k]<<" ";
  getch();
}
