/*
   Q5 write patten
     output
      1 0 1 0 1
      1 0 1 0 1
      1 0 1 0 1
      1 0 1 0 1
      1 0 1 0 1
*/
#include<stdio.h>
#include<cpnio.h>

void main(){
int i,j;
clrscr();
for(i=1;i<=5;i++){
  for(j=1;j<=5;j++){
     printf("%d ",j%2);
  }
  printf("\n");
}
getch();
}