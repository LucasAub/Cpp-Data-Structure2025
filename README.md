# Student Management System

This is a simple C++ console application that manages a collection of students. It allows you to:

- **Add a student**: Enter a student's details (name, year of enrollment, and GPA) to add them to the system.
- **Retrieve students**: Display all students currently stored.
- **Update a student**: Modify the details of a specific student by their name.
- **Remove a student**: Delete a student's record by their name.
- **Sort students**: Sort the list of students based on their year of enrollment.
- **Binary search**: Quickly find a student by their name for update or removal.

## Features
1. **Data Structure**: Uses a `std::vector` to store and manage student data.
2. **Binary Search**: Implements binary search for efficient lookups.
3. **Merge Sort**: Implements merge sort to sort students by year of enrollment.
4. **Console Menu**: User-friendly menu for easy interaction.

## Requirements
- **Compiler**: A C++ compiler that supports C++11 or later (e.g., GCC, Clang, MSVC).
- **Operating System**: Windows, macOS, or Linux.

## How to Build and Run
1. Clone the repository:
   ```bash
   git clone https://github.com/LucasAub/Cpp-Data-Structure2025.git
   cd src
    ```
2. Compile the code:
    ```bash
    g++ -o student_management main.cpp
    ```
3. Run the executable:
    ```bash
    ./student_management
    ```

## Example Usage

Upon running the program, you’ll see a menu like this:
```bash
1. Add Student
2. Display All Students
3. Update Student
4. Remove Student
5. Sort Students by Year of Enrollment
6. Exit
Enter your choice:
```
You can navigate through the menu to perform actions on the student data.

## Limitations

- Binary search assumes the list is sorted by name. Sorting is not automatic after every operation.
- No input validation for some fields (e.g., invalid GPA or year may cause unexpected behavior).


