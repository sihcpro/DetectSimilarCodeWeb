#include<iostream>

using namespace std;

void nhap(char a[4][4]){
	for(int j=1;j<=4;j++){
		for(int i=1;i<=4;i++){
			cin>>a[i][j];
			if(a[i][j]=='#') a[i][j]=1;
			else a[i][j]=0;
		}
	}
}

int xuly(char a[4][4]){
	for(int j=1;j<=3;j++){
		for(int i=1;i<=3;i++){
			if((a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1])!=2) return 1;
		}
	}
	return 0;
}

int main(){
	char a[4][4];
	nhap(a);
	if(xuly(a)) cout<<"YES";
	else cout<<"NO";
	cout<<endl;
}
