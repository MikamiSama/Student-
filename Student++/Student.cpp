#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

int Student::instanceCount = 0;

Student::Student() : fullName(nullptr), birthDate(nullptr), phone(nullptr),
city(nullptr), country(nullptr), university(nullptr),
universityCity(nullptr), universityCountry(nullptr),
group(nullptr) {
    instanceCount++;
}

Student::Student(const char* name, const char* date, const char* phoneNum,
    const char* cityName, const char* countryName,
    const char* uni, const char* uniCity, const char* uniCountry,
    const char* groupName) : fullName(nullptr) {
    instanceCount++;

    setFullName(name);
    setBirthDate(date);
    setPhone(phoneNum);
    setCity(cityName);
    setCountry(countryName);
    setUniversity(uni);
    setUniversityCity(uniCity);
    setUniversityCountry(uniCountry);
    setGroup(groupName);
}

Student::Student(Student&& other) {
    fullName = other.fullName;
    birthDate = other.birthDate;
    phone = other.phone;
    city = other.city;
    country = other.country;
    university = other.university;
    universityCity = other.universityCity;
    universityCountry = other.universityCountry;
    group = other.group;

    other.fullName = nullptr;
    other.birthDate = nullptr;
    other.phone = nullptr;
    other.city = nullptr;
    other.country = nullptr;
    other.university = nullptr;
    other.universityCity = nullptr;
    other.universityCountry = nullptr;
    other.group = nullptr;

    instanceCount++;
}

Student::~Student() {
    delete[] fullName;
    delete[] birthDate;
    delete[] phone;
    delete[] city;
    delete[] country;
    delete[] university;
    delete[] universityCity;
    delete[] universityCountry;
    delete[] group;
    instanceCount--;
}

void Student::setFullName(const char* name) {
    delete[] fullName;
    if (!name) {
        fullName = new char[1];
        fullName[0] = '\0';
        return;
    }
    fullName = new char[strlen(name) + 1];
    strcpy(fullName, name);
}

void Student::setBirthDate(const char* date) {
    delete[] birthDate;
    if (!date) {
        birthDate = new char[1];
        birthDate[0] = '\0';
        return;
    }
    birthDate = new char[strlen(date) + 1];
    strcpy(birthDate, date);
}

void Student::setPhone(const char* phoneNum) {
    delete[] phone;
    if (!phoneNum) {
        phone = new char[1];
        phone[0] = '\0';
        return;
    }
    phone = new char[strlen(phoneNum) + 1];
    strcpy(phone, phoneNum);
}

void Student::setCity(const char* cityName) {
    delete[] city;
    if (!cityName) {
        city = new char[1];
        city[0] = '\0';
        return;
    }
    city = new char[strlen(cityName) + 1];
    strcpy(city, cityName);
}

void Student::setCountry(const char* countryName) {
    delete[] country;
    if (!countryName) {
        country = new char[1];
        country[0] = '\0';
        return;
    }
    country = new char[strlen(countryName) + 1];
    strcpy(country, countryName);
}

void Student::setUniversity(const char* uni) {
    delete[] university;
    if (!uni) {
        university = new char[1];
        university[0] = '\0';
        return;
    }
    university = new char[strlen(uni) + 1];
    strcpy(university, uni);
}

void Student::setUniversityCity(const char* uniCity) {
    delete[] universityCity;
    if (!uniCity) {
        universityCity = new char[1];
        universityCity[0] = '\0';
        return;
    }
    universityCity = new char[strlen(uniCity) + 1];
    strcpy(universityCity, uniCity);
}

void Student::setUniversityCountry(const char* uniCountry) {
    delete[] universityCountry;
    if (!uniCountry) {
        universityCountry = new char[1];
        universityCountry[0] = '\0';
        return;
    }
    universityCountry = new char[strlen(uniCountry) + 1];
    strcpy(universityCountry, uniCountry);
}

void Student::setGroup(const char* groupName) {
    delete[] group;
    if (!groupName) {
        group = new char[1];
        group[0] = '\0';
        return;
    }
    group = new char[strlen(groupName) + 1];
    strcpy(group, groupName);
}

const char* Student::getGroup() const {
    return group ? group : "";
}

const char* Student::getFullName() const {
    return fullName ? fullName : "";
}

int Student::getInstanceCount() {
    return instanceCount;
}

void Student::print() const {
    cout << "\n--- Student Info ---\n";
    cout << "Full Name: " << getFullName() << "\n";
    cout << "Birth Date: " << (birthDate ? birthDate : "") << "\n";
    cout << "Phone: " << (phone ? phone : "") << "\n";
    cout << "City: " << (city ? city : "") << "\n";
    cout << "Country: " << (country ? country : "") << "\n";
    cout << "University: " << (university ? university : "") << "\n";
    cout << "University City: " << (universityCity ? universityCity : "") << "\n";
    cout << "University Country: " << (universityCountry ? universityCountry : "") << "\n";
    cout << "Group: " << getGroup() << "\n";
}