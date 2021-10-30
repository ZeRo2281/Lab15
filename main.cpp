#include <iostream>

using namespace std;

int main()
{

}

bool IsLeapYear(int y)
{
	return (y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0);
}

void LaterInYear(int d1, int m1, int d2, int m2)
{
	if (m1 > m2)
		cout << "Первый день ближе к Новому году";
	else if (m2 > m1)
		cout << "Второй день ближе к Новому году";
	else if (d1 > d2)
		cout << "Первый день ближе к Новому году";
	else if (d2 > d1)
		cout << "Второй день ближе к Новому году";
	else cout << "Введен один и тот же день";
}

int DaysInYear(int y)
{
	if (IsLeapYear(y))
		return 366;
	else return 365;
}

int DaysInYearRange(int y1, int y2)
{
	int sum = 0;
	for (int i = y1; i <= y2; i++)
	{
		if (IsLeapYear(i))
			sum += 366;
		else sum += 365;
	}
}

int SeconsInHours(int h)
{
	return h * 24 * 60;
}