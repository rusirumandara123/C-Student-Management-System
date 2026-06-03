# 📚 Student Management System (C++)

A simple command-line Student Management System built using C++. This project demonstrates fundamental programming concepts such as structures, functions, file handling, loops, and searching algorithms.

## 🚀 Features

✅ Add new student records

✅ View all student records

✅ Search students by ID

✅ Store data permanently using text files

✅ User-friendly command-line interface

---

# 🛠 Technologies Used

- C++
- Standard Template Library (STL)
- File Handling (`fstream`)
- Structures (`struct`)
- Functions
- Loops & Conditions

---

# 📂 Project Structure

```
Student-Management-System/
│
├── Student-Management-System.cpp
├── student.txt
└── README.md
```

---

# 📖 Program Modules

## 1. Student Structure

Stores student information.

```cpp
struct student{
    int id;
    string name;
    int age;
};
```

### Fields

| Field | Type | Description |
|---------|---------|---------|
| id | int | Student ID |
| name | string | Student Name |
| age | int | Student Age |

---

## 2. Save Student

Function:

```cpp
void savestudent(student st)
```

### Purpose

Saves student records into:

```text
student.txt
```

Example:

```text
101 Kamal 20
102 Nimal 22
103 Sunil 19
```

---

## 3. Add Student

Function:

```cpp
void addStudent()
```

### Purpose

Collects student details from the user and stores them in the file.

### Example

```text
Enter Student ID: 101
Enter Student Name: Kamal
Enter Student Age: 20

Student added successfully!
```

---

## 4. View Students

Function:

```cpp
void viewStudent()
```

### Purpose

Displays all student records stored in the file.

### Example Output

```text
--- Student List ---

ID: 101 | Name: Kamal | Age: 20
ID: 102 | Name: Nimal | Age: 22
```

---

## 5. Search Student

Function:

```cpp
void searchStudent()
```

### Purpose

Searches for a student using the Student ID.

### Example

Input:

```text
Enter student ID to search: 101
```

Output:

```text
Found Student -
ID: 101
Name: Kamal
Age: 20
```

If not found:

```text
Student not found!
```

---

# 📋 Program Menu

```text
Welcome to Student Management System

1. Add Student
2. View Student
3. Search Student
0. Exit
```

---

# ⚙️ Compilation

## Linux / MacOS

```bash
g++ Student-Management-System.cpp -o student
./student
```

## Windows (MinGW)

```bash
g++ Student-Management-System.cpp -o student.exe
student.exe
```

---

# 💾 File Storage

The application automatically creates:

```text
student.txt
```

All student records are stored permanently in this file.

---

# 🧠 Concepts Demonstrated

This project demonstrates:

- Structures
- Functions
- File Handling
- Search Algorithms
- Input / Output Operations
- Data Persistence
- Menu-Driven Programming

---

# 🔍 Sample Workflow

```text
1. Add Student
   ↓
Save to student.txt
   ↓
View Students
   ↓
Search Student by ID
```

---

# 🚀 Future Improvements

Planned features:

- Update Student Records
- Delete Student Records
- Duplicate ID Validation
- Multiple Word Names
- Sorting Students
- Student Marks Management
- Login System
- OOP Version using Classes
- CSV Database Support
- GUI Version (Qt)

---

# 🐛 Known Limitations

- Student names cannot contain spaces.
- Duplicate IDs are allowed.
- No delete functionality.
- No update functionality.
- No input validation.

---

# 📈 Learning Outcomes

After completing this project, beginners will understand:

- How to use structures
- How file handling works
- How search operations work
- How to build menu-driven applications
- How to organize a GitHub project

---

# 👨‍💻 Author

Rusiru Mandara

Student Developer | Learning C++ & Cybersecurity

---

# 📜 License

This project is released under the MIT License.

Feel free to use, modify, and distribute it for educational purposes.
