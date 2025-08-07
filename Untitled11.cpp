//PG 116
/* lines3.c */
/* prints two diagonal lines on screen */
#include<stdio.h>
int main(void)
{
	int x,y;
	 for(y=1; y<24; y++)
	 {
	 	for(x=1; x<24; x++)
	 	if(x==y || x==24-y)
	 		printf("\xDB");
	 	else
	 		printf("\xBO");
	 	printf("\n");

	 }
}

