#include <iostream>
using namespace std;

int main() {
	int i,n,arr[5]={1,2,3,4,5};
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
	cout<<arr[i]<<' '<<i<<'\n';
	}
	return 0;
}
