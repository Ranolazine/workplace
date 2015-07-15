#include <iostream>

using namespace std;

int main()
{
	int n,L,le,ri;
	cin>>L>>n;
	int *p = new int[L+1];
	for(int j=0;j<=L;++j) p[j] =1;

	for(int i=0;i<n;++i){
		cin>>le>>ri;
		for(int k = le;k <=ri;++k)
			p[k] = 0;

	}
	int total =0;
	for (int i = 0;i<=L;++i)
		total += p[i];

	cout << total;


}

