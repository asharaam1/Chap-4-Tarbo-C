//pg 119
/* calc.c */
/* four-function calculator */
#include<stdio.h>
int main(void)
{
	float num1=1.0, num2=1.0;
	char op;
	
	while(!(num1==0.0 && num2==0.0))
	{
		printf("Type number, operator, number\n");
		scanf("%f %c %f", &num1, &op, &num2);
		if(op=='+')
			printf("=%f", num1 + num2);
		else
		if(op=='-')
			printf("=%f", num1 - num2);
		else
		if(op=='*')
			printf("=%f", num1 * num2);
		else
		if(op=='/')
			printf("=%f", num1 / num2);
		printf("\n\n");
	}
}
//code running
