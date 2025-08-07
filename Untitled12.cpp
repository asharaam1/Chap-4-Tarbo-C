//pg 117
/* digitcnt.c */
/* counts characters and numrical digits in a phrase */
#include<stdio.h>
int main()
{
	int charcnt=0;
	int digitcnt=0;
	char ch;
	
	printf("Type in phrase : \n");
	while((ch=getchar( ) ) !='\n');
	{
		charcnt++;
		if(ch>47 && ch<58)
		digitcnt++;
	}
	printf("\nCharacter count is %d", charcnt);
	printf("\nDigit count is %d", digitcnt);
}
//code running but small error
/* type:
     He packed 4 socks, 12 shirts, and 1,000 hopes for the future.
*/
