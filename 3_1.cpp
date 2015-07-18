#include <iostream>
#include <string>
#include <cmath>

using namespace std;

long b2ten(const string& x, int base)
{
	int len = x.length();
	long num=0;
	for(int i = len-1,j = 0;i>=0;--i,++j){
		num += (x[i]-'0') * pow(base,j);	
	}
	cout<<num<<endl;
	return num;
}

int maxnum(const string & x)
{
	int len = x.length();
	char maxnum('0');
	for(int i = 0;i<len;++i){
		if(x[i]>maxnum) maxnum = x[i];
	}
	return maxnum-'0';

}
int main()
{
	int T;
	string p,q,r;
	cin>>T;
	for(int i = 0;i<T;++i){
		cin>>p>>q>>r;
		int maxp = maxnum(p);
		int maxq = maxnum(q);
		int maxr = maxnum(r);
		int j=max(maxr,maxq);
		j = max(j,maxp)+1;
		for(;j<17;++j){
			if( b2ten(p,j)*b2ten(q,j) == b2ten(r,j)){
				cout<< j<<endl;
				break;
			}
			if(j==16) cout<<0<<endl;
		}

	}

	
}