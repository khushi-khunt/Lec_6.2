#include<stdio.h>
#include<conio.h>
void main(){
	    int n1=0,n2=1,n3,num;
	clrscr();
	    printf("Enter the number:-");
	    scanf("%d",&num);

	    printf("%d\n%d\n",n1,n2);
	    num=num-2;
	    while(num){
	    n3=n1+n2;
	    printf("%d\n",n3);
	    n1=n2;
	    n2=n3;
	    num=num-1;
	    }
	getch();
	}