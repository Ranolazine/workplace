/*2015
usage of libriry<ctype*/
#include <iostream>
#include <ctype.h>
#include <limits>

using namespace std;

int main()
{
	char c = 'a';
	int x = isdigit(c);
	int y = isdigit(c);
	cout<<x<<'\t'<<y;
	


	std::cout << "\nPress ENTER to continue...";
 	std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
 	return 0;
}