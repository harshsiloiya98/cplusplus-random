#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

const int maxlength = 80;
const int max_tries = 5;
const int max_row = 7;

int letterFill (char, char[], char[]); //  function prototype
void initUnknown (char[], char[]);    //  declaration

int main()                        //main() function
{
  clrscr();
  char unknown[maxlength];
  char letter;
  int num_of_wrong_guesses = 0;
  char word[maxlength];
  char words[][maxlength] = { "india", "pakistan", "nepal", "malaysia", "philippines", "australia", "iran", "ethiopia", "oman", "indonesia", "china", "japan", "argentina", "brazil", "germany", "france", "italy", "portugal", "russia", "england", "canada", "mexico", "thailand" };
  randomize();
  int n = random(23);
  strcpy(word, words[n]);
  initUnknown(word, unknown);

  cout<<"\n\nWelcome to hangman ...... Guess a country name";
  cout<<"\n\nEach letter is represented by a star.";
  cout<<"\n\nYou have to type only one letter in one try";
  cout<<"\n\nYou have "<<max_tries<<" tries to try and guess the word.";
  cout<<"\n---------------------------------------------------------------";

  while (num_of_wrong_guesses < max_tries)
  {
    cout<<"\n\n"<<unknown;
    cout<<"\n\nGuess a letter:";
    cin>>letter;
    if (letterFill(letter, word, unknown) == 0)
    {
      cout<<endl<<"Whoops! That letter isn't there"<<endl;
      num_of_wrong_guesses++;
    }
    else
    {
      cout<<endl<<"You found a letter!! Isn't that exciting!"<<endl;
    }
    cout<<"You have "<<max_tries - num_of_wrong_guesses<<" guesses left."<<endl;
    if (strcmp(word, unknown) == 0)
    {
      cout<<word<<endl;
      cout<<"Yeah !! You got it!";
      break;
    }
  }
  if (num_of_wrong_guesses == max_tries)
  {
    cout<<"\nSorry, you lose ..... you have been hanged."<<endl;
    cout<<"The word was: "<<word<<endl;
  }
  getch();
  return 0;
}                                         //end of main() function

int letterFill(char guess, char secretword[], char guessword[])   //function 1
{
  int i;
  int matches = 0;
  for(i = 0; secretword[i]!= '\0'; i++)
  {
    if(guess == guessword[i])
	return 0;
    if(guess == secretword[i])
    {
      guessword[i] = guess;
      matches++;
    }
  }
  return matches;
}

void initUnknown(char word[], char unknown[])     //function 2
{
  int i;
  int length = strlen(word);
  for(i = 0; i < length; i++)
  {
    unknown[i] = '*';
  };
  unknown[i] = '\0';
}