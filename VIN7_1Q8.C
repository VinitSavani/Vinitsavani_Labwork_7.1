/* Q8 Write a program to print below pattern using nested for loop.
      output
	5
	4 4
	3 3 3
	2 2 2 2
	1 1 1 1 1
*/
#include<stdio.h>
#include<conio.h>

void main(){
int i,j;
clrscr();
for(i=5;i>=1;i--){
  for(j=i;j<=5;j++){
     printf("%d ",i);
  }
  printf("\n");
}
getch();
}