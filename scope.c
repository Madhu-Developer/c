#include<stdio.h>
#include<unistd.h>

int main(){
    int v = 20 ;
    printf("print process id : %d\n",getpid());
    printf("prnt the value of v %d\n",v);
    v=v *10 ;
    printf("prnt the value of v %d\n",v);
    //printf("prnt the value of return %d\n",main());
    return 0;
  
}