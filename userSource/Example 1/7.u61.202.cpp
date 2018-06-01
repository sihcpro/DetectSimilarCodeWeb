#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
	double s;cin>>s;
	double r = sqrt(2*s)/(2*(1+sqrt(2) + sqrt(3)));
	printf("%.4lf",r);  
	return 0;
}