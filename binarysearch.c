#include<stdio.h>
main()
{
	int a[10],i,n,l,r,m,x,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);
	l=0;
	r=n-1;
	m=(l+r)/2;
while(l<=r)
{

		if(x==a[m])
		{
		flag=1;
		break;
		}
		else if(x>a[m])
		{
		   m=l-1;
		}
		else
		{
			m=r+1;
		}
	
}
if(flag==1)
{
	printf("your searchin position is :%d\n",m+1);
}
else
{
	printf("data is not found\n");
}
}
