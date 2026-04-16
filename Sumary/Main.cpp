#include <Windows.h>
#include "SalarieDemployee.h"
#include "SalariedCommissionEmployee.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	SalariedEmployee two("who", 10000, 13, 12, 12, 2020);
	std::cout << two.toString() << "\n";
	two.UpSalary(1);
	std::cout << two;
	std::cout << two.Earnings(277) << "\n\n\n";

	SalariedCommissionEmployee one("CaT", 100, 13, 22, 8, 2008, 10000, 0.1);
	std::cout << one << "\n";
	one.UpComissionRate(0.3);
    std::cout << one;
	std::cout << one.Earnings(2026);
	

	return 0;
}