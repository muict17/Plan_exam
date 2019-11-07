#include<stdio.h>
void check();
void main(){
    int n,i=2;
    scanf("%d",&n);
    if (n==1)
    printf("true");
    else
    check(n,i);
}
void check(int n,int i){
    if (n%i==0)
    {
        //  printf("%d ",i);
        if (n/(i*i*i)==1)
        {
            printf("true");
        }
        else
        {
            check(n,i+1);
        }
    }
    else if (i==n)
    {
        printf("false");
    }
    else
    {
        check(n,i+1);
    }
    
}