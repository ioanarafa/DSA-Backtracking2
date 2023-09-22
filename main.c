#include <stdio.h>
#include <stdlib.h>

//pb2) generati, afisati si numarati toate solutiile: toate permutarile lui 1:n
//in care suma fiecarei pereche de elemente consecutive e <=M
//n=4,M=5 o solutie este 4 1 3 2

int M=5;
void bt(int k,int n,int *v)
{
    if(k==n)
    {
        for(int i=0;i<n;i++)
            printf("%d ",v[i]);
        printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        v[k]=i;
        int ok=1;
        for(int j=0;j<k;j++)
        {
            if(v[j]==v[k]||v[j]+v[j+1]>M)
                ok=0;
        }
        if(ok==1)
            bt(k+1,n,v);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int *v;
    v=(int*)calloc(n,sizeof(int));
    bt(0,n,v);
    return 0;
}
