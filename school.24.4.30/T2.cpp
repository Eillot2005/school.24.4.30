#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;
class t2
{
private:
	string s;
public:
	void sets(string others)
	{
		s=others;
	}
	int getlength()
	{
		return s.length();
	}
	bool judge()
	{
		for (int i = 0; i < getlength() / 2; i++)
		{
			if (s.at(i) != s.at(getlength() - i-1))return 0;
		}
		return 1;
	}
	string gets()
	{
		return s;
	}
};
void T2()
{
	vector<t2> demo1;
	string s;
	while (getline(cin,s))
	{
		if (s == "")break;
		t2 temp;
		temp.sets(s);
		if (temp.judge())demo1.push_back(temp);
	}
	for (int i = 0; i < demo1.size()-1; i++)
	{
		for (int i = 0; i < demo1.size()-1; i++)
		{
			if (demo1.at(i).getlength() > demo1.at(i + 1).getlength())swap(demo1[i], demo1[i + 1]);
			else if (demo1.at(i).getlength() == demo1.at(i + 1).getlength())
			{
				if(demo1.at(i).gets().at(0)> demo1.at(i+1).gets().at(0))swap(demo1[i], demo1[i + 1]);
			}
		}
	}
	for (int i = 0; i < demo1.size(); i++)cout << demo1.at(i).gets()<<endl;

}