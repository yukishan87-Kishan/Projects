# 🔐 C++ Login System using File Handling

A simple console-based Login System built in C++ that demonstrates file handling, string manipulation, and object-oriented programming (OOP) concepts. User data is stored persistently using a text file.

## 📌 Table of Contents

- [Features](#features)
- [Technologies Used](#technologies-used)
- [Project Structure](#project-structure)
- [Data Storage Format](#data-storage-format)
- [How to Run](#how-to-run)
- [Functionalities](#functionalities)
- [Limitations](#limitations)
- [Future Improvements](#future-improvements)
- [Author](#author)

## ✨ Features

- ✅ User Sign-up
- 🔑 User Login authentication
- 🔓 Forgot password recovery using email verification
- 💾 Persistent data storage using files
- 📄 Simple and readable file format
- 🧠 Beginner-friendly logic and structure

## 🛠️ Technologies Used

**Language:** C++

**Concepts:**
- File Handling (fstream)
- Object-Oriented Programming
- Strings and Input Handling
- Conditional Statements
- Loops

## 📂 Project Structure

```
Login-System-Cpp/
├── main.cpp
├── loginData.txt
└── README.md
```

## 📄 Data Storage Format

User credentials are stored in a text file (`loginData.txt`) in the following format:

```
username*email*password
```

**Example:**
```
john123*john@gmail.com*pass@123
```

## ▶️ How to Run

### Clone the repository:
```bash
git clone https://github.com/your-username/Login-System-Cpp.git
```

### Compile the program:
```bash
g++ main.cpp -o login
```

### Run the executable:
```bash
./login
```

**Note:** On Windows, use `login.exe`

## 🧪 Functionalities

### 1️⃣ Sign-up
- Accepts username, email, and password
- Stores data in loginData.txt

### 2️⃣ Login
- Verifies username and password
- Displays user details on successful login

### 3️⃣ Forgot Password
- Verifies username and email
- Retrieves and displays the stored password

## ⚠️ Limitations

- Passwords are stored in plain text
- No encryption or hashing
- No input validation for duplicates
- These can be improved in future versions

## 🚀 Future Improvements

- 🔐 Password encryption / hashing
- 🧾 Duplicate account check
- 🔄 Loop-based menu system
- 🗂️ Better file structure (CSV / database)
- 🖥️ GUI version (Qt / C++ GUI)

## 👨‍💻 Author

**Kishan Y. U**  
Student | C++ | Data Structures | Python