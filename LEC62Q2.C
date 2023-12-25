#include<stdio.h>
#include<conio.h>
void main(){
int choice,pizza,panipuri,puff;
	clrscr();
do{
   printf("Press 1 for Pizza..\n");
   printf("Press 2 for Panipuri..\n");
   printf("Press 3 for Puff..\n");
   printf("Enter your choice:-");
   scanf("%d",&choice);

 switch(choice){
 case 1:printf("press 1 for cheesy pizza..\n");
	printf("press 2 for paneer pizza...\n");
	printf("press 3 for double cheese pizza...\n");
	printf("Enter your choice:-");
	scanf("%d",&pizza);

	switch(pizza){
	case 1:printf("cheesy pizza is being ready...\n");
	       break;
	case 2:printf("paneer pizza is being ready...\n");
	       break;
	case 3:printf("double cheesy pizza is being ready...\n");
	       break;}
	break;
 case 2:printf("Panipuri is ready...\n");
	break;
 case 3:printf("Puff is ready...\n");
	break;
 default:printf("Invalid choice\n");
	 break;}
 }
   while(choice!=0);

	getch();
}