# ft_printf

## 📌 Description
`ft_printf` is a custom implementation of the standard C `printf` function. This project aims to recreate the functionality of `printf` while adhering to strict coding standards and memory management requirements.

## Features
- Implements the following conversions:
  - `%c` : Prints a single character.
  - `%s` : Prints a string.
  - `%p` : Prints a pointer address in hexadecimal format.
  - `%d` : Prints a decimal number (base 10).
  - `%i` : Prints an integer (base 10).
  - `%u` : Prints an unsigned decimal number (base 10).
  - `%x` : Prints a hexadecimal number (lowercase).
  - `%X` : Prints a hexadecimal number (uppercase).
  - `%%` : Prints a percentage sign.
- Uses `malloc`, `free`, `write`, and variadic functions (`va_start`, `va_arg`, `va_copy`, `va_end`).
- Complies with the 42 coding standard and ensures no memory leaks.
- Does not use the original `printf` buffer management.

## 🚀  Usage
1. Clone this repository and compile the library:
```bash
  $ git clone https://github.com/yourusername/ft_printf.git
```
2. Navigate to the project directory:
```bash
  $ cd ft_printf
```
3. Compile the library:
```bash
$ make
```
```bash
$ gcc main.c libftprintf.a -o my_program
```
```
./my_program
```
