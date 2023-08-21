# 0x18-dynamic_libraries Repository

This repository contains a dynamic library named `libdynamic.so` that provides various utility functions. Dynamic libraries are essential components in programming that allow code to be reused across different programs, enhancing modularity and efficiency.

## Motivation

"A library is not a luxury but one of the necessities of life." - This famous quote emphasizes the importance of libraries in software development. Libraries encapsulate functions and code snippets, enabling developers to build upon existing work, leading to efficient and well-structured programs.

## Library Functions

The dynamic library `libdynamic.so` includes the following functions:

- `int _putchar(char c);`
- `int _islower(int c);`
- `int _isalpha(int c);`
- `int _abs(int n);`
- `int _isupper(int c);`
- `int _isdigit(int c);`
- `int _strlen(char *s);`
- `void _puts(char *s);`
- `char *_strcpy(char *dest, char *src);`
- `int _atoi(char *s);`
- `char *_strcat(char *dest, char *src);`
- `char *_strncat(char *dest, char *src, int n);`
- `char *_strncpy(char *dest, char *src, int n);`
- `int _strcmp(char *s1, char *s2);`
- `char *_memset(char *s, char b, unsigned int n);`
- `char *_memcpy(char *dest, char *src, unsigned int n);`
- `char *_strchr(char *s, char c);`
- `unsigned int _strspn(char *s, char *accept);`
- `char *_strpbrk(char *s, char *accept);`
- `char *_strstr(char *haystack, char *needle);`

## Building the Library

To create the dynamic library `libdynamic.so` containing the functions listed above, follow these steps:

1. Compile the source files: Run the provided script `create_lib.sh` in the repository, which compiles all the `.c` files in the current directory into a dynamic library.

```bash
./create_lib.sh
```

2. The script will generate the `liball.so` dynamic library file.

## Conclusion

"Without libraries what have we? We have no past and no future." - This quote emphasizes the pivotal role of libraries in preserving and building upon the knowledge and achievements of the past while paving the way for a brighter future in software development.

By utilizing dynamic libraries like `libdynamic.so`, developers can harness the power of reusable code, promote efficient development practices, and contribute to the evolution of software engineering.

Feel free to explore the functions provided by `libdynamic.so` and integrate them into your own projects to enhance their functionality and maintainability.
