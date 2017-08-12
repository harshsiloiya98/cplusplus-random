#include<iostream.h>
int main()
{
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    int e = (rows*2) - 1;
    for (int a = 1; a <= rows; a++)
    {
        for (int b = 0; b < e; b++)
            cout<<"*";
        cout<<"\n";
        e = e - 2;
        for (int c = 0; c < a; c++)
            cout<<" ";
    }
    return 0;
}
