#include<stdio.h>
void tran(int a[][], int i, int j,int m,int n){
    if (i<m){
        if(j<n){
            printf("%d",a[n-i][j]);
            tran(a,i+1,j,m,n);
        }
        else
        {
             printf("\n");
            tran(a,i,j+1,m,n);
        }   
    }
    else
    {
        return;
    }
    
}
void main(){
    int n,m,i=0,j=0;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j< m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
}