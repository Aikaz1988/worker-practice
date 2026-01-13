#pragma once
#ifndef WORKER_H
#define WORKER_H

#include <string>

/*
Класс WORKER предназначен для представления работника организации
и хранения его основных характеристик.
*/
class WORKER {
private:
    std::string fullName;   // Фамилия, имя и отчество работника
    std::string position;   // Занимаемая должность
    double salary;          // Размер заработной платы
    int startYear;          // Год поступления на работу

public:
    // Конструктор по умолчанию
    WORKER();

    // Конструктор с параметрами
    WORKER(const std::string& fullName,
        const std::string& position,
        double salary,
        int startYear);

    // Деструктор
    ~WORKER();

    // Методы доступа
    std::string getFullName() const;
    std::string getPosition() const;
    double getSalary() const;
    int getStartYear() const;

    // Методы изменения
    void setFullName(const std::string& fullName);
    void setPosition(const std::string& position);
    void setSalary(double salary);
    void setStartYear(int startYear);

    // Метод вычисления стажа работы
    int getExperience(int currentYear) const;

    // Метод вывода информации о работнике
    void display() const;
};

#endif
