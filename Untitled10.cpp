//pg 115
/* temper3.c */
/* makes remark about temperature */
#include<stdio.h>
int main(void)
{
	int temp;
	
	printf("Please type in the temperature: ");
	scanf("%d", &temp);
	if(temp<80)
	{
		if(temp>60)
		printf("Nice Day!");
	
	}
	else
		printf("Sure is hot!");
}
//code not running
