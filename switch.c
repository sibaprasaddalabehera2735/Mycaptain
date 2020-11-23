#include<stdio.h>
main()
{
	//1.Display the menu
	printf("pick an item : \n1. Pen\n2. penci;\n3. eraser\n4. book");
	//2. read their choice
	int choice=0;
	scanf("%d",&choice);
	//3. display based on their choice
	
	switch(choice)
	{
		case 1:
			printf("you picked pen");
			break;
		case 2:
			printf("you picked pencil");
			break;
		case 3:
		    printf("you picked eraser");
		    break;
		case 4:
			printf("you picked book");
			break;
		defult : printf("invalid choice");
	}
}
