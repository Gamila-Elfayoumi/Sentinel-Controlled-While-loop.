#include <iostream>
#include <climits>
using namespace std;
int main()
{
	const int FLAG = -99999;
	long min, max, num, counter = 0, sum = 0, avg;
	cout << "sizeof (min):" << sizeof(min) << "\n";
	min = INT_MAX;
	max = INT_MIN;
	cout << "please enter a number :" << FLAG << "to stop\n";
	cin >> num;
	while (num != FLAG) {
		sum += num;
		counter++;
		if (num < min)
			min = num;
		if (num > max)
			max = num;
		cout << "plese entre a number :" << FLAG << "to stop\n";
		cin >> num;
	}
	if (counter == 0)
		cout << "no data entered.\ngood bye!";
	else
		if (counter == 1)
			cout << "Min=Max=sum=avg=" << sum;
		else
			cout << "Min=" << min <<
			"\nMax=" << max <<
			"\nsum=" << sum <<
			"\naverage=" << (double)sum / counter<< endl;
	system("pause");
}
