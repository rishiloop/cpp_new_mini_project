# Student Marks Report System

A simple C++ program that manages student marks and generates a summary report using arrays and functions.

## Features

- Accepts marks for multiple students.
- Validates user input:
  - Number of students must be between 1 and 100.
  - Marks must be between 0 and 100.
- Calculates:
  - Total marks
  - Average marks
  - Highest mark
  - Lowest mark
  - Number of passed students
  - Number of failed students
- Allows the user to run the program multiple times.

---

## Program Structure

### Functions Used

| Function | Purpose |
|-----------|---------|
| `readMarks()` | Reads and validates student marks |
| `findTotal()` | Calculates total marks |
| `findAverage()` | Calculates average marks |
| `findHighest()` | Finds highest mark |
| `findLowest()` | Finds lowest mark |
| `countPassed()` | Counts students with marks ≥ 40 |
| `printReport()` | Displays the complete report |

---

## Pass Criteria

A student is considered **Passed** if:

```cpp
mark >= 40
```

Otherwise, the student is considered **Failed**.

---

## Sample Output

```text
Enter number of students (1-100): 5

Enter mark for student 1: 80
Enter mark for student 2: 65
Enter mark for student 3: 40
Enter mark for student 4: 25
Enter mark for student 5: 90

===== STUDENT REPORT =====
Total Students : 5
Total Marks    : 300
Average        : 60
Highest Mark   : 90
Lowest Mark    : 25
Passed         : 4
Failed         : 1

Do you want to run again? (y/n): n

Program ended.
```

---

## Input Validation

### Number of Students

Valid range:

```text
1 - 100
```

Example:

```text
Enter number of students (1-100): 120
Invalid number! Try again.
```

### Student Marks

Valid range:

```text
0 - 100
```

Example:

```text
Enter mark for student 1: -10
Invalid mark! Enter between 0 and 100.
```

---

## Concepts Used

- Arrays
- Functions
- Function Prototypes
- Loops (`for`, `do-while`)
- Conditional Statements (`if`)
- Input Validation
- Basic Statistics Calculations

---

## Compilation and Execution

### Compile

```bash
g++ student_report.cpp -o student_report
```

### Run

```bash
./student_report
```

---

## Algorithm

1. Read the number of students.
2. Validate the number of students.
3. Read marks for each student.
4. Validate each mark.
5. Calculate:
   - Total
   - Average
   - Highest mark
   - Lowest mark
   - Passed students
   - Failed students
6. Display the report.
7. Ask whether to run again.
8. Repeat if the user enters `Y` or `y`.

---

## Author

Student Marks Report System developed in **C++** using arrays and functions for basic student performance analysis.
