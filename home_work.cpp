#include <iostream>
using namespace std;

// Function declarations
void readMarks(int marks[], int n);
int findTotal(int marks[], int n);
double findAverage(int marks[], int n);
int findHighest(int marks[], int n);
int findLowest(int marks[], int n);
int countPassed(int marks[], int n);
void printReport(int marks[], int n);

int main()
{
    char choice;

    do
    {
        int n;

        // Validate number of students
        do
        {
            cout << "Enter number of students (1-100): ";
            cin >> n;

            if (n < 1 || n > 100)
            {
                cout << "Invalid number! Try again.\n";
            }

        } while (n < 1 || n > 100);

        // Simple array
        int marks[100];

        readMarks(marks, n);
        printReport(marks, n);

        cout << "\nDo you want to run again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program ended.\n";

    return 0;
}

// Read Marks
void readMarks(int marks[], int n)
{
    for (int i = 0; i < n; i++)
    {
        do
        {
            cout << "Enter mark for student "
                 << i + 1 << ": ";

            cin >> marks[i];

            if (marks[i] < 0 || marks[i] > 100)
            {
                cout << "Invalid mark! Enter between 0 and 100.\n";
            }

        } while (marks[i] < 0 || marks[i] > 100);
    }
}

// Find Total
int findTotal(int marks[], int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total += marks[i];
    }

    return total;
}

// Find Average
double findAverage(int marks[], int n)
{
    int total = findTotal(marks, n);

    return (double)total / n;
}

// Find Highest
int findHighest(int marks[], int n)
{
    int highest = marks[0];

    for (int i = 1; i < n; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }
    }

    return highest;
}

// Find Lowest
int findLowest(int marks[], int n)
{
    int lowest = marks[0];

    for (int i = 1; i < n; i++)
    {
        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }

    return lowest;
}

// Count Passed Students
int countPassed(int marks[], int n)
{
    int passed = 0;

    for (int i = 0; i < n; i++)
    {
        if (marks[i] >= 40)
        {
            passed++;
        }
    }

    return passed;
}

// Print Report
void printReport(int marks[], int n)
{
    int total = findTotal(marks, n);
    double average = findAverage(marks, n);
    int highest = findHighest(marks, n);
    int lowest = findLowest(marks, n);
    int passed = countPassed(marks, n);
    int failed = n - passed;

    cout << "\n===== STUDENT REPORT =====\n";
    cout << "Total Students : " << n << endl;
    cout << "Total Marks    : " << total << endl;
    cout << "Average        : " << average << endl;
    cout << "Highest Mark   : " << highest << endl;
    cout << "Lowest Mark    : " << lowest << endl;
    cout << "Passed         : " << passed << endl;
    cout << "Failed         : " << failed << endl;
}