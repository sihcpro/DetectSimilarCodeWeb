#include <stdio.h>
#include<math.h>
int main(){
	int n;unsigned long long int temp=1;
	scanf("%d",&n);
	long int a[n];
	for(int i=0;i<n;i++)scanf("%ld",&a[i]);
	for(int i=n-1;i>=0;i--)temp = pow(a[i],temp);
	printf("%llu",(temp%3));
	return 0;
}
