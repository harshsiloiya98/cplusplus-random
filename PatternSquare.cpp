#include<iostream.h>
int main()
{
    int rows = 0,columns = 0;
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    rows = n;
    while (rows > 0)
    {
        cout<<"*";
        rows--;
    }
    cout<<"\n";
    rows = n-2;
    columns = n;
    while (rows > 0)
    {
        while (columns > 0)
        {
            if (columns == n || columns == 1)
                cout<<"*";
            else
                cout<<" ";
            columns--;
        }
        cout<<"\n";
        columns = n;
        rows--;
    }
    rows = n;
    while (rows > 0)
    {
        cout<<"*";
        rows--;
    }
    cout<<"\n";
    return 0;
}
