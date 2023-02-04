#include<stdio.h>
int main()
{
	int val,i,sum=0;
	printf("enter max no.of terms: ");
	scanf("%d",&val);
	printf("odd numbers: ");
	for(i=1;i<=val;i++)
	{
		if((i%2)!=0)
		{
			printf("%d\t",i);
			sum=sum+i;
		}
	}
	printf("\nsum of odd numbers: %d\t",sum);
}
