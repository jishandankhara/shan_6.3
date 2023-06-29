//write a program to print even number from 1 to N using a do-while loop.

#include<stdio.h>
#include<conio.h>

void main(){
int a,j=1;
clrscr();
printf("enter any number:");
scanf("%d",&a);
do{     if(j %2 == 0)
	 {printf("%d\n",j);}
	 j++;
}while(a>=j);
getch();}