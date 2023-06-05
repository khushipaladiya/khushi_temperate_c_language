#include<stdio.h>
#include<conio.h>

void main(){
int A;
int last;
int sum;
clrscr();
printf("Enter the value of A: ");
scanf("%d",&A);
last=A%10;
while(A>9){
A=A/10;
}
sum=A+last;
printf("sum of first and last digit %d",sum);
getch();
}