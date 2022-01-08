#include<stdio.h>
int main(){
    int c,n,i ;
    int a=1,b=2;
    printf("enter the number for ");
    scanf("%d",&n);
    printf("%d \n %d \n",a,b);
    for(i=2;i<n;i++){
        c=a+b;
        printf("%d \n",c);
        a=b;
        b=c;

    }
    return 0;
    
}