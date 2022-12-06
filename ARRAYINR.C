#include<stdio.h>
#include<conio.h>
void main()
{
int a[10] = { 1,2,3,4,5,6,7,8,9,10},i,sum=0;
clrscr();
     /*
	printf("Nubers In Orderd =");
	for(i=0;i<=4;i++)
	{
		printf(" %d",a[i]);
	}
	printf("\n");
	printf("Numbers In Reverse Orderd =");
	for(i=4;i>=0;i--)
	{
		printf(" %d",a[i]);
	}

	//printing the sum of all Given Arry
	for(i=0;i<=10 ;i++)
	{
		sum =sum + a[i];
	}
	printf("%d",sum);  */
	//printing the sum of even number

	for(i=0;i<=10;i++)
	{
		if(a[i] % 2==0)
		{
			printf("%d",a[i]);
		}
	}
getch();
}
