#include<stdio.h>
int main()
{
	int i,j,n=5,k;
for(i=n;i>=1;i--)
	{
		for(j=n-1;j>=i;j--)
			{
				printf(" ");
			}
		for(k=1;k<=i;k++)
			{
				printf("%d",k);
			}
		printf("\n");
	}
return 0;
}