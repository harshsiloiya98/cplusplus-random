#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

class String_rev
{
  char st1[70];
  int a;
  public:
  void accept()
  {
    cout<<"\nEnter a string/word : ";
    gets(st1);
    a = strlen(st1);
  }
  void reverse()
  {
    for (int i = a; i >= 0; i--)
      cout<<st1[i];
  }
};

void main()
{
  clrscr();
  String_rev s;
  s.accept();
  s.reverse();
  getch();
}
