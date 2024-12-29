#include <bits/stdc++.h>
using namespace std;
struct x
{
    int u;
    int v;
    int w;
    bool z=true;
    x(int u_,int v_,int w_,bool z_=true):u(u_),v(v_),w(w_),z(z_) {}

};
vector<x> a;
int nodes;

class krus
{
    public:
        void addnode();
        void display();
        int find(int un[],int u,int v);
        void opunion(int un[],int u,int v);
        void mergesort(vector<x>& a);
        vector<x> merge(vector<x>& a,vector<x>& b,vector<x>& c);
};

void krus::addnode()
{
    cout<<"Enter number of nodes\n";
    cin>>nodes;
    cout<<"Enter the number of sets:\n";
    int n,i=0,d,b,c;
    cin>>n;
    cout<<"Enter node 1, node 2 and weight:\n";
    for(i=0;i<n;i++)
    {
        cout<<1+i<<". ";
        cin>>b>>c>>d;
        a.emplace_back(b,c,d,true);
    }
    mergesort(a);
}
void krus::mergesort(vector<x>& a)
{
    int n=a.size();
    if(n<=1)
        return;
    int i,j;
    vector<x> b(a.begin(),a.begin()+n/2);
    vector<x> c(a.begin()+n/2,a.end());
    mergesort(b);
    mergesort(c);
    a=merge(a,b,c);
}

vector<x> krus::merge(vector<x>& a,vector<x>& b,vector<x>& c)
{
    int i=0,j=0,k=0;
    int p=b.size();
    int q=c.size();
    while(i<p&&j<q)
    {
        if(b[i].w <= c[j].w)
        {
            a[k]=b[i];
            i++;
        }
        else
        {
            a[k]=c[j];
            j++;
        }
        k++;
    }
    if(i==p)
    {
        a[k]=c[j];
        k++;
        j++;
    }
    else
    {
        a[k]=b[i];
        k++;
        i++;
    }
    return a;
}

void krus::display()
{
    int count=0;
    int n=a.size();
    int un[nodes];
    for(int i=0;i<nodes;i++)
    {
        un[i]=i;
    }
    for(int i=0;i<n;i++)
    {
        if(count==nodes-1)
            break;
        int u=a[i].u;
        int v=a[i].v;
        if(find(un,u,v))
        {
            a.erase(i);
        }
        else
        {
            opunion(un,u,v);
            count++;
        }
    }
    cout<<"The minimum spanning tree is:\n";
    for(int i=0;i<a.size();i++)
    {
        if(a[i].z==false)
        {
            cout<<"join nodes "<<a[i].u<<" and "<<a[i].v<<" having weights "<<a[i].w<<endl;
        }
    }
}

int krus::find(int un[],int u,int v)
{
    if(un[u]==un[v])
        return 1;
    else 
        return 0;
}

void krus::opunion(int un[],int u,int v)
{
    int temp=un[u];
    for(int i=0;i<9;i++)
    {
        if(un[i]==temp)
        {
            un[i]=un[v];
        }
    }
}
int main()
{
    int n;
    krus s;
    cout<<"***********MENU************\n";
    while(1)
    {
        cout<<"1-Add nodes\n";
        cout<<"2-Display min spanning tree\n";
        cout<<"Any other number to exit\n";
        cin>>n;
        if(n==1)
        {
            s.addnode();
        }
        else if(n==2)
        {
            s.display();
        }
        else
        {
            exit(0);
        }
    }
    return 0;
}
