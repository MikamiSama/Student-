#define _CRT_SECURE_NO_WARNINGS
#ifndef STUDENT_H
#define STUDENT_H

class Student {
private:
    static int instanceCount;
    char* fullName;
    char* birthDate;
    char* phone;
    char* city;
    char* country;
    char* university;
    char* universityCity;
    char* universityCountry;
    char* group;

public:
    Student();
    Student(const char* name, const char* date, const char* phoneNum,
        const char* cityName, const char* countryName,
        const char* uni, const char* uniCity, const char* uniCountry,
        const char* groupName);
    Student(Student&& other);
    ~Student();

    const char* getGroup() const;
    const char* getFullName() const;
    static int getInstanceCount();
    void setFullName(const char* name);
    void setBirthDate(const char* date);
    void setPhone(const char* phoneNum);
    void setCity(const char* cityName);
    void setCountry(const char* countryName);
    void setUniversity(const char* uni);
    void setUniversityCity(const char* uniCity);
    void setUniversityCountry(const char* uniCountry);
    void setGroup(const char* groupName);
    void print() const;
};

#endif