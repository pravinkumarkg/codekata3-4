#include <iostream>
using namespace std;

int main() {
	int i,n,arr[50],largest;
	cin>>n;
	for(i=0;i<n;i++)
	
		cin>>arr[i];
		
	largest =arr[0];
	for(i=1;i<n;i++)
	{
		if(largest>arr[i])
		
			largest=arr[i];
		
			
	}
	cout<<largest;

	
	return 0;
}
