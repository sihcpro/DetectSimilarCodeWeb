#include<iostream>

using namespace std;
void swap(int i,int j, int *a){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}


void quicksort(int *arr, int left, int right){
    int min = (left+right)/2;
    //cout<<"QS:"<<left<<","<<right<<"\n";

    int i = left;
    int j = right;
    int pivot = arr[min];

    while(left<j || i<right)
    {
        while(arr[i]<pivot)
        i++;
        while(arr[j]>pivot)
        j--;

        if(i<=j){
            swap(i,j,arr);
            i++;
            j--;
        }
        else{
            if(left<j)
                quicksort(arr, left, j);
            if(i<right)
                quicksort(arr,i,right);
            return;
        }
    }
}

int main(){
 int n,a[100000];
 cin >>n;
 for(int i=0;i<n;i++){
 	cin >>a[i];
 }
 quicksort(a,0,n-1);
// for(int i =0;i<n;i++){
// //	cout <<a[i]<<"  ";
// }
long long x1=a[0]*a[1]*a[n-1];
long long x2 = a[n-1]*a[n-2]*a[n-3];
long long x3 = a[n-1]*a[n-2];
if(x1 >=x2&& x1 >=x3){
	cout <<x1;
} 
else 
{
	if(x2 >=x1&& x2 >=x3){
		cout <<x2;
		}
	else {
		cout <<x3;
	}
}
//if (a[n-1]*a[n-2]*a[n-3]>a[n-1]*a[n-2])
//	cout <<a[n-1]*a[n-2]*a[n-3];
//else cout <<a[n-1]*a[n-2];	

}

