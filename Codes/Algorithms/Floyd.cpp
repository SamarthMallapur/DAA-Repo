#include<"bits/stdc++.h>

void display(int D[4][4])
{
        for(int i=0;i<4;i++)
    {
      for(int j=0;j<4;j++)
      {
          cout<<"t"<<D[i][j];
      }
      cout<<"\n";
    }
}

int floyd(int D[4][4])
{
    for(int k=0;k<4;k++)
    {
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(D[i][j]>(D[i][k]+D[k][j]))

                    D[i][j]=D[i][k]+D[k][j];
            }
        }
    }
    return D;
}
int warshal(int D[4][4])
{

}
int main()
{
    int D[4][4]={{0,9999,3,9999},{2,0,9999,9999},{9999,7,0,1},{6,9999,9999,0}};
    D[4][4]=floyd(D);
    cout<<"Floyd's matrix\n";
    display(D);
  
    return 0;

}
