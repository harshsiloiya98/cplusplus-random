#include <iostream>
#include <cstdio>
#include <cstring>

const int max_text_size = 2000;
char text[max_text_size];

const int max_word_size = 20;
char word[max_word_size];

using namespace std;

int main () {
    // read text in data buffer ...
    
    cout << "Enter text:";
    // lets read one line sentance
    fgets(text, max_text_size, stdin);
    int text_len = strlen(text);
    // is last char newline ... replace it with \0
    if (text[text_len - 1] == '\n') {
        text[text_len - 1] = '\0';
        // length is one shorter
        text_len--;
    }

    cout << "Enter word:";
    // lets read word to search
    fgets(word, max_word_size, stdin);
    int word_len = strlen(word);
    // is last char newline ... replace it with \0
    if (word[word_len - 1] == '\n') {
        word[word_len - 1] = '\0';
        // length is one shorter
        word_len--;
    }

    //make sure we read word
    int i = 0;
    while (word[i]) {
        if (isspace(word[i]) || ispunct(word[i])) {
            cerr << "error : a word should have continous "
                 << "non spaces and non puctuations" << endl;
            return -1;
        }
        i++;
    }

    // find word in the text
    int t = 0;
    int count = 0;
    while(t < text_len) {
        int w = 0;

        while(w < word_len
              && t + w < text_len
              && word[w] == text[t + w]) {
            w++;
        };

        // if all char in word matched ...
        // we need to make sure that next char in the text
        // after the word is a space or a punctuation
        // or '\0' then only it is a valid word
        //
        if (w == word_len // all matched
            && (   isspace(text[t + w])    // is it space
                   || ispunct(text[t + w]) // is it punctuation
                   || text[t + w] == '\0'  // is it end of text
                   )
            ) {
            count++;
            // we need to delete this word now...
            // ...
            while ((text[t] = text[t + w]) != '\0') {
                t++;
            }
            break;
        } else {
            // didn't match hence try next word in the text
            // ... skip to next space or puctuantion
            while (text[t] != '\0'
                   && !(isspace(text[t]) || ispunct(text[t]))) {
                t++;
            }
            // now we have text[t] is either a space a puctuation or '\0'
            t++;
        }
        
    }

    if (count > 0) {
        cout << "\nupdated text\n" << text << endl;
    } else {
        cout << "\nnothing deleted" << endl;
    }

    return 0;
}
