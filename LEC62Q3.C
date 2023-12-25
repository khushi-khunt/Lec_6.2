#include<stdio.h>
#include<conio.h>
void main(){
	int num,i=1;
	clrscr();
	printf("Enter the number:_");
	scanf("%d",&num);
	do{if(i%2==0)printf("%d\n",i);
	 i++;}
	 while(i<=num);
	getch();
}