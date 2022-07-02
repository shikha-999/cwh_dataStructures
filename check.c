#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1,num2,opt;
	do{
	printf("\n1:addition\n 2:substraction\n 3:multiplication\n 4:Division\n0:end\n");
	scanf("%d",&opt);

	switch(opt)
	{
		case 1:
				printf("\nenter 1st number\t");
				scanf("%d",&num1);
				printf("enter 2nd number\t");
				scanf("%d",&num2);
			printf("addition %d",num1+num2);
			break;
		case 2:
				printf("\nenter 1st number\t");
				scanf("%d",&num1);
				printf("enter 2nd number\t");
				scanf("%d",&num2);
			printf("substraction %d",num1-num2);
			break;
		case 3:
				printf("\nenter 1st number\t");
				scanf("%d",&num1);
				printf("enter 2nd number\t");
				scanf("%d",&num2);
			printf("multiplication %d",num1*num2);
			break;
		case 4:
				printf("\nenter 1st number\t");
				scanf("%d",&num1);
				printf("enter 2nd number\t");
				scanf("%d",&num2);
			if(num2==0)
			{
		       printf("opps not possible ");
		    }
		    else
		    {
		    	printf("divison %d",num1/num2);
			}
			break;
		case 0:
				exit(0);
		default:
		     printf("choose correct option");
			 break;		
		
	}
}while(opt!=0);
	return 0;
}
