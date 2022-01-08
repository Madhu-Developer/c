#include<stdio.h>

int i= 1 ,j=2 ,k= 3 ;
int add() ;
int main() {

 int *a = &i ;
 
 *a = &i + 0x2 ;

printf("print the value of i = %d\n", i);
printf("print the address of i = %p\n", &i);
printf("print the value of *a = %d\n", *a);
 

int *b= &j ;

printf("print the value of j = %d\n", j);
printf("print the address of j = %p\n", &j);
printf("print the value of *b = %d\n", *b);

int *c= &k ;
printf("print the value of j = %d\n", k);
printf("print the address of j = %p\n", &k);
printf("print the value of *c = %d\n", *c);

//printf("%d ", add());


}
int add(){
    printf("hello ",add());
 
}
