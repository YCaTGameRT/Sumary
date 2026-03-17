#include "SalarieDemployee.h"

SalariedEmployee::SalariedEmployee(std::string name, double salary) {
	SetName(name);
	SetSalary(salary);
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

std::string SalariedEmployee::GetName() const {
	return name;
}
double SalariedEmployee::GetSalary() const {
	return salary;
}

double SalariedEmployee::Earnings() const {
	return GetSalary();
}
std::string SalariedEmployee::toString() const {
	return std::format("Имя: {}\nЗарплата: {}\n", name, salary);
}