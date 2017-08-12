#include<iostream.h>
#include<conio.h>
class String
{
    char *str;
    int check()
    {
        if (str == NULL)
             return 0;
        else
            return 1;
    }
public:
    String()
    {
        str = 0;
    }
    String(char *inString)
    {
        str = new char[strlen(inString)+1];
        strcpy(str,inString);
    }
    void change(char search_,char repl)
    {
        if (check() == 0)
            throw "NULL Pointer Exception";
        int counter;
        for (counter = 0;str[counter]!='\0';counter++)
        {
            if (str[counter] == search_)
                str[counter] = repl;
        }
    }
    void display()
    {
        cout<<str;
    }
};
int main()
{
    String strObject;
    try
    {
        strObject.change('+',' ');
        strObject.display();
    }
    catch(char *message)
    {
        cout<<"Exception: "<<message<<endl;
    }
    getch();
    return 0;
}
