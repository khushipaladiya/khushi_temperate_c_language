#include<stdio.h>
#include<conio.h>

void main(){
int A=1;
int N;
clrscr();
printf("Enter N: ");
scanf("%d",&N);

do{
 printf("%d\n",A);
 A=A+4;
}while(A<=N);

getch();
}