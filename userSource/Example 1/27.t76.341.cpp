#include<iostream>
using namespace std;
//bool check(int a[][100],int k ){
//	for(int i=0;i<n;i++){
//		if (b[i][k]==1) return false;
//	}
//	return true;
//}
int main(){
	//long long  a[1000][1000],b[1000][1000],n,m;
	int n,m;
	long long **a;
	a = new long long*[1000];
    for(int i = 0; i < 1000; i++)
        a[i] = new long long[1000];
	int  **b;
	b = new int*[1000];
    for(int i = 0; i < 1000; i++)
        b[i] = new int[1000];        
	cin >>n>>m;
	long long  tong =0;
	for(int i =0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >>a[i][j];
			b[i][j]=0;
			tong+=a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		int max=-1,mi,mj;
		for (int j=0;j<m;j++){
			if (a[i][j]>max) {
				max =a[i][j];
				mi=i;mj=j;
			}
		}
		b[mi][mj]=1;
	}
		for(int j=0;j<m;j++){
		int max=-1,mi,mj;
		for (int i=0;i<n;i++){
			if (a[i][j]>max) {
				max =a[i][j];
				mi=i;mj=j;
			}
		}
		b[mi][mj]=1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if (b[i][j]==1){
				tong-=a[i][j];
			}
		}
	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			cout <<b[i][j]<<"  ";
//			}
//			cout <<endl;
//		}
	cout <<tong;
	}	
	

//}
