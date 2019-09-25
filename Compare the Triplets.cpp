#include<bits/stdc++.h>
using namespace std;

int result[2];
void compareTriple(int a[ ],int b[ ])
{
    int i;
    memset(result, 0, sizeof(result));
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            result[0]++;
        }
        else if(a[i]<b[i])
        {
            result[1]++;
        }
        else
            continue;

    }
    printf("%d %d",result[0],result[1]);

}
int main()
{
    int a[3],b[3],i,result;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    compareTriple(a,b);

}
