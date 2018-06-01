#include <iostream>
#include <set>
using namespace std;

int isPrime(int inp){
	if(inp<2) return 0;
	for(int i=2;i*i<=inp;i++){
		if(inp%i<1) return 0;
	}
	//cout<<"Prime :"<<inp<<endl;
	return 1;
}

int checkNum(set<int> inp){
	int res=0;
	for(set<int>::iterator it=inp.begin();it!=inp.end();it++)
		if(isPrime(*it)) res++;
 	return res;
}



int indus(string inp){
	
	
	int* num=new int[10];
	for(int i=0;i<10;i++) num[i]=0;
	for(int i=0;i<inp.length();i++)
		if	(inp.at(i)>='0'&&inp.at(i)<='9')
			num[inp.at(i)-'0']++;
	
	/*
	for(int i=0;i<10;i++) cout<<num[i]<<";";
	cout<<endl;
	*/
	
	set<int> waiting;
	waiting.insert(0);
	int res=0;
	for(int i=1;i<=inp.length();i++){
		
		set<int> newWaiting;
		for(set<int>::iterator it=waiting.begin();it!=waiting.end();it++){
			int value=*it;
			if(value==0&&i>1) continue;
			int* leftNum=new int[10];
			for(int j=0;j<10;j++) leftNum[j]=num[j];
			while(value>0){
				leftNum[value%10]--;
				value/=10;
			}
			value=*it;
			for(int j=0;j<10;j++) if(leftNum[j]>0) {
				int newValue=value*10+j;
				newWaiting.insert(newValue);
			}
		}
		waiting=newWaiting;
		res+=checkNum(waiting);
	}
	return res;
}




main(){
	int n;
	cin>>n;
	string* a=new string[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
		cout<<indus(a[i])<<endl;
}
