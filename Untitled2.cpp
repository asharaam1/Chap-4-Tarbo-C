//pg 102
//word countring program
//wordcnt
//count character and word in phrase type in
#include<stdio.h>
int main()
{
	int charcnt=0;
	int wordcnt=0;
	char ch;
	
	printf("Type in phrase:\n");
	while((ch=getchar()) != '\n')
	{
		charcnt++;
		if(ch == ' ')
		wordcnt++;
	}
	printf("\n character count is %d", charcnt);
	printf("\n word count is %d", wordcnt+1);
}
//code running
