#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_10.1B/Lab_10.1B.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(StudentTests)
    {
    public:


        TEST_METHOD(TestCountHighAverageGrade)
        {

            Student students[] = {
                {"Ivanov", 1, KOMPYUTERNI_NAUKY, 5, 5, 5},
                {"Petrov", 2, INFORMATYKA, 4, 4, 5},
                {"Sidorov", 3, MATEMATYKA_TA_EKONOMIKA, 4, 5, 4},
                {"Kovalenko", 4, FIZYKA_TA_INFORMATYKA, 5, 5, 5},
                {"Tymoshenko", 1, TRUDOVE_NAVCHANNYA, 2, 3, 5}
            };


            int result = CountHighAverageGrade(students, 5);
            int expected = 2;


            Assert::AreEqual(expected, result);
        }

    };
}