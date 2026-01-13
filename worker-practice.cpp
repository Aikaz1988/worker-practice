// worker-practice.cpp
#include <iostream>
#include <vector>
#include <limits>
#include "worker.h"

int main() {
    std::vector<WORKER> workers;
    int numberOfWorkers;

    std::cout << "Enter number of workers: ";
    std::cin >> numberOfWorkers;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    for (int i = 0; i < numberOfWorkers; ++i) {
        std::string fullName;
        std::string position;
        double salary;
        int startYear;

        std::cout << "\nWorker " << i + 1 << std::endl;

        std::cout << "Full name: ";
        std::getline(std::cin, fullName);

        std::cout << "Position: ";
        std::getline(std::cin, position);

        std::cout << "Salary: ";
        std::cin >> salary;

        std::cout << "Year of admission to work: ";
        std::cin >> startYear;

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        workers.emplace_back(fullName, position, salary, startYear);
    }

    int currentYear;
    int minExperience;

    std::cout << "\nCurrent year: ";
    std::cin >> currentYear;

    std::cout << "Minimum work experience (years): ";
    std::cin >> minExperience;

    bool found = false;
    for (const auto& worker : workers) {
        if (worker.getExperience(currentYear) > minExperience) {
            worker.display();
            std::cout << std::endl;
            found = true;
        }
    }

    if (!found) {
        std::cout << "No workers with required experience were found." << std::endl;
    }

    return 0;
}
