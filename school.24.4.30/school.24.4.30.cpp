//#include<iostream>
//#include"test.h"
//using namespace std;
//int main()
//{
//	/*int n;
//	while (cin >> n)
//	{
//		T1(n);
//	}*/
//
//	T2();
//}

//#include <iostream>
//#include <iomanip>
//#include <cmath>
//
//using namespace std;
//
//double legendre(int n, double x) {
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return x;
//	else
//		return ((2 * n - 1) * x * legendre(n - 1, x) - (n - 1) * legendre(n - 2, x)) / n;
//}
//
//int main() {
//	double x;
//	cout << fixed << setprecision(6);
//
//	while (cin >> x) {
//		cout << setw(10) << x << setw(2) << " ";
//		for (int n = 2; n <= 6; ++n) {
//			cout << setw(12) << legendre(n, x) << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}



#include <iostream>

class DFSCounter {
private:
	int num;

public:
	DFSCounter() : num(0) {}

	void DFS(int n) {
		if (n == 3) {
			num++;
			return;
		}
		if (n < 3) return;
		if (n % 2 == 0) {
			DFS(n / 2);
			DFS(n / 2);
		}
		else {
			DFS(n / 2);
			DFS(n / 2 + 1);
		}
	}

	int countDFS(int n) {
		num = 0;
		DFS(n);
		return num;
	}
};

int main() {
	int n;
	DFSCounter counter;
	while (std::cin >> n) {
		std::cout << counter.countDFS(n) << std::endl;
	}
	return 0;
}