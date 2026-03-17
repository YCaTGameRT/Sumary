#include <Windows.h>
#include "SalarieDemployee.h"
#include "SalariedCommissionEmployee.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	SalariedCommissionEmployee one("Caaa", 100, 10000, 0.1);
	std::cout << one.toString();
	std::cout << one.Earnings();

	return 0;
}