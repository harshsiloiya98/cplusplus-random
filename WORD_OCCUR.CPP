#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	clrscr();
	char str[1000], word[50], tmp[50];
	int i, ctr=0;
	cout<<"\nEnter a sentence: ";
	gets(str);
	cout<<"\nEnter a word to find: ";
	gets(word);
	for(int j=0; j<strlen(str); ++j)
	{
		for(i=0; str[j]!=' ' && str[j]!='\0'; ++i, ++j)
			tmp[i]=str[j];
			tmp[i]='\0';
			if(strcmp(tmp,word)==0)
			ctr++;
	}
		cout<<"\nThe word \""<<word<<"\" occurs "<<ctr<<" times in the sentence";
		getch();
}