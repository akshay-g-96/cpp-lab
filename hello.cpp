/*#include<stdio.h>
main()
{
	int n,r,p;
	printf("Enter a number\n");
	scanf("%d",&n);
	p=n;
	for(;n>0;n/=10)
	{
		r=n%10;
		printf("%d",r);
	}
	printf("\n");
	for(;p>0;p/=10)
	{
		r=p%10;
		printf("%d",2*r);
	}
}*/
#include<stdio.h>
main()
{
	int n,i,j;
	printf("Enter a number \n");
	scanf("%d",&n);
	printf("1\t2\t3");
	for(i=3;i<=n;i++)
	{
		for(j=2;j<i/2;j++)
		{
			if(i%j==0)
				break;
			else
			{
			printf("\t%d",i);
			}
		}
	}
}
