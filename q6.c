#include<stdio.h>
int power(int n, int i, int p){
    if (n/i!=1){
        power(n,i*2,p);
    }
    else{
        return i;
    }
}
void convert(int n,int j){
    if (n/j==1){
        printf("%d ",n/j);
        if(j!=1){
            
        }
    }
    else return;
}
void main(){
    int n,i=2,p=0,k;
    scanf("%d",&n);
    convert(n,power(n,i,p));

}