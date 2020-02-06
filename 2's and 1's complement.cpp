#include<bits/stdc++.h>
using namespace std;

char flip(char c)
{
    return (c=='0')? '1': '0';
}
void complement(string s)
{
    string ones,twos;
    //cout<<s<<endl;
    int n=s.length();
    ones=twos="";
    int i;
    for(i=0;i<n;i++)
    {
        ones+=flip(s[i]);
    }
    twos=s;
    for(i=n-1;i>=0;i--)
    {
        if(twos[i]=='1')
        break;
    }
    //cout<<twos<<endl;
    if(i==-1)
    twos+='1';
    else
    {
        //twos[i]='1';
        for(int k=i-1;k>=0;k--)
        {
            twos[k]=flip(twos[k]);
        }
    }
    printf("%s\n",ones.c_str());
    printf("%s\n",twos.c_str());
}
int main()
{
    string s;
    cin>>s;
    complement(s);
    return 0;
}
