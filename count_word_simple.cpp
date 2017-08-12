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

        // we found word in the text
        if (w == word_len) {
            count++;
            // jump by word size
            t += w;
        } else {
            t++;
        }
        
    }


    cout << "\nNo. of occurences = " << count << endl;

    return 0;
}
