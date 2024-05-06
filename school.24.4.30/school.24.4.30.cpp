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



#include<iostream>
using namespace std;
int f[10000009];
int main()
{
	int i, n;
	f[1] = 0;
	f[2] = 0; f[3] = 1;
	for (i = 4; i <= 10000009; i++)
		f[i] = f[i / 2] + f[i - i / 2];
	while (cin>>n)
	{
		cout << f[n] << endl;
	}
	return 0;
}