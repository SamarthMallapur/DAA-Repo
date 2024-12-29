#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10]={23,45,12,67,34,89,10,22,8,30};
    int HASH_KEY = 11;
    vector<int> hashTable[HASH_KEY];
    for (int i=0;i<10;i++)
    {
        int hashIndex=arr[i]%HASH_KEY; 
        hashTable[hashIndex].push_back(arr[i]);
    }
    cout<<"Hash Table:"<<endl;
    for(int i=0;i<HASH_KEY;i++)
    {
        cout<<"Index "<<i<<": ";
        for(int val:hashTable[i])
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }

    return 0;
}
