#include<stdio.h>
#include<conio.h>

void main(){
int A;
int count=0;
clrscr();
printf("Enter the value of A: ");
scanf("%d",&A);

while(A>0){
A=A/10;
count++;
}
printf("total digit %d",count);

getch();
}