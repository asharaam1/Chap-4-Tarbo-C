//pg 123
#include<stdio.h>
int main(void)
{
	float guess, incr;
	char ch;
	
	printf("Think of a number between 1 and 99, and\n");
	printf("I'll guess what what it is. Type 'e' for equals, \n");
	printf("'g' for greater than, and 'l'for less than.\n");
	incr = guess = 50;
	while(incr>1.0)
	{
		printf("\n Is your number greater or less than %.0f?\n", guess);
		
		incr = incr / 2;
		if((ch=getchar()) == 'e')
		break;
	else if(ch == 'g')
		guess = guess + incr;
		
	else
		guess = guess - incr;
		
		
	}
	printf("\n The number is %.0f. Am I not clever?", guess);
}
//code running but error

