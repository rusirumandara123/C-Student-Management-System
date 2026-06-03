# 📚 Student Management System (C++)

A simple command-line Student Management System built using C++. This project allows users to add, view, and search student records stored in a text file.

## 🚀 Features

- Add new students
- View all student records
- Search student by ID
- File-based data storage
- Simple command-line interface

## 🛠️ Technologies Used

- C++
- File Handling (fstream)
- Functions
- Conditional Statements
- Loops

## 📂 Project Structure

```
StudentManagementSystem/
│
├── main.cpp
├── students.txt
└── README.md
```

## ⚙️ How to Compile and Run

### Using GCC

```bash
g++ main.cpp -o student
./student
```

### Using Windows (MinGW)

```bash
g++ main.cpp -o student.exe
student.exe
```

## 📋 Menu

```text
===== Student System =====
1. Add Student
2. View Students
3. Search Student
0. Exit
```

## 💾 Data Storage

Student records are stored in:

```text
students.txt
```

Example:

```text
101 Kamal 20
102 Nimal 22
103 Sunil 19
```

## 🔍 Example Usage

### Add Student

```text
Enter ID: 101
Enter Name: Kamal
Enter Age: 20

Student added successfully!
```

### Search Student

```text
Enter ID to search: 101

Found Student ->
ID: 101 | Name: Kamal | Age: 20
```

## 🎯 Learning Objectives

This project helps beginners understand:

- C++ Functions
- File Handling
- User Input
- Searching Algorithms
- Basic Project Structure
- GitHub Project Management

## 🔮 Future Improvements

- Update Student Records
- Delete Student Records
- Student Marks Management
- Login System
- Object-Oriented Programming (OOP)
- CSV Database Support
- GUI Version

## 👨‍💻 Author

Created by Rusiru Mandara

## 📜 License

This project is open-source and available under the MIT License.
