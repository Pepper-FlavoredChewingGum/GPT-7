#include <iostream>
#include <vector>

struct TestCase {
    int input;
    int expectedOutput; 
};

class TestFramework {
public:

    void registerTestCase(const TestCase& testCase) {
        testCases.push_back(testCase);
    }

 
    void run() {
        for (const auto& testCase : testCases) {
            runTestCase(testCase);
        }
    }

private:

    void runTestCase(const TestCase& testCase) {
       
        int input = testCase.input;

   
        int  result = testCase.input * 2;

        int expectedOutput = testCase.expectedOutput;

        if (result == expectedOutput) {
            std::cout << "Test case passed" << std::endl;
        } else {
            std::cout << "Test case failed" << std::endl;
        }
    }

private:
    std::vector<TestCase> testCases; 
};

int main() {
    TestFramework testFramework;

   
    TestCase testCase1;
    testCase1.input = 3;
    testCase1.expectedOutput = 6;
    testFramework.registerTestCase(testCase1);

    TestCase testCase2;
    testCase2.input = 5;
    testCase2.expectedOutput = 10;
    testFramework.registerTestCase(testCase2);

    testFramework.run();

    return 0;
}