#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <iostream>
#include <string>
#include <limits>
//how to use virtual 	7.07

using namespace std;

class A
{
public:
	virtual void Print() {cout << 'A' << endl;}
};

class B: public A
{
public:
	virtual void Print() {cout << 'B' << endl;}
};

void PrintInfo(A & r)
{
	r.Print();
}
int main()
{
	A a; B b;
	PrintInfo(a);
	PrintInfo(b);

	std::cout << "\nPress ENTER to continue...";
	std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
	return 0;
}