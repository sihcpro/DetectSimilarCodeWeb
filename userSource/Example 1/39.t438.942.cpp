#include<stdio.h>
#include<math.h>
int main()
{
	int n,p,a[10],i,dv;
	long long tich=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		dv=a[i]%10;
		a[i]/=10;
		tich+=pow(a[i],dv);
	}
	printf("%lld",tich);
}