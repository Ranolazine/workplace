/*2015年7月2日
 验证常量引用强制转化赋值给变量引用后是否可以修改
*/
#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

int main()
{
	const char cc ='a';
	char &r = (char &) cc;
	r =  'b';
	cout<< r<<endl<<cc<<endl;
	int c;
	cin>>c;
}