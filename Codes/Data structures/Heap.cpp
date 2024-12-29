#include <iostream>
#include <cstdio>
using namespace std;

void heapify(int a[],int n) {
    int k,heap,v,j;
    for (int i=n/2;i>=1;i--)
    {
        k=i;
        v=a[k];
        heap=0;
        while(heap!=1&&2*k<=n)
        {
            j=2*k;
            if(j<n)
            {
                if(a[j]<a[j+1])
                {
                    j=j+1;
                }
            }
            if(v>=a[j])
            {
                heap=1;
            }
            else
            {
                a[k]=a[j];
                k=j;
            }
        }
        a[k]=v;
    }
}

void heap_sort(int a[], \int n) {
    int temp;
    for (int i=n;i>=1;i--)
    {
        temp=a[1];
        a[1]=a[i];
        a[i]=temp;
        heapify(a,i-1);
    }
}

int main()
{
    int a[10],n;
    cout<<"Enter the size of heap:"<<endl;
    cin>>n;
    cout<<"Enter elements to be added to heap:"<<endl;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    heapify(a,n);
    heap_sort(a,n);
    cout<<"The sorted array is:"<<endl;
    for (int i=1;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
