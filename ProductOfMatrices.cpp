#include<iostream.h>
#include<process.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int m,n,p,q,k,i,j;
    cout<<"\nEnter the rows and columns of matrix A: ";
    cin>>m>>n;
    cout<<"\nEnter the rows and columns of matrix B: ";
    cin>>p>>q;
    if (n == p)
    {
        cout<<"\nEnter matrix A :-"<<endl;
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                cin>>a[i][j];
        cout<<"\nEnter matrix B :-"<<endl;
        for (i = 0; i < p; i++)
            for (j = 0; j < q; j++)
                cin>>b[i][j];
        cout<<"\nProduct of two matrices :-"<<endl;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < n; k++)
                    c[i][j] = c[i][j] + (a[i][j] * b[i][j]);
                cout<<c[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
    else
        cout<<"The matrices are not compatible for multiplication";
    return 0;
}
