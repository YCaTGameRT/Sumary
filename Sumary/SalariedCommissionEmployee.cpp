#include "SalariedCommissionEmployee.h"

SalariedCommissionEmployee::SalariedCommissionEmployee(std::string name, double salary, double sales, double commissionRate) : SalariedEmployee (name, salary) {
	SetSales(sales);
	SetCommissionRate(commissionRate);
}

void SalariedCommissionEmployee::SetSales(double sales) {
	while (true) {
		if (sales < 0.0) {
			std::cout << "Ошибка объёма продаж.\nВведите объём продаж: ";
			std::cin >> sales;
		}
		else {
			this->sales = sales;
			break;
		}
	}
}
void SalariedCommissionEmployee::SetCommissionRate(double commissionRate) {
	while (true) {
		if (commissionRate < 0.0 || commissionRate >= 1.0) {
			std::cout << "Ошибка процентной ставки.\nВведите новую ставку до 1.0: ";
			std::cin >> commissionRate;
		}
		else {
			this->commissionRate = commissionRate;
			break;
		}
	}
}

double SalariedCommissionEmployee::GetSales() const {
	return sales;
}
double SalariedCommissionEmployee::GetCommissionRate() const {
	return commissionRate;
}

double SalariedCommissionEmployee::Earnings() const {
	return SalariedEmployee::Earnings() + GetSales() + GetCommissionRate();
}
std::string SalariedCommissionEmployee::toString() const {
	return std::format("{}Продажи: {}\nПроцент: {}\n", SalariedEmployee::toString(), sales, commissionRate);
}