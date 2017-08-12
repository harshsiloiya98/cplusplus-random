#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
  clrscr();
  char txt[50], word[15], temp[15];
  int count = 0;
  cout<<"Enter text: ";
  gets(txt);
  cout<<"\nEnter word you want to search: ";
  gets(word);
  int len = strlen(txt);
  for (int i = 0; i < len; i++)
  {
    for (int j = 0; txt[i] != ' ' && txt[i] != '\0'; j++,i++)
      temp[j] = txt[i];
    temp[j]='\0';
    if(strcmp(temp,word) == 0)
      count++;
  }
  cout<<"\nNo. of occurrences of the word "<<word<<": "<<count;
  getch();
}