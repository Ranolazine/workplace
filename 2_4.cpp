#include <string>
#include <algorithm>
#include <iostream>
//

using namespace std;

int main()
{
	int alph[26] ={0};
	int n,m,p,i;
	char temp;
	cin>>n>>m>>p;
	for(i=0;i<n*m;++i){
		cin>>temp;
		alph[temp - 'A'] += 1;		
	}

	string word[p];
	for(i=0;i<p;++i){
		cin>>word[i];
		int size = word[i].size();
		for(int j=0;j<size;++j){
			alph[word[i][j]-'A'] -=1;
		}
	}

	for(i=0;i<26;++i){
		temp = 'A' + i;
		int size = alph[i];
		for(int j=0;j<size;++j){
			cout<< temp;
		}
	}

}