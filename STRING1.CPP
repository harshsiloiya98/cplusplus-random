#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
  clrscr();
  char a[30],b[30];
  int flag;
  cout<<"Enter string 1: ";
  gets(a);
  cout<<"Enter string 2: ";
  gets(b);
  int length1 = strlen(a);
  int length2 = strlen(b);
  if (length1 == length2)
  {
    for (int i = 0; i < length1; i++)
    {
      if (a[i] == b[i])
	flag = 1;
      else
      {
	flag = 0;
	break;
      }
    }
  }
  if (flag == 1)
    cout<<"The strings are identical";
  else
    cout<<"The strings are not identical";
  getch();
}