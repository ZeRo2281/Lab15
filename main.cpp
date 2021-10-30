
int main()
{
	
}

bool IsLeapYear(int y)
{
	return (y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0);
}

(int,int) LaterInYear(int d1, int m1, int d2, int m2)
{
	if (m1 > m2)
		return (d1, m1);
	else if (m2 > m1)
		return (d2, m2);
	else if (d1 > d2)
		return (d1, m1);
	else if (d2 > d1)
		return (d2, m2)
	else return (-1, -1);
}