# 📚 Student Management System (C++)

A console-based Student Management System developed using C++. This project demonstrates file handling, user authentication, CRUD operations, and menu-driven programming concepts.

---

## 🚀 Features

### 🔐 User Authentication
- User Registration
- User Login
- Duplicate Username Validation
- Login Required to Access Student Management System

### 👨‍🎓 Student Management
- Add Student
- View All Students
- Search Student by ID
- Update Student Information
- Delete Student
- Total Student Count
- Duplicate Student ID Validation

---

## 🛠 Technologies Used

- C++
- File Handling (`fstream`)
- Structures (`struct`)
- Functions
- Loops
- Conditional Statements
- Temporary File Handling
- Menu-Driven Programming

---

## 📂 Project Structure

```
Student-Management-System/
│
├── main.cpp
├── student.txt
├── user.txt
├── temp.txt (created automatically)
└── README.md
```

---

## 🔑 Login System

Before accessing the Student Management Menu, users must log in.

### Registration
```
Create Username
Create Password
```

✔ Duplicate usernames are not allowed.

### Login
```
Username
Password
```

Only registered users can access the system.

---

## 📋 Main Menu

```
1. Register User
2. Login User
0. Exit
```

After successful login:

```
1. Add Student
2. View Student
3. Search Student
4. Delete Student
5. Update Student
6. Total Students
0. Exit
```

---

## 💾 Data Storage

### user.txt

Stores registered users.

Example

```
admin 1234
kamal 1111
nimal 2222
```

---

### student.txt

Stores student information.

Example

```
101 Kamal 20
102 Nimal 22
103 Sunil 19
```

---

## ⚙️ How to Compile

### Windows (MinGW)

```bash
g++ main.cpp -o StudentManagement.exe
StudentManagement.exe
```

### Linux

```bash
g++ main.cpp -o student
./student
```

---

## 📌 Concepts Covered

- C++ Functions
- Structures
- File Handling
- Authentication System
- CRUD Operations
- Searching Algorithms
- Duplicate Validation
- Temporary File Technique
- Menu Driven Programs

---

## 🔄 CRUD Operations

✔ Create Student

✔ Read Student

✔ Update Student

✔ Delete Student

---

## 🎯 Future Improvements

- Password Encryption
- Password Hidden Input
- Multiple Word Student Names
- Sort Students by ID
- Sort Students by Name
- Student Marks Management
- GPA Calculator
- SQLite Database
- Object-Oriented Version
- GUI Version (Qt)
- HTML/CSS Frontend
- Admin Dashboard

---

## 📸 Sample Program Flow

```
Start
   │
   ▼
Register User
   │
   ▼
Login User
   │
   ▼
Student Management Menu
   │
   ├── Add Student
   ├── View Student
   ├── Search Student
   ├── Update Student
   ├── Delete Student
   └── Total Students
```

---

## 👨‍💻 Author

**Rusiru Mandara**

- C++ Developer (Beginner to Intermediate)
- Cybersecurity Enthusiast
- Passionate about Building Console Applications

---

## ⭐ Learning Outcomes

This project helped practice:

- Authentication Systems
- File Handling
- Student Record Management
- Searching & Validation
- Temporary File Processing
- C++ Programming Fundamentals

---

## 📜 License

This project is licensed under the MIT License.

Feel free to use, modify, and improve this project for educational purposes.
