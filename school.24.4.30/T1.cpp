#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
void T1(int demo)
{
	double out = 1;
	for (int i = 1; i <= demo; i++)
	{
		out += log10(i);
	}
	cout << (int)out << endl;
}