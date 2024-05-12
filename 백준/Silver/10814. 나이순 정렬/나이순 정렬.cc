#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

struct Person {
	int age;
	string name;
	int joinOrder;//가입 순서
};

bool compare(const Person& a, const Person& b)
{
	if (a.age == b.age)
	{
		return a.joinOrder < b.joinOrder;
	}
	return a.age < b.age;
}

int main()
{
	int n;
	cin >> n;
	vector<Person> p(n);
	for (int i = 0; i < n; i++)
	{
		cin >> p[i].age >> p[i].name;
		p[i].joinOrder = i;
	}
	sort(p.begin(), p.end(), compare);

	for (const auto& Person : p)
		cout << Person.age << ' ' << Person.name << '\n';
}