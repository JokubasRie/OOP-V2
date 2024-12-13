
#include <iostream>
#include <gtest/gtest.h>
#include "functions.h"
#include "Mylib.h"
#include "student.h"
TEST(RandomGradesTest, GeneratesInRange) {
    for (int i = 0; i < 100; ++i) {
        int grade = atsitiktiniaiBalai(0, 10);
        EXPECT_GE(grade, 0);  // Tikriname, ar >= 0
        EXPECT_LE(grade, 10); // Tikriname, ar <= 10
    }
}

// Testuoja, ar galima teisingai apskaičiuoti studento vidurkį
TEST(StudentTest, CalculatesAverageCorrectly) {
    Student student("Test", "Student");
    std::list<int> grades = {8, 9, 10};
    student.setNd(grades);
    student.setEgz(9);
    student.skaiciuotiGalutiniVid();
    EXPECT_NEAR(student.getGalutinisVid(), 9.0, 0.1);  // Vidurkis turėtų būti ~9.0
}

// Testuoja rūšiavimo funkciją (priklausomai nuo jūsų implementacijos)
TEST(SortingTest, SortsByName) {
    Student s1("Jonas", "Jonaitis"), s2("Petras", "Petraitis");
    std::list<Student> students = {s2, s1};
    students.sort(compareByName);
    EXPECT_EQ(students.front().getVardas(), "Jonas"); // Jonas turėtų būti pirmas
}
