#include<stdio.h>
#include<conio.h>

void main(){
char a='A';

clrscr();

do{
printf("%c\n",a);
a=a+4;
}while(a<='z');
getch();
}