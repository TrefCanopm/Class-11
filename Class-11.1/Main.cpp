#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

typedef vector<float> Vec;

Vec MVector(int n)
{
	Vec v;
	for (int i = 0; i < n; i++)
	{
		float a = rand() % 100;
		v.push_back(a);
	}
	return v;
}

void Print(Vec v)
{
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}

Vec Add(Vec v)
{
	float mn = 100;
	for (int i = 0; i < v.size(); i++)
	{
		if (mn > v[i])
		{
			mn = v[i];
		}
	}
	cout << "Enter the number to put the item on" << endl;
	int n;
	cin >> n;
	v.insert(v.begin() + n - 1, mn);
	return v;
}

Vec Del(Vec v)
{
	Vec v1;
	float s = 0;
	int k = v.size();
	for (int i = 0; i < k; i++)
	{
		s += v[i];
	}
	s = s / k;
	for (int i = 0; i < k; i++)
	{
		if (v[i] < s)
		{
			v1.push_back(v[i]);
		}
	}
	return v1;
}

Vec M(Vec v)
{
	float mx = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (mx < v[i])
		{
			mx = v[i];
		}
	}
	for (int i = 0; i < v.size(); i++)
	{
		v[i] *= mx;
	}
	return v;
}

int main()
{
	Vec v1;
	int n = 10;
	v1 = MVector(n);
	Print(v1);
	v1 = Add(v1);
	Print(v1);
	v1 = Del(v1);
	Print(v1);
	v1 = M(v1);
	Print(v1);

}