#include "SalariedCommissionEmployee.h"

SalariedCommissionEmployee::SalariedCommissionEmployee(std::string name, double salary, double taxRate, int joinDay, int joinMounth, int joinYear, double sales, double commissionRate) : SalariedEmployee (name, salary, taxRate, joinDay, joinMounth, joinYear) {
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

void SalariedCommissionEmployee::UpComissionRate(double plusCommissionRate) {
	commissionRate += plusCommissionRate;
}
double SalariedCommissionEmployee::Earnings(int nowYear) const {
	return SalariedEmployee::Earnings(nowYear) + GetSales() * GetCommissionRate() - GetSales() * GetCommissionRate() * taxRate / 100;
}
std::string SalariedCommissionEmployee::toString() const {
	return std::format("{}Продажи: {}\nПроцент: {}\n", SalariedEmployee::toString(), sales, commissionRate);
}

std::ostream& operator<< (std::ostream& out, const SalariedCommissionEmployee& obj) {
	out << obj.toString();
	return out;
}