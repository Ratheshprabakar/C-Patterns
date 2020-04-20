#include<stdio.h>
int main()
{
	int n,i,j;
	char ch='A';
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=n-i;j>0;j--)
		{
			printf("%c",ch);	
		}	
		ch++;
		printf("\n");
	}
}
