#include <stdio.h>
int main()
{
	int n,s,m,a[1000],i,j=0,k=0;
	scanf("%d\n",&n);
	scanf("%d\n",&s);
	scanf("%d",&m);
	for (i=1;i<=n;i++)
	{
		a[i]=1;
	}
	i=s;
	while (k<(n-1))
	{
		if (a[i]!=0) j++;
		if (j==m)
		{
		a[i]=0;
		j=0;
		k++;
	    }
		if (i==n)
		{
			i=0;
		}
		i++;
	}
	for (i=1;i<=n;i++)
	{
		if (a[i]==1)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
