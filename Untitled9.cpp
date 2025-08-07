//pg 114
/* digitcnt.c */
/* count characters and numerical digits in a phrase */
#include<stdio.h>
int main(void)
{
	int charcnt=0;
	int digitcnt=0;
	char ch;
	
	printf("Type in a phrase:\n");
	while((ch=getchar()) != '\n')
	{
		charcnt++;
		if(ch>47 && ch<58)
			digitcnt++;
	}
	printf("\n Charactercount is %d", charcnt);
	printf("\n Digit count is %d", digitcnt);
}
//type = he packed 4 socks, 12 shirts, and 1,000 hopes for the future.
