#include<stdio.h>
int main()
{
	int n,i,j,k;
	char ch='A';
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n-1;j>=i;j--)
		{
			printf(" ");	
		}	
		for(k=1;k<=i;k++)
		{
			printf("%c",ch);
			ch++;
		}
		ch='A';
		printf("\n");
	}
}
