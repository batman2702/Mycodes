#include<bits/stdc++.h>
using namespace std;
int dele(int h[],int n);
void insert(int h[],int n)
{
    int i=n,temp=h[n];
    while(i>0 && temp>h[(i-1)/2])
    {
        h[i]=h[(i-1)/2];
        i=(i-1)/2;
    }
    h[i]=temp;
}
int dele(int h[],int n)
{
	int temp,i,j,val;
	val=h[0];
	h[0]=h[n];
	h[n]=val;
	i=0,j=(2*i)+1;
	while(j<n-1)
	{
		if(h[j]<h[j+1])
		{
			j+=1;
		}
		if(h[i]<h[j])
		{
			temp=h[i];
			h[i]=h[j];
			h[j]=temp;
			i=j;
			j=(2*i)+1;
		}
		else
		{
			break;
		}
	}
	return val;
}
int main()
{
    int h[]={2,3,8,9,4,10,7};
    //int h[]={10,20,30,25,5,40,35};
    int siz=sizeof(h)/sizeof(h[0]);
    for(int i=1;i<siz;i++)
    {
        insert(h,i);
    }
    for(int i=siz-1;i>0;i--)
    {
    	cout<<dele(h,i)<<" ";
	}
	cout<<endl;
    for(int i=0;i<siz;i++)
    {
    	cout<<h[i]<<" ";
	}
    return 0;
}
