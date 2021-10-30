
int main()
{
	
}

bool IsLeapYear(int y)
{
	return (y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0);
}

int SecondsInMinute(int m)
{
	return m * 60;
}