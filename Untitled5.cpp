//pg 107
/* checker */
/* draw a checkerboard on the screen */
#include<stdio.h>
int main(void)
{
	int x,y;
	for(y=1; y<9; y++)
	{
	
	
	for(x=1; x<9; x++)          //steping across                       
		if((x+y) % 2 == 0)     //even number square?
		printf("\xDB\xDB"); //print filled square
		
		else
			printf("  ");   //print blank square
			printf("\n");   //new line
	}
}
//code running
