#include<bits/stdc++.h>
using namespace std;

void rabinKarp(char pattern[],char text[],int q)
{
  int m=strlen(pattern);
  int n=strlen(text);
  int i,j;
  int p=0;
  int t=0;
  int k=1;

  for(i=0;i<m-1;i++)
    k=(k*10)%q;

  for(i=0;i<m;i++)
  {
    p=(10*p+pattern[i])%q;
    t=(10*t+text[i])%q;
  }

  for(i=0;i<=n-m;i++)
  {
    if(p==t)
    {
      for(j=0;j<m;j++)
      {
        if(text[i+j]!=pattern[j])
          break;
      }
      if(j==m)
        cout<<"Pattern is found at the  position: "<<i+1<<endl;
    }

    if(i<n-m)
    {
      t=(10*(t-text[i]*k)+text[i+m])%q;
      if(t<0)
        t=(t+q);
    }
  }
}

int main()
{
  char text[]="ABCCABDAEFGBAC";
  char pattern[]="AEF";
  int q=13;
  rabinKarp(pattern,text,q);
}
