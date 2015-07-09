#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <string>
#include <limits>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int n,i(0);
	cin>> n ;
	int total [n];
	for(i;i<n;++i)
		cin>>total[i];

	for(i=0;i<n;++i)
		if (total[i]%2 == 1) cout<<"0 0"<<endl;
		else if(total[i]%4==0) cout<<total[i]/4<<' '<<total[i]/2<<endl;
		else cout<<(total[i]-2)/4<<' '<<total[i]/2<<endl;
		
	std::cout << "\nPress ENTER to continue...";
	std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
	return 0;
}