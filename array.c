#include<stdio.h>
#include<string.h>
int main()
{

char a[]="hello world";

printf("length %ld \n",strlen(a));

for (int i=0 ; i<strlen(a); i++){
    printf("%d,%c,%d\n",i,a[i],a[i]);
}

}
