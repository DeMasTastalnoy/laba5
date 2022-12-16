#include <iostream>
#include <locale>

namespace D_Month
{
	enum month
	{
		Январь = 31,
		Февраль = 28,
		Март = 31,
		Апрель = 30,
		Май = 31,
		Июнь = 30,
		Июль = 31,
		Август = 31,
		Сентябрь = 30,
		Октябрь = 31,
		Ноябрь = 30,
		Декабрь = 31
	};
	//const char* names[]{ "Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь" };
	void print_days(char** mon)
	{
		setlocale(LC_ALL, "Russian");
		const char* names[]{ "January", "February", "Marth", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
		month p;
		for (int i = 0; i < 12; i++)
		{
			if (*mon[0] == *names[i])
			{
				switch (i) {
				case 0:
					p = Январь;
					break;
				case 1:
					p = Февраль;
					break;
				case 2:
					p = Март;
					break;
				case 3:
					p = Апрель;
					break;
				case 4:
					p = Май;
					break;
				case 5:
					p = Июнь;
					break;
				case 6:
					p = Июль;
					break;
				case 7:
					p = Август;
					break;
				case 8:
					p = Сентябрь;
					break;
				case 9:
					p = Октябрь;
					break;
				case 10:
					p = Ноябрь;
					break;
				case 11:
					p = Декабрь;
					break;

				}
			}
		}
		std::cout << std::endl << p;
	}
}

using namespace D_Month;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char* exp = new char[10];
	cin >> exp;
	char* nam[1];
	nam[0] = exp;
	cout << nam[0];
	print_days(nam);
	delete[] exp;
	return 0;
}