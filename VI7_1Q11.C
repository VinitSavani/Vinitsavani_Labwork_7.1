/* Q11 write a program to print the below pattern using nested for loop.
       output
	 1 0 1 0 1
	 1 0 1 0
	 1 0 1
	 1 0
	 1
*/
#include<stdio.h>
#include<conio.h>

void main(){
int i,j;
clrscr();
for(i=5;i>=1;i--){
  for(j=1;j<=i;j++){
     printf("%d ",j%2);
  }
  printf("\n");
}
getch();
}