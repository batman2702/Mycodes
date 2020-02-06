#include<bits/stdc++.h>
using namespace std;
#define r 3
#define c 4
void modify_matrix(int mat[r][c])
{
    bool row_flag=false;
    bool col_flag=false;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==0 and mat[i][j]==1)
            row_flag=true;
            if(j==0 and mat[i][j]==1)
            col_flag=true;
            if(mat[i][j]==1)
            {
                mat[i][0]=1;
                mat[0][j]=1;
            }
        }
    }
    for(int i=1;i<r;i++)
    {
        for(int j=1;j<c;j++)
        {
            if(mat[i][j]==1)
            continue;
            else
            {
                if(mat[i][0]==1 or mat[0][j]==1)
                {
                    mat[i][j]=1;
                }
            }
        }
    }
    if(row_flag==true)
    {
        for(int i=0;i<c;i++)
        {
            mat[0][1]=1;
        }
    }
    if(col_flag==true)
    {
        for(int i=0;i<r;i++)
        {
            mat[i][0]=1;
        }
    }
}
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
int main() {
	int mat[r][c]={{1,0,0,1},{0,0,1,0},{0,0,0,0}};
	print_matrix(mat);
	modify_matrix(mat);
	print_matrix(mat);
	return 0;
}
