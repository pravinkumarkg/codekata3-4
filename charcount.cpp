#include <iostream>
using namespace std;

int main() {
	char str[20];
	int count=0;
	cin.getline(str, 10);
	for(int i=0;str[i]!='\0';i++)
	{
		count++;
		if(	str[i]==' ')
		count--;
	}
	cout<<count;
	return 0;
}
