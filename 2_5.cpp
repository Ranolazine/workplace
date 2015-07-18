#include <iostream>

using namespace std;

int main()
{
	while (true) {
		int ord[6] = {0};
		int total = 0;
		for (int i = 1; i < 7; ++i) {
			cin >> ord[i];
			total += ord[i];
		}
		if (total == 0) return 1;

		int x, y, N; //x for 2,y for 1
		N = ord[4] + ord[5] + ord[6] + (ord[3] + 3) / 4;
		int left[] = {0, 5, 3, 1};
		x = 5 * ord[4] + left[ord[3] % 4];
		if (ord[2] > x) N += (ord[2] - x + 8) / 9;
		y = 36 * N - 36 * ord[6] - 25 * ord[5] - 16 * ord[4] - 9 * ord[3] - 4 * ord[2];
		if (ord[1] > y) N += (ord[1] - y + 15) / 16;

		cout << N << endl;

	}

}