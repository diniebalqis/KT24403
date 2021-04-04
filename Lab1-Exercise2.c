#include <stdio.h>
#include<math.h>

void printMenu();

int main()
{
	printf(" Nur Dinie Balqis Binti Abdul Yazid \n BI19110029 \n");
	printf(" Lab 1 - Exercise 2 \n\n");
	
	printMenu();

	char cust_name[20], s;
	int table_no,item,code,quantity=0;
	float price[6]={5,1,2,2,3,2};
	double amount=0,total1=0, total2=0, total3=0, total4=0, total5=0, total6=0;
	
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
        		getchar();
        		total1+= quantity*price[0];
        		printf(" Price : RM%.2f", total1);
        		printf("\n");
        		break;
        		
			case 1112:
				printf (" DOUGHNUT\n");
				printf (" Please enter the quantity: ");
        		scanf ("%d", &quantity);
        		getchar();
        		total2+= quantity*price[1];
        		printf(" Price : RM%.2f", total2);
        		printf("\n");
        		break;
        	
        	case 1113:
				printf (" SANDWICH\n");
				printf (" Please enter the quantity: ");
        		scanf ("%d", &quantity);
        		getchar();
        		total3+= quantity*price[2];
        		printf(" Price : RM%.2f", total3);
        		printf("\n");
        		break;
        		
        	case 1114:
				printf (" COFFEE\n");
				printf (" Please enter the quantity: ");
        		scanf ("%d", &quantity);
        		getchar();
        		total4+= quantity*price[3];
        		printf(" Price : RM%.2f", total4);
        		printf("\n");
        		break;
        		
        	case 1115:
				printf (" CHOCOLATE\n");
				printf (" Please enter the quantity: ");
        		scanf ("%d", &quantity);
        		getchar();
        		total5+= quantity*price[4];
        		printf(" Price : RM%.2f", total5);
        		printf("\n");
        		break;	
        		
        	case 1116:
				printf (" TEA\n");
				printf (" Please enter the quantity: ");
        		scanf ("%d", &quantity);
        		getchar();
        		total6+= quantity*price[5];
        		printf(" Price : RM%.2f", total6);
        		printf("\n");
        		break;
			
			default : 
        		printf (" Invalid selection try again\n");
        		item++;			
		}
	}
	
	printf("\n\n -------------------------------- \n");
    printf("            SUNNY CAFE            \n");
    printf(" -------------------------------- \n\n");
    printf("         1000 Bennington St,      \n");
    printf("            East Boston,          \n");
    printf("             MA 02128,            \n");
    printf("         Tel: 857-256-2188        \n\n\n");

	double ttl = total1+total2+total3+total4+total5+total6;
	printf("\n TOTAL PRICE    : RM%.2f", ttl);
	printf("\n CASH           : RM");
	
	//ni part sya ganti
	scanf("%lf", &amount);
	printf("\n CASHBACK       : RM%.2f", amount - ttl);
	
	printf("\n\n -------------------------------- \n");
    printf("               THANK YOU          \n");
    printf(" -------------------------------- \n\n");
    
	return 0;
}

void printMenu()
{
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
}
