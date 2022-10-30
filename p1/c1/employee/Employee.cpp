module employee;
#include <iostream>

using namespace std;

namespace Records {
    Employee::Employee(const string& firstName, const string& lastName)
    : m_firstName {firstName}, m_lastName {lastName} {}

    void Employee::promote(int raiseAmount) {
        setSalary(getSalary() + raiseAmount);
    }

    void Employee::demote(int demeritAmount) {
        setSalary(getSalary() - demeritAmount);
    }

    void Employee::hire() {m_hire = true;}
    void Employee::fire() {m_hire = false;}

    void Employee::display() const {
        cout << getLastName() << "." << getFirstName() << endl;
    }

    void Employee::setFirstName(const std::string& firstName) {
        m_firstName = firstName;
    }

    const std::string& Employee::getFirstName() const {
        return m_firstName;
    }

    void Employee::setLastName(const std::string& lastName) {
       m_lastName = lastName;
    }

    const std::string& Employee::getLastName() const {
        return m_lastName;
    }

    void Employee::setEmployeeNumber(int employeeNumber) {
        m_employeeNumber = employeeNumber;
    }

    int Employee::getEmployeeNumber() const {
        return m_employeeNumber;
    }

    void Employee::setSalary(int newSalary) {
        m_salary = newSalary;
    }

    int Employee::getSalary() const {
        return m_salary;
    }

    bool Employee::isHired() const {
        return m_hired;
    }
}
