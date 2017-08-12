#include<iostream.h>
#include<conio.h>
#include<cstring>
#include<cstdio>

const int max_text_size = 2000;
char text[max_text_size];
const int max_word_size = 20;
char word[max_word_size];

int main()
{
    cout<<"Enter text: ";
    gets(text);
    int text_len = strlen(text);
    if (text[text_len - 1] == '\n')
    {
        text[text_len - 1] = '\0';
        text_len--;
    }
    cout<<"Enter word: ";
    gets(word);
    int word_len = strlen(word);
    if (word[word_len - 1] == '\n')
    {
        word[word_len - 1] = '\0';
        word_len--;
    }
    int i = 0;
    while (word[i])
    {
        if (isspace(word[i]) || ispunct(word[i]))
        {
            cerr<<"Error : A word should have continuous non-spaces and non-punctuations"<<endl;
            return -1;
        }
        i++;
    }
    int t = 0;
    int counter = 0;
    while (t < text_len)
    {
        int w = 0;
        while (w < word_len && t + w < text_len && word[w] == text[t + w])
            w++;
        if (w == word_len && (isspace(text[t + w]) || ispunct(text[t + w]) || text[t + w] == '\0'))
        {
           counter++;
           while ((text[t] = text[t + w]) != '\0')
               t++;
           break;
       }
       else
       {
           while (text[t] != '\0' && (isspace(text[t]) || ispunct(text[t])))
              t++;
       }
       t++;
    }
    if (counter > 0)
    {
        cout<<"\nUpdated text: ";
        puts(text);
    }
    else
        cout<<"\nNothing updated";
    getch();
    return 0;
}
