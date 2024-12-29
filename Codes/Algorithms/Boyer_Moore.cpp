#include<bits/stdc++.h>
using namespace std;

void bad_char(string pattern,vector<int>&badChar) {
    int m = pattern.length();
    fill(badChar.begin(),badChar.end(),-1);
    for (int i=0;i<m;++i)
    {
        badChar[pattern[i]]=i;
    }
}

void good_suffix(string pattern,vector<int>&suffix,vector<int>&goodsuffix) {
    int m=pattern.length();
    suffix.resize(m);
    goodsuffix.resize(m+1,m);
    suffix[m-1]=m;
    for (int i=m-2,j=m-1;i>=0;--i)
    {
        while(j<m-1&&pattern[i]!=pattern[j])
        {
            j=suffix[j+1]-1;
        }
        if(pattern[i]==pattern[j])
        {
            --j;
        }
        suffix[i]=j+1;
    }
    for (int i=m-1;i>=0;--i)
    {
        int j=suffix[i];
        goodsuffix[j]=i;
    }
    for (int i=0;i<m;++i)
    {
        goodsuffix[m-suffix[i]]=i;
    }
}

void search(string text,string pattern)
{
    int n=text.length();
    int m=pattern.length();

    if(m==0)
    {
        cout << "Pattern length is 0. Nothing to search.\n";
        return;
    }

    vector<int>badChar(256,-1);
    bad_char(pattern,badChar);

    vector<int>suffix,goodsuffix;
    good_suffix(pattern,suffix,goodsuffix);

    int shift=0;
    while(shift<=n-m)
    {
        int j=m-1;
        while(j>=0&&pattern[j]==text[shift+j])
        {
            --j;
        }

        if(j<0)
        {
            cout<<"Pattern found at index "<<shift<<endl;
            shift+=goodsuffix[0];
        }
        else
        {
            shift+=max(goodsuffix[j+1],j-badChar[text[shift+j]]);
        }
    }
}

int main() {
    string text="ABAAABCD";
    string pattern="ABC";

    cout<<"Text: "<<text<<endl;
    cout<<"Pattern: "<<pattern<<endl;
    search(text,pattern);


    return 0;
}
