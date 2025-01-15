# Student Management System

This is a C++ project that implements a **Student Management System**. It allows users to manage student records using a combination of a Binary Search Tree (BST) for efficient retrieval and a `std::vector` to store full student data.

## Features
- Add new students.
- Display all students.
- Remove a student by year of enrollment.
- Retrieve and display details of a student by year of enrollment.

## Files and Structure
The project is split into the following files for better readability and modularity:

### Source Files
1. **`main.cpp`**:
   - Manages the main menu and program flow.
   - Calls the necessary functions to interact with the BST and the student records.

2. **`Student.h`**:
   - Defines the `Student` structure containing:
     - `name`: The name of the student.
     - `year_of_enrollment`: The year the student enrolled.
     - `GPA`: The student's Grade Point Average.

3. **`BST.h` & `BST.cpp`**:
   - Implements a Binary Search Tree for managing the `year_of_enrollment`.
   - Allows insertion, retrieval, and removal of nodes based on the year of enrollment.

4. **`StudentFunctions.h` & `StudentFunctions.cpp`**:
   - Implements functions to:
     - Add a new student.
     - Display all students.
     - Remove a student by year.
     - Retrieve details of a specific student by year.

## Compilation Instructions
To compile and run the program, ensure all files are in the same directory and execute the following command in your terminal:

```bash
clang++ -std=c++17 -o StudentManagement main.cpp BST.cpp StudentFunctions.cpp
```

Alternatively, if you are using GCC:

```bash
g++ -std=c++17 -o StudentManagement main.cpp BST.cpp StudentFunctions.cpp
```

## How to Run
1. After compiling, run the program with the following command:
   ```bash
   ./StudentManagement
   ```

2. Follow the on-screen menu to:
   - Add students.
   - Display the list of students.
   - Remove a student.
   - Retrieve a specific student's details by year of enrollment.

## Example Interaction
### Menu:
```
--- Student Management System ---
1. Add Student
2. Display Students
3. Remove Student
4. Retrieve Student
5. Exit
Enter your choice:
```

### Sample Input and Output:
#### Adding Students:
```
Enter name: John Doe
Enter year of enrollment: 2020
Enter GPA: 3.5
Student added successfully.
```

#### Displaying Students:
```
Name: John Doe, Year: 2020, GPA: 3.5
```

#### Removing Students:
```
Enter the year of the student to remove: 2020
Student removed successfully.
```

#### Retrieving a Student:
```
Enter the year of enrollment to retrieve: 2020
Name: John Doe, Year: 2020, GPA: 3.5
```

## Requirements
- C++17 or later.
- A C++ compiler like GCC or Clang.

## Notes
- The Binary Search Tree is used to manage the `year_of_enrollment` for efficient retrieval and updates.
- The `std::vector` stores the full student details, ensuring all data is preserved and accessible.

## Future Improvements
- Add error handling for invalid inputs.
- Support for updating student details.
- Enhance the display function to allow sorting by different fields.

---

Developed for educational purposes to demonstrate the integration of data structures in C++.

