#include<iostream.h>
int main()
{
    int space,rows,k = 0,count1 = 0,count2 = 0;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for (int i = 1; i <= rows; i++)
    {
        for (space = 1; space <= rows - i; space++)
        {
            cout<<"  ";
            count1++;
        }
        while (k != 2*i-1)
        {
            if (count1 <= rows - 1)
            {
                cout<<i+k<<" ";
                count1++;
            }
            else
            {
                count2++;
                cout<<i+k-2*count1<<" ";
            }
            k++;
        }
        count1 = count2 = k = 0;
        cout<<"\n";
    }
    return 0;
}
