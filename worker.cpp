#include "worker.h"
#include <iostream>

// Конструктор по умолчанию
WORKER::WORKER()
    : fullName(""), position(""), salary(0.0), startYear(0) {
}

// Конструктор с параметрами
WORKER::WORKER(const std::string& fullName,
    const std::string& position,
    double salary,
    int startYear)
    : fullName(fullName),
    position(position),
    salary(salary),
    startYear(startYear) {
}

// Деструктор
WORKER::~WORKER() {}

// Методы доступа
std::string WORKER::getFullName() const { return fullName; }
std::string WORKER::getPosition() const { return position; }
double WORKER::getSalary() const { return salary; }
int WORKER::getStartYear() const { return startYear; }

// Методы изменения
void WORKER::setFullName(const std::string& fullName) {
    this->fullName = fullName;
}

void WORKER::setPosition(const std::string& position) {
    this->position = position;
}

void WORKER::setSalary(double salary) {
    this->salary = salary;
}

void WORKER::setStartYear(int startYear) {
    this->startYear = startYear;
}

// Расчёт стажа работы
int WORKER::getExperience(int currentYear) const {
    return currentYear - startYear;
}

// Вывод информации
void WORKER::display() const {
    std::cout << "Full name: " << fullName << std::endl;
    std::cout << "Position: " << position << std::endl;
    std::cout << "Salary: " << salary << std::endl;
    std::cout << "Start year: " << startYear << std::endl;
}
