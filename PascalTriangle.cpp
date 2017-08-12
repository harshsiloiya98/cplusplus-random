#include<iostream.h>
int main()
{
    int rows,coef = 1,space;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for (int i = 0; i < rows; i++)
    {
        cout<<"\n";
        for (space = 1; space <= rows - i; space++)
            cout<<"  ";
        for (int j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0)
                coef = 1;
            else
                coef = coef*(i-j+1) / j;
            cout<<"   "<<coef;
        }
    }
    cout<<"\n";
    return 0;
}
