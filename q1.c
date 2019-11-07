#include<stdio.h>
void so(int a[],int n,int temp){
for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int j = 0; j < n; j++){
    for (int i = 0; i < n-1; i++)
    {
        if (a[i]>a[i+1])
        {
            temp = a[i+1];
            a[i+1]=a[i];
            a[i]=temp;
        }
        
    }
    }
}
void sum(int a[],int b[],int n,int init){
    int max,sum=0;
    if (n-init==3)
    {
        return;
    }
    else
    {
    for (int i = n-init; i <=0 ; i--)
    {
        sum+=a[i];
    }
    max = sum;
    if (sum>max){
        
    }
    }
   
}
void main(){
    int n,temp=0,max,init=0;
    scanf("%d",&n);
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        b[i]=0;
    }
    
    so(a,n,temp);
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",sum(a,b,n,init));
    }
    
}