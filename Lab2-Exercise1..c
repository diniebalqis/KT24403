#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void printMenu();
double price(char x[]);
void paymentReceipt(double price1, double price2, double price3, char name[],int t_num, char x[],char y[],char z[], int qty1 , int qty2, int qty3);


int main()
{
	printf(" Nur Dinie Balqis Binti Abdul Yazid \n BI19110029 \n");
	printf(" Lab 2 - Exercise 1 \n\n");

	printf(" -------------------------------- \n");	
	printf("   HELLO! WELCOME TO SUNNY CAFE   \n");
	printf(" -------------------------------- \n\n");
	
	char cust[20], code1[2], code2[2], code3[2];
	int table, quantity1, quantity2, quantity3 ;
	double price1,price2,price3, total1, total2, total3, total_all;
	
	printf(" Customer Name : ");
	scanf("%s",&cust);
	printf(" Table Number  : ");
	scanf("%d",&table);
	printf("\n");
	//to call menu
	printMenu();
	
	printf("\n Order 1: ");
	scanf("%s", &code1);
	printf(" Quantity: ");
	scanf("%d", &quantity1);
	
	printf("\n Order 2: ");
	scanf("%s", &code2);
	printf(" Quantity: ");
	scanf("%d", &quantity2);
	
	printf("\n Order 3: ");
	scanf("%s", &code3);
	printf(" Quantity: ");
	scanf("%d", &quantity3);

	//to call price
	price(code1);
	price1 = price(code1);
	price2 = price(code2);
	price3 = price(code3);
	
    paymentReceipt(price1, price2, price3, cust, table, code1, code2, code3, quantity1 ,quantity2, quantity3);

	return 0;
}

void printMenu()
{
	printf("\n        Sunny Cafe Menu \n");
	printf("  ------------------ ----------- \n");
	printf(" | CODE   FOOD      | PRICE(RM) |\n");
	printf(" |------------------|-----------|\n");
	printf(" |  F1  - Burger    |   10.50   |\n");
	printf(" |  F2  - Sandwich  |    3.50   |\n");
	printf(" |  F3  - Hotdog    |    5.00   |\n");
	printf(" |  F4  - Pasta     |    8.00   |\n");
	printf(" |  F5  - Pizza     |   10.00   |\n");
	printf(" |------------------|-----------|\n");
	printf(" | CODE   DRINK     | PRICE(RM) |\n");
	printf(" |------------------|-----------|\n");
	printf(" |  D1  - Coffee    |    2.00   |\n");
	printf(" |  D2  - Chocolate |    3.00   |\n");
	printf(" |  D3  - Juice     |    5.00   |\n");
	printf(" |  D4  - Sky Juice |    0.50   |\n");
	printf(" |  D5  - Tea       |    2.00   |\n");
	printf("  ------------------ ----------- \n\n");
}

double price(char x[]){
	
	double the_price;
	
	//Foods
	if (strcmp(x, "F1") == 0 || strcmp(x,"f1") == 0){
		the_price = 10.50;
	}
	else if (strcmp(x, "F2") == 0 || strcmp(x,"f2") == 0){
		the_price = 3.50;
	}
	else if (strcmp(x, "F3") == 0 || strcmp(x,"f3") == 0){
		the_price = 5.00;
	}
	else if (strcmp(x, "F4") == 0 || strcmp(x,"f4") == 0){
		the_price = 8.00;
	}
	else if (strcmp(x, "F5") == 0 || strcmp(x,"f5") == 0){
		the_price = 10.00;
	}
	
	//Drinks
	else if (strcmp(x, "D1") == 0 || strcmp(x,"d1") == 0){
		the_price = 2.00;
	}
	else if (strcmp(x, "D2") == 0 || strcmp(x,"d2") == 0){
		the_price = 3.00;
	}
	else if (strcmp(x, "D3") == 0 || strcmp(x,"d3") == 0){
		the_price = 5.00;
	}
	else if (strcmp(x, "D4") == 0 || strcmp(x,"d4") == 0){
		the_price = 0.50;
	}
	else if (strcmp(x, "D5") == 0 || strcmp(x,"d5") == 0){
		the_price = 2.00;
	}
	else {
		printf (" Invalid code for the food or drink");
		exit(0);
	}
	
	return the_price;
	 
}

void paymentReceipt(double price1, double price2, double price3, char name[],int t_num, char x[],char y[],char z[], int qty1 , int qty2, int qty3)
{
	double total_price1, total_price2, total_price3, total_all, amount, cashback; 
	
	total_price1 = price1 * qty1;
	total_price2 = price2 * qty2;
	total_price3 = price3 * qty3;
	total_all = total_price1 + total_price2 +total_price3;

	printf("\n\n -------------------------------- \n");
    printf("            SUNNY CAFE            \n");
    printf(" -------------------------------- \n\n");
    printf("         1000 Bennington St,      \n");
    printf("            East Boston,          \n");
    printf("             MA 02128,            \n");
    printf("         Tel: 857-256-2188        \n\n\n");
    printf(" Customer Name : %s", name);
    printf("\n Table Number  : %d", t_num);
    printf("\n\n            BILLS             \n");
	printf("\n\n1) %s", x);
	printf(" X %d", qty1);
	printf(" = RM %.2f",total_price1);
	printf("\n\n2) %s", y);
	printf(" X %d", qty2);
	printf(" = RM %.2f",total_price2);
	printf("\n\n3) %s", z);
	printf(" X %d", qty3);
	printf(" = RM %.2f",total_price3);
	printf("\n\n TOTAL PRICE    : RM%.2f", total_all);
	printf("\n CUSTOMER PAID  : RM");
	scanf("%lf", &amount);
	printf("\n CASHBACK       : RM%.2f", amount - total_all);
	
	printf("\n\n -------------------------------- \n");
    printf("            THANK YOU             \n");
    printf(" -------------------------------- \n\n");
}


