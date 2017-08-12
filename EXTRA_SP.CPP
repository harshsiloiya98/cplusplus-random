#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
  clrscr();
  char txt1[20],txt2[20];
  int i = 0, j = 0;
  cout<<"Enter text: ";
  gets(txt1);
  while (i < strlen(txt1))
  {
    if (txt1[j] == ' ' && txt1[j+1] == ' ')
      while (txt1[j+1] == ' ')
	j++;
    txt2[i] = txt1[j];
    i++;
    j++;
  }
  txt2[i] = '\0';
  while (txt2[0]== ' ')
    for (int k = 0; k < strlen(txt2); k++)
      txt2[k] = txt2[k+1];
  cout<<"\nText after removing extra spaces: ";
  puts(txt2);
  getch();
}