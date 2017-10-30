#include<stdio.h>
int main()
{
 	float Y;
	int X;
	scanf("%d%f",&X,&Y);
	if(X+0.50<Y && X%5==0)
	{
		Y=Y-X-0.50;
	}
	
	printf("%0.2f\n",Y);
}
	
