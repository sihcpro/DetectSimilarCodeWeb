#include <bits/stdc++.h>
int main()
{
	int N,s,a;
	long long X=0;
	scanf("%d",&N);
	
	for (int i=0; i<N; i++)
	{
		scanf("%d",&s);
		a=s%10;
		s=s/10;
		X=X+pow(s,a);
	}
	printf("%lld",X);
	return 0;
}
