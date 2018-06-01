#include <stdio.h>
#include<stdlib.h>
void Sort(unsigned long int a[], int n)
{
   int c;
   for (c = 1 ; c <= n - 1; c++) {
   	int d,t;
    d = c;
    while ( d > 0 && a[d-1] > a[d]) {
      t      = a[d];
      a[d]   = a[d-1];
      a[d-1] = t;
      d--;
    }
  }
}
int main(){
	int n,k;
	scanf("%d",&n);
	unsigned long int a[n];scanf("%d",&k);
	for(int i=0;i<n;i++)scanf("%lu",&a[i]);
	Sort(a,n);
	printf("%d",a[k-1]);
	return 0;
}
