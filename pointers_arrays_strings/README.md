# pointers_arrays_strings
Project in C to learn basic syntax, memory navigation and how to control the flow of the code.

All projects comply to the [Betty](https://github.com/hs-hq/Betty) style.

`main.h` contains the definition of all projects' functions. `_putchar.h`, and `_putchar.c` are helper files included in most projects.
## 0-reset_to_98.c - 98 Battery st.
Function that takes a pointer to an int as parameter and updates the value it points to to 98.
- Prototype: `void reset_to_98(int *n);`
## 1-swap.c - Don't swap horses in crossing a stream 
Function that swaps the values of two integers.
- Prototype: `void swap_int(int *a, int *b);`
## 2-strlen.c - This report, by its very length, defends itself against the risk of being read 
Function that returns the length of a string.
- Prototype: `int _strlen(char *s);`
## 3-puts.c - I do not fear computers. I fear the lack of them 
Function that prints a string, followed by a new line, to stdout.
- Prototype: `void _puts(char *str);`
## 4-print_rev.c - I can only go one way. I've not got a reverse gear 
Function that prints a string, in reverse, followed by a new line.
- Prototype: `void print_rev(char *s);`
## 5-rev_string.c - A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes
Function that reverses a string.
- Prototype: `void rev_string(char *s);`
## 6-puts2.c - Half the lies they tell about me aren't true 
Function that prints every other character of a string, starting with the first character, followed by a new line.
- Prototype: `void puts2(char *str);`
## 7-puts_half.c - Winning is only half of it. Having fun is the other half
Function that prints half of a string, followed by a new line.
- Prototype: `void puts_half(char *str);`
- The function should print the second half of the string
- If the number of characters is odd, the function should print the last `n` characters of the string, where `n = (length_of_the_string - 1) / 2`
## 8-print_array.c - Arrays are not pointers
Function that prints n elements of an array of integers, followed by a new line.
- Prototype: `void print_array(int *a, int n);`
- `n` is the number of elements of the array to be printed
- Numbers must be separated by comma, followed by a space
- Numbers should be displayed in the same order as they are stored in the array
## 9-strcpy.c - strcpy
Function that copies the string pointed to by src, including the terminating null byte (`\0`), to the buffer pointed to by dest.
- Prototype: `char *_strcpy(char *dest, char *src);`
- Return value: the pointer to `dest`
## 100-atoi.c - Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers
Function that convert a string to an integer.
- Prototype: `int _atoi(char *s);`
- The number in the string can be preceded by an infinite number of characters
- You need to take into account all the - and + signs before the number
- If there are no numbers in the string, the function must return 0
## 101-keygen.c - Don't hate the hacker, hate the code 
Program that generates random valid passwords for the program [101-crackme](https://github.com/hs-hq/0x04.c).
- Usage:
  ```bash
  $ gcc -Wall -pedantic -Werror -Wextra 101-keygen.c -o 101-keygen
  $ ./101-crackme "`./101-keygen`"
  ```
