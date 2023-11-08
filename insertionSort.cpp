#include <iostream>
using namespace std;

void insertionSort(int a[], int n){
	for (int i =1; i < n; i++){
		int x = a[i];
		int pos = i-1;
		while (pos >= 0 && x < a[pos]){
			a[pos+1] = a[pos];
			--pos;
		}
		a[pos+1] = x;
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for (int &x : a)cin >> x;
	insertionSort(a,n);
	for(int &x : a)cout << x << " ";
}
