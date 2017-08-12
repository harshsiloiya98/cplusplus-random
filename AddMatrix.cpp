#include<iostream.h>
int main()
{
   int matrix1[3][3];
   int matrix2[3][3];
   int matrix3[3][3];
   cout<<"Enter matrix 1 :-"<<endl;
   for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
             cin>>matrix1[i][j];
   cout<<"\nEnter matrix 2 :-"<<endl;
   for (int m = 0; m < 3; m++)
        for (int n = 0; n < 3; n++)
             cin>>matrix2[m][n];
   cout<<"\nSum of two matrices :-"<<endl;
   for (int p = 0; p < 3; p++)
   {
       for (int q = 0; q < 3; q++)
        {
            matrix3[p][q] = matrix1[p][q] + matrix2[p][q];
            cout<<matrix3[p][q]<<"\t";
        }
        cout<<"\n";
   }
   return 0;
}
