#include <iostream>
#include <iomanip>
using namespace std;


void getInput(int &n1, int &n2, int &n3);

int findMin(int n1, int n2, int n3);

void printResult(int n1, int n2, int n3, int min);

int main()
{
	int n1, n2, n3, min;
	getInput(n1, n2, n3);
	min = findmin(n1, n2, n3);
	printResult(n1, n2, n3, min);
}

void printResult(int n1, int n2, int n3, int min)
{
	cout << n1 << " " << n2 << " " << n3 << " " << min << " " << endl;
}