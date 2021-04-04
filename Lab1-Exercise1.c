#include <stdio.h>

int main()
{
	printf(" Nur Dinie Balqis Binti Abdul Yazid \n BI19110029 \n");
	printf(" Lab 1 - Exercise 1 \n\n");
	
	char cust_name[20], s;
	int table_no,item,code,quantity=0;
	
	printf(" -------------------------------- \n");	
	printf("   HELLO! WELCOME TO SUNNY CAFE   \n");
	printf(" -------------------------------- \n\n");
	
	printf("        Sunny Cafe Menu \n");
	printf("  ------------------ ----------- \n");
	printf(" | CODE   FOOD      | PRICE(RM) |\n");
	printf(" |------------------|-----------|\n");
	printf(" | 1111 - Pizza     |   5.00    |\n");
	printf(" | 1112 - Doughnut  |   1.00    |\n");
	printf(" | 1113 - Sandwich  |   2.00    |\n");
	printf(" |------------------|-----------|\n");
	printf(" | CODE   DRINK     | PRICE(RM) |\n");
	printf(" |------------------|-----------|\n");
	printf(" | 1114 - Coffee    |   2.00    |\n");
	printf(" | 1115 - Chocolate |   3.00    |\n");
	printf(" | 1116 - Tea       |   2.00    |\n");
	printf("  ------------------ ----------- \n\n");
	
	printf(" Ordering Detail \n\n");
    printf(" Name : ");
    scanf("%s", &cust_name);
    printf(" Table no. : ");
    scanf("%d", &table_no);
    printf (" Number of the ordered item : ");
    scanf ("%d", &item);
    
	getchar();
	while(item--)
	{
		printf("\n Enter item code: ");
		scanf("%d", &code);
		getchar();
		switch(code)
		{
			case 1111:
        		printf (" PIZZA\n");
				printf (" Please enter the quantity: ");
        		scanf ("%d", &quantity);
        		break;
        		
			case 1112:
				printf (" DOUGHNUT\n");
				printf (" Please enter the quantity: ");
        		scanf ("%d", &quantity);
        		break;
        	
        	case 1113:
				printf (" SANDWICH\n");
				printf (" Please enter the quantity: ");
        		scanf ("%d", &quantity);
        		break;
        		
        	case 1114:
				printf (" COFFEE\n");
				printf (" Please enter the quantity: ");
        		scanf ("%d", &quantity);
        		break;
        		
        	case 1115:
				printf (" CHOCOLATE\n");
				printf (" Please enter the quantity: ");
        		scanf ("%d", &quantity);
        		break;	
        		
        	case 1116:
				printf (" TEA\n");
				printf (" Please enter the quantity: ");
        		scanf ("%d", &quantity);
        		break;
			
			default : 
        		printf (" Invalid selection try again\n");
        		item++;			
		}
	}

	return 0;
}
