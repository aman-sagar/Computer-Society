#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n1,n2;
	cin>>n1>>n2;
	int gcd;
	int less=n1<n2?n1:n2;
	
	for(int i=less;i>=1;i--)
	{
		if((n1%i==0) && (n2%i==0))
		{
			gcd=i;
			
			break;
		}
	}
	cout<<"Greatest common divisor= "<<gcd;
	return 0;
}
