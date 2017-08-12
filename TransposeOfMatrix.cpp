#include<iostream.h>
int main()
{
    int a[20][20],b[20][20];
    int i,j,m,n;
    cout<<"\nEnter row and column of matrix A: ";
    cin>>m>>n;
    cout<<"\nInput matrix A :-"<<endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cin>>a[i][j];
    }
    cout<<"\nMatrix A :- "<<endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout<<a[i][j];
            cout<<"\t";
        }
        cout<<"\n";
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            b[i][j] = a[j][i];
    }
    cout<<"\nTranspose of matrix A :-"<<endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout<<b[i][j];
            cout<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
