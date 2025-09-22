#include <iostream>
using namespace std;

int main()
{
	int ans1 = 0, ans2 = 0;
	for (int i = 1; i <= 100; i++)
	{
		ans1 += i;
	}
	cout << ans1 << endl;
	
	for (int i = 3; i <= 100; i += 3)
	{
		ans2 += i;
	}
	cout << ans2 << endl;

	return 0;
}