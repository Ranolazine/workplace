#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int  n;
	cin >> n;
	char * init_x, *dest_x;
	int  * init_y, *dest_y;
	init_x = new char [n];
	init_y = new int [n];
	dest_x = new char [n];
	dest_y = new int [n];


	for (int i = 0; i < n; ++i) {
		cin >> init_x[i] >> init_y[i];
		cin >> dest_x[i] >> dest_y[i];
	}

	for (int i = 0; i < n; ++i){

			int x_ = init_x[i] - dest_x[i];
			int x = abs(x_);
			int y = abs(init_y[i] - dest_y[i]);
			if (x == 0 && y == 0)    cout << "0 0 0 0\n" ;

			cout << max(x, y) << ' ';

			if (x == 0 || y == 0 || x == y) cout << "1 ";
			else cout << "2 ";

			if (x == 0 || y == 0) cout << "1 ";
			else cout << "2 ";

			if (abs(x - y) % 2 != 0) cout << "Inf\n";
			else if (x == y) cout << "1\n";
			else cout << "2\n";
		}

	delete [] init_x;
	delete [] init_y;
	delete [] dest_x;
	delete [] dest_y;
	return 0;
}