# 0x1C Makefiles

This directory contains a collection of Makefiles for learning and practicing Makefile creation in C programming. Each Makefile has specific requirements and demonstrates different levels of complexity. Below are descriptions of each Makefile:

## 0-Makefile

- **Mandatory**
- Create your first Makefile.
- **Requirements:**
  - Name of the executable: school
  - Rules: all (The all rule builds your executable)
  - Variables: none

## 1-Makefile

- **Mandatory**
- **Requirements:**
  - Name of the executable: school
  - Rules: all (The all rule builds your executable)
  - Variables:
    - CC: the compiler to be used
    - SRC: the .c files

## 2-Makefile

- **Mandatory**
- Create your first useful Makefile.
- **Requirements:**
  - Name of the executable: school
  - Rules: all (The all rule builds your executable)
  - Variables:
    - CC: the compiler to be used
    - SRC: the .c files
    - OBJ: the .o files
    - NAME: the name of the executable
  - The all rule should recompile only the updated source files
  - You are not allowed to have a list of all the .o files

## 3-Makefile

- **Mandatory**
- **Requirements:**
  - Name of the executable: school
  - Rules: all, clean, oclean, fclean, re
  - Variables:
    - CC: the compiler to be used
    - SRC: the .c files
    - OBJ: the .o files
    - NAME: the name of the executable
    - RM: the program to delete files
  - The all rule should recompile only the updated source files
  - The clean, oclean, fclean, re rules should never fail
  - You are not allowed to have a list of all the .o files

## 4-Makefile

- **Mandatory**
- **Requirements:**
  - Name of the executable: school
  - Rules: all, clean, fclean, oclean, re
  - Variables:
    - CC: the compiler to be used
    - SRC: the .c files
    - OBJ: the .o files
    - NAME: the name of the executable
    - RM: the program to delete files
    - CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
  - The all rule should recompile only the updated source files
  - The clean, oclean, fclean, re rules should never fail
  - You are not allowed to have a list of all the .o files

## 5-Island Perimeter

- **Mandatory**
- **Technical interview preparation:**
  - You are not allowed to google anything
  - Whiteboard first
- Create a function `def island_perimeter(grid):` that returns the perimeter of the island described in grid.

**Requirements:**
- First line contains `#!/usr/bin/python3`
- You are not allowed to import any module
- Module and function must be documented

