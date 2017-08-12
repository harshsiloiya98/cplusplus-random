#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
  clrscr();
  char a[40];
  int words = 0,others = 0;
  cout<<"Enter text :-"<<endl;
  gets(a);
  int length = strlen(a);
  for (int i = 0; i < length; i++)
  {
    if (isalpha(a[i]))
      words++;
    if (a[i] != ' ' && isalpha(a[i]) == 0)
      others++;
  }
  cout<<"No. of alphabets = "<<words<<endl;
  cout<<"No. of other characters = "<<others;
  getch();
}