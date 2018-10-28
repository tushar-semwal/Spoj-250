#include <iostream>
using namespace std;

int raiseToPower(int n)
{
	int out = 10;
	if(n==0)
	return 1;
	
	for(int i=1;i<n;i++)
	out = out*10;
	
	return out;
}

int reverse(int x)
{
	int q; int l = 1;
	q = x/10;
	while(q!=0)
	{
		l++;
		q = q/10;
	}
    q = x;
    int u;
	int sum = 0;
	
	while(l--)
	{
		
		u = q % 10;
		
		sum += u*raiseToPower(l);
		q = q/10;
	}
	
	return sum;
}
int main() {
	// your code goes here
	int N,a,b,sum;
	cin>>N;
	while(N--)
	{
		cin>>a>>b;
		a = reverse(a);
		b = reverse(b);
		sum = a + b;
		cout<<reverse(sum)<<"\n";
	}
	return 0;
}
