# Libft

A foundational C library that reimplements essential standard library functions and introduces custom utilities for handling memory, strings, and linked lists.

---

## 📌 Project Description

Libft is a personal implementation of the core functions found in the C standard library, developed as part of the **42 School** curriculum. The goal of this project is to deepen understanding of low-level programming concepts, memory management, and to build a reusable set of utilities that can be used in future C projects.

This library includes:
- Common string, memory, and character manipulation functions
- Linked list handling tools
- A strong foundation for future C development

### ✨ Technologies Used

- **C language** – Low-level system programming
- **Make** – For build automation via a `Makefile`

### 💡 Challenges Faced

- Managing memory safely and efficiently
- Understanding undefined behaviors in C standard functions
- Recreating complex functions like `ft_split`, `ft_lstmap`, and `ft_itoa` from scratch

### 🔮 Future Features

- Additional data structure implementations (e.g., stack, queue)
- Extended utility functions (e.g., custom printf)
- Performance benchmarking utilities

---

## 📖 Table of Contents

- [Project Description](#project-description)
- [How to Install and Run the Project](#how-to-install-and-run-the-project)
- [How to Use the Project](#how-to-use-the-project)
- [Library Structure & File Descriptions](#library-structure--file-descriptions)

---

## 🛠 How to Install and Run the Project

To compile and use the library, follow these steps:

```bash
# Clone the repository
git clone https://github.com/Thanagorn16/libft.git
cd libft

# Build the library
make
```
This will create a static library file named libft.a.

To clean up object files:
```
make clean
```
To remove all compiled files including libft.a:
```
make fclean
```
To rebuild from scratch
```
make re 
```
---

## 📁 Library Structure & File Descriptions

Each .c file implements one or more custom standard functions:

### 🔡 Character Check & Conversion
`ft_isalpha.c`, `ft_isdigit.c`, `ft_isalnum.c`, `ft_isascii.c`, `ft_isprint.c` – Character testing

`ft_toupper.c`, `ft_tolower.c` – Case conversion

### 🧠 Memory Management
`ft_memset.c`, `ft_memcpy.c`, `ft_memmove.c`, `ft_memchr.c`, `ft_memcmp.c`, `ft_bzero.c`, `ft_calloc.c`

### 🧵 String Handling
`ft_strlen.c`, `ft_strlcpy.c`, `ft_strlcat.c` – Safe string copy and concatenation

`ft_strchr.c`, `ft_strrchr.c`, `ft_strncmp.c`, `ft_strnstr.c`, `ft_strdup.c` – String search and compare

`ft_substr.c`, `ft_strjoin.c`, `ft_strtrim.c`, `ft_split.c` – String transformation

`ft_strmapi.c`, `ft_striteri.c` – Functional iteration over strings

### 🔢 Numbers
`ft_itoa.c` – Integer to string

`ft_atoi.c` – String to integer

### 🖨 Output Functions
`ft_putchar_fd.c`, `ft_putstr_fd.c`, `ft_putendl_fd.c`, `ft_putnbr_fd.c` – Write characters and numbers to file descriptors

### 🔗 Linked List Functions
`ft_lstnew.c`, `ft_lstadd_front.c`, `ft_lstadd_back.c`, `ft_lstdelone.c`, `ft_lstclear.c`

`ft_lstiter.c`, `ft_lstmap.c`, `ft_lstlast.c`, `ft_lstsize.c`

### 🧾 Others
`libft.h` – The main header file containing all function prototypes and required includes

`Makefile` – Automates compilation and cleaning tasks

---

# 📚 Function Overview Table

|Function|Description|
|---|-----------------|
|R1c1| 123123 | 


