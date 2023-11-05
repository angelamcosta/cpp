## 📚 C++ Modules

<div align=center>

  ![badge](https://raw.githubusercontent.com/angelamcosta/angelamcosta/main/42_badges/cppn.png)

</div>

### 📋 Description
This repository contains a collection of C++ exercises aimed at improving your understanding and skills in C++ programming. The exercises cover various topics, including namespaces, classes, member functions, stdio streams, initialization lists, static, const, and other basic concepts.

### 🔨 General Rules
- **Compiling:** Compile your code with c++ and the flags `-Wall -Wextra -Werror`. Your code should still compile if you add the flag `-std=c++98`.
- **Formatting and Naming Conventions:**
  - Exercise directories will be named this way: `ex00`, `ex01`, ..., `exn`.
  - Name your files, classes, functions, member functions, and attributes as required in the guidelines.
  - Write class names in UpperCamelCase format. Files containing class code will always be named according to the class name.
- **Allowed/Forbidden:**
  - You are allowed to use almost everything from the standard library. Use the C++-ish versions of C functions whenever possible.
  - External libraries such as C++11, Boost libraries, and the following functions are forbidden: `*printf()`, `*alloc()`, and `free()`.

### 💡 Design Requirements
- **Memory Management:** Avoid memory leaks by properly managing memory allocation (using the `new` keyword) and deallocation.
- **Orthodox Canonical Form:** From Module 02 to Module 09, your classes must be designed in the Orthodox Canonical Form, except when explicitly stated otherwise.
- **Header Files:** Avoid function implementations in header files (except for function templates).
- **Independent Headers:** Each header should be usable independently, including all necessary dependencies. Avoid problems with double inclusion by adding include guards.
