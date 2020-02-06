#include <bits/stdc++.h>
using namespace std;
#define r 3
#define c 4
void print_matrix(int mat[r][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<mat[i][j];
        }
        cout<<"\n";
    }
}
// void print_array(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i];
//     }
//     cout<<"\n";
// }
void modify_matrix(int mat[r][c])
{
    int row[r];
    int col[c];
    for(int i=0;i<r;i++)
    {
        row[i]=0;
    }
    for(int i=0;i<c;i++)
    {
        col[i]=0;
    }
    //print_array(row,r);
    //print_array(col,c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(mat[i][j]==1)
            {
                row[i]=1;
                col[j]=1;
                //cout<<row[i];
                //cout<<col[j];
            }
            //cout<<"next"<<"\n";
        }
    }
    //print_array(row,r);
    //print_array(col,c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(row[i]==1 || col[j]==1)
            {
                //cout<<"hi";
                mat[i][j]=1;
            }
        }
        cout<<endl;
    }
    //print_matrix(mat);
}

int main() {
    int mat[r][c]={{1,0,0,1},{0,0,1,0},{0,0,0,0}};
    print_matrix(mat);
    modify_matrix(mat);
    print_matrix(mat);
	return 0;
}
