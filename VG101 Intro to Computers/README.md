# VG101 Intro to Computer

## Information

Instructor: Manuel Charlemagne

Semester: 2018 Fall

## Prerequisite

You need to install the following software:

- **Matlab**
- **MinGW**: C compiler (gcc), C++ compiler (g++)
- **FreeGlut** for C++

A C/C++ IDE is recommendeded like CLion, Codeblocks, Sublime, Vim, VS Code, Xblocks **with compiler gcc/g++**. I strongly recommend you not to use VC6++.

## Description

VG101 is required to be selected in Grade 1, Fall semester or Summer semester.

This course mainly cover three programming language: Matlab, C, C++. The learning schedule is very fast and the projects is extremely nasty, so this course is quite challenging. Although it is very difficult, it mainly gives you a taste about programming. Moreover, some courses later will use Matlab to plot figures, so basic operations for Matlab should be commanded.

There are some taboos when taking this course (some important are listed below), more information can be seen in **Instruction.pdf**

- No global variables.
  - If you want to become an advanced programmer, keep away global variables is a must.
- No `goto` instruction.
  - The `goto` instruction is inherited from the compiler without sub-functions in the last century. Don’t live in the last century and try to arrange your code tidily and efficiently.
- No `friend` keyword.
  - If you know `friend`, you should have the way to avoid it; or you don’t need to know what is `friend`.
- No `system()` function.
  - Function `system()` is a function only for Windows. Moreover, all codes which cannot be run in all Windows, Linux, Mac OS are forbidden, a good way to avoid is writing and compiling codes directly on Linux.
- No `fflush(stdin)` function.
  - The same reason as above; however, we need to know how to replace it since we need to find a substitution for it (You will know when to use after writing the corresponding codes). Its substitution is `setbuf(stdin, NULL)`.
- …

## Tips

- Learn faster than Manuel if you don’t know anything about programming. Some techniques need to be used in the project may be delivered very late. “Linked list” in C project is a very good example. (You at least need to learn linked list very early to solve the second project.)
- Start the projects early or you will be burdened. The projects provided by Manuel is extremely tricky.
- Manuel’s exam is very stiff, with lots of problems to be solved. Don’t be frustrated if you review for a long time and get a score with on digital.
- Read the project description carefully, because there will be four questions related to the project in the exam. If you do not very well, your project will receive (huge) deduction.
- When it comes to installing software in China, pirate version is better than the legal one.

 
