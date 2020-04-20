#include<stdio.h>
int main()
{
	int n,i,j;
	char ch='A';
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("%c",ch);	
		}	
		ch++;
		printf("\n");
	}

}
