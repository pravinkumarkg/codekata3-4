#include <iostream>
using namespace std;

int main() {
	int i,j,n,temp,number[20];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>number[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(number[i]>number[j])
			{
				temp=number[i];
				number[i]=number[j];
				number[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<number[i]<<" ";
	}
	return 0;
}
