#include <iostream>
#include <vector>
#include "Money.h"

using namespace std;

typedef vector <Money> Vec;

Vec MVector(int n)
{
	Vec v;
	Money m;
	int k;
	long r;
	for (int i = 0; i < n; i++)
	{
		k = rand() % 100;
		r = rand() % 100;
		m.SetMoney(r, k);
		v.push_back(m);
	}
	return v;
}

void Print(Vec v)
{
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;
}

Vec Add(Vec v)
{
	Money mn(100, 99);
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] < mn)
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
	int s = 0;
	int n = v.size();
	for (int i = 0; i < n; i++)
	{
		s = s+v[i].GetMoneyR()*100 + v[i].GetMoneyK();
	}
	s = s / n;
	long r = s /100;
	int k = s % 100;
	Money m(r, k);
	for (int i = 0; i < n; i++)
	{
		if (v[i] < m)
		{
			v1.push_back(v[i]);
		}
	}
	return v1;
}

Vec M(Vec v)
{
	Money mx(0, 0);
	long M, M1;
	for (int i = 0; i < v.size(); i++)
	{
		if (mx < v[i])
		{
			mx = v[i];
		}
	}
	for (int i = 0; i < v.size(); i++)
	{
		M = v[i].GetMoneyR() * 100 + v[i].GetMoneyK();
		M1 = mx.GetMoneyR() * 100 + mx.GetMoneyK();
		M = M * M1;
		v[i].SetMoney(M / 100, M % 100);
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