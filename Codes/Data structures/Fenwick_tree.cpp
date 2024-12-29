#include<iostream>
using namespace std;
long long int fen[200000];

void update(long long int add,long long int index,long long int n)
{
    while(index<=n)
    {
        fen[index]+=add;
        index+=(index & -index);
    }
}

long long int sum(long long int a)
{
    long long int s=0;
    while(a>0)
    {
        s+=fen[a];
        a=a-(a&(-a));
    }
    return s;
}
long long int range(long long int a , long long int b)
{
    //cout<<"sum a  "<<sum(a) <<"sum b  "<<sum(b)<<endl;
    return sum(b)-sum(a-1);
}

int main()
{
    fen[0]=0;
    long long int n,q,a,b,add;
    cin>>n>>q;

    for(long long int i=0;i<n;i++)
    {
        cin>>add;
        update(add,i+1,n);
    }


for(long long int i=0;i<q;i++)
    {
        cin>>a>>b;
        cout<<range(a,b)<<endl;
    }


    return 0;
}
