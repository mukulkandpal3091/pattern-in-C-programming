#include<stdio.h>
int main()
{
	int i,j,k,n=9;
	int p=n/2;
	int m=n-p;
for(i=m;i>=1;i--)
	{
		for(j=n;j>=i;j--)
			{
				printf(" ");
			}
		for(k=1;k<=n;k++)
			{
				printf("%d",k);
			}
		n-=2;
		printf("\n");
	}
return 0;
}