#include<iostream.h>
#include<conio.h>
void main()
{
  int first,second,third,n;
  clrscr();
  first = 0;
  second = 1;
  cout<<"How many elements (>5) ? ";
  cin>>n;
  cout<<"\nFibonacci Series\n";
  cout<<first<<" "<<second;
  for (int i = 2; i < n; i++)
  {
    third = first + second;
    cout<<" "<<third;
    first = second;
    second = third;
  }
  getch();
}
