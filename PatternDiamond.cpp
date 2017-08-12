#include<iostream.h>
int main()
{
    int rows,z = 1;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for (int i = 0; i <= rows; i++)
    {
        for (int j = rows; j > i; j--)
            cout<<" ";
        cout<<"*";
        if (i > 0)
        {
            for (int k = 1; k <= z; k++)
                cout<<" ";
            z += 2;
            cout<<"*";
        }
        cout<<"\n";
    }
    z = z - 4;
    for (int m = 0; m <= rows-1; m++)
    {
        for (int n = 0; n <= m; n++)
            cout<<" ";
        cout<<"*";
        for (int l = 1; l <= z; l++)
            cout<<" ";
        z = z - 2;
        if (m != rows-1)
            cout<<"*";
        cout<<"\n";
    }
    return 0;
}
