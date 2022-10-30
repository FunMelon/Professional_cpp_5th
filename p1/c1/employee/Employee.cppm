export module employee;
#include <string.h>
namespace Records {
  const int DefaultStartingSalary {30'000};
  export const int DefaultRaiseANdDemeritAmount {1'000};
}

export class Employee {
  public:
    Employee(const std::string& firstName,
        const std::string& lastName);
    void promote(int raiseAmount = DefaultRaiseANdDemeritAmount);
    void demote(int demeritAmount = DefaultRaiseANdDemeritAmount);
    void hire();
    void fire();
    void display() const;

    void setFirstName(const std::string& firstName);
    const std::string& getFirstName() const;

    void setLastName(const std::string& lastName);
    const std::string& getLastName() const;

    void setEmployeeNumber(int employeeNumber);
    int getEmployeeNumber() const;

    void setSalary(int newSalary);
    int getSalary() const;

    bool isHired() const;

private:
    std::string m_firstName;
    std::string m_lastName;
    int m_employeeNumber {-1};
    int m_salary {Records::DefaultStartingSalary};
    bool m_hired {false};
}
