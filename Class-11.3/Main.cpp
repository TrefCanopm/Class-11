#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Plenty
{
	vector<T> plenty;
	int len;
public:
	Plenty()
	{
		len = 0;
	}
	Plenty(int n)
	{
		T a;
		for (int i = 0; i < n; i++)
		{
			cin >> a;
			plenty.push_back(a);
		}
		len = plenty.size();
	}

	void Print()
	{
		for (int i = 0; i < plenty.size(); i++)
		{
			cout << plenty[i] << " ";
		}
		cout << endl;
	}

	~Plenty() {};
};

int main()
{
	Plenty<int> plenty(10);
	plenty.Print();
	return 0;
}