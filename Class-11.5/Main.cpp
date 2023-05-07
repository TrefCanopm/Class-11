#include <iostream>
#include <queue>

using namespace std;

template<class T>
class Vector
{
	int len;
	priority_queue<T> Pri;
public:
	Vector()
	{
		len = 0;
	}
	Vector(int n)
	{
		len = n;
		for (int i = 0; i < len; i++)
			Pri.push(rand() % 100);
	}

	void Print()
	{
		priority_queue<T> P;
		P = Pri;
		for (int i = 0; i < Pri.size(); i++)
		{
			cout << P.top() << " ";
			P.pop();
		}
		cout << endl;
	}

	~Vector() {};
};

int main()
{
	Vector<int> V(10);
	V.Print();

}