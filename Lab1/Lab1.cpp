#include <iostream>
#include <string>

using namespace std;

unsigned short myHeight;

unsigned short ReadPersonAge() {
    unsigned short age;
    cout << "Your age: ";
    cin >> age;
    return age;
}

string ReadPersonName() {
    string name;
    cout << "Your name: ";
    cin >> name;
    return name;
}

void ReadPersonHeight() {
    cout << "Your height: ";
    cin >> myHeight;
}

void ReadPersonWeight(unsigned short& weight) {
    cout << "Your weight: ";
    cin >> weight;
}

void ReadPersonSalary(double* salary) {
    cout << "Your salary: ";
    cin >> *salary;
}

void ReadPersonData(string& name, unsigned short& age, string& salary) {
    cout << "Hello!" << endl << "Please, enter your personal data below" << endl << endl;
    name = ReadPersonName();
    age = ReadPersonAge();
    double dSalary;
    ReadPersonSalary(&dSalary);
    salary = to_string(dSalary);
}

void ReadPersonData(string& name, unsigned short& age, string& height, string& weight) {
    cout << "Please, enter your personal data below" << endl << endl;
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonHeight();
    height = to_string(myHeight);
    unsigned short personWeight;
    ReadPersonWeight(personWeight);
    weight = to_string(personWeight);
}

void WritePersonData(unsigned short age, string name, const string& height = "", 
    const string& weight = "", const string& salary = "") {
    cout << endl << "Your profile: " << endl << name << endl << age << endl << height << endl << weight << endl << salary << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    string name, height, weight, salary;
    unsigned short age;
    ReadPersonData(name, age, salary);
    WritePersonData(age, name, salary);
    ReadPersonData(name, age, height, weight);
    WritePersonData(age, name, height, weight);
    return 0;
}
