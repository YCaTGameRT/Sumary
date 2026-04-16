#include "SalarieDemployee.h"

SalariedEmployee::SalariedEmployee(std::string name, double salary, double taxRate, int joinDay, int joinMounth, int joinYear) {
	SetName(name);
	SetSalary(salary);
	SetTaxRate(taxRate);
	SetJoinDay(joinDay);
	SetJoinMounth(joinMounth);
	this->joinYear = joinYear;
}

void SalariedEmployee::SetName(std::string name) {
	while (true) {
		if (name.size() < 2 || name.size() >= 20) {
			std::cout << "Ошибка длины имени. От 2 до 20 включительно!\nВведите новое имя: ";
			std::cin >> name;
		}
		else {
			this->name = name;
			break;
		}
	}
}
void SalariedEmployee::SetSalary(double salary) {
	while (true) {
		if (salary < 0.0) {
			std::cout << "Ошибка размера зарплаты.\nВведите новую сумму: ";
			std::cin >> salary;
		}
		else {
			this->salary = salary;
			break;
		}
	}
}
void SalariedEmployee::SetTaxRate(double taxRate) {
	while (true) {
		if (taxRate < 0 || taxRate > 100) {
			std::cout << "Ошибка налоговой ставки.\nВведите новую ставку в % от 0 до 100 (включительно): ";
			std::cin >> taxRate;
		}
		else {
			this->taxRate = taxRate;
			break;
		}
	}
}
void SalariedEmployee::SetJoinDay(int joinDay) {
	while (true) {
		if (joinDay <= 0 || joinDay > 31) {
			std::cout << "Ошибка дня найма сотрудника.\nВведите адекватный день: ";
			std::cin >> joinDay;
		}
		else {
			this->joinDay = joinDay;
			break;
		}
	}
}
void SalariedEmployee::SetJoinMounth(int joinMounth) {
	while (true) {
		if (joinMounth <= 0 || joinMounth > 12) {
			std::cout << "Ошибка месяца найма сотрудника.\nВведите адекватный месяц: ";
			std::cin >> joinMounth;
		}
		else {
			this->joinMounth = joinMounth;
			break;
		}
	}
}

std::string SalariedEmployee::GetName() const {
	return name;
}
double SalariedEmployee::GetSalary() const {
	return salary;
}
double SalariedEmployee::GetTax() const {
	return GetSalary() * taxRate / 100;
}
double SalariedEmployee::GetYearsTogetherUpSalary(int nowYear) const {
	if (nowYear - joinYear >= 5 && nowYear - joinYear < 10) {
		return GetSalary() * 5 / 100;
	}
	else if (nowYear - joinYear >= 10 && nowYear - joinYear < 15) {
		return GetSalary() * 10 / 100;
	}
	else if (nowYear - joinYear >= 15) {
		return GetSalary() * 15 / 100;
	}
	else {
		return 0;
	}
}

void SalariedEmployee::UpSalary(double plusSalary) {
	salary += plusSalary;
}
double SalariedEmployee::Earnings(int nowYear) const {
	return GetSalary() - GetTax() + GetSalary() * GetYearsTogetherUpSalary(nowYear);
}
std::string SalariedEmployee::toString() const {
	return std::format("Имя: {}\nЗарплата (без налога): {}\nНалоговая ставка: {}\nГод приёма: {}\n", name, salary, taxRate, joinYear);
}

std::ostream& operator<< (std::ostream& out, const SalariedEmployee& obj) {
	out << obj.toString();
	return out;
}