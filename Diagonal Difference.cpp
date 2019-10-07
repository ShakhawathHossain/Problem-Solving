#include <bits/stdc++.h>
using namespace std;

int diagonalDifference(int a[100][100],int n)
{
    int lr_diagonal=0,rl_diagonal=0,Difference;

    for(int i=0;i<n;i++)
    {
        lr_diagonal=lr_diagonal+a[i][i];
    }
    for(int i=0;i<n;i++)
    {
        rl_diagonal=rl_diagonal+a[i][n-1-i];
    }
    Difference = abs(lr_diagonal-rl_diagonal);
    return Difference;
}

int main()
{
    int a[100][100],n,difference;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    difference=diagonalDifference(a,n);
    printf("%d",difference);
}
