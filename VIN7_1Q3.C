/*
  Q3  write patten
      output
       A B C D E
       A B C D E
       A B C D E
       A B C D E
       A B C D E
*/

#include<stdio.h>
#include<conio.h>

void main(){
char i,j;
clrscr();
for(i='A';i<='E';i++){
  for(j='A';j<='E';j++){
     printf("%c ",i);
  }
  printf("\n");
}
getch();
}