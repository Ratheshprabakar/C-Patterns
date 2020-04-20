#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	char ch='A'+(n-1);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c",ch);		
		}	
		ch--;
		printf("\n");
	}	

}
