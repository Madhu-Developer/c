#include<stdio.h>
int main(){
  int lines=4;
  int spaces=lines-1 ;
  for(int i=1,count=0; count<=lines ; i=i+2 ,count++){
    for(int s=0;s<=spaces;s++){
      printf(" ");
    }
    spaces--;
     for(int j=1;j<=i;j++){
          printf("*");
      }
      printf("\n");
      
  }
}



