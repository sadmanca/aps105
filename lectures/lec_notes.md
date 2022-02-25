**APS105 LECTURE NOTES**
- [1. _Course Intro_](#1-course-intro)
  - [1.1. _Parts of a Computer_](#11-parts-of-a-computer)
- [2. _Intro to Computers_](#2-intro-to-computers)
  - [2.1. ***_HOW ARE PROGRAMS STORED IN MEMORY?_***](#21-how-are-programs-stored-in-memory)
  - [2.2. _Intro to Writing C Programs_](#22-intro-to-writing-c-programs)
    - [2.2.1. Escape Sequences](#221-escape-sequences)
- [3. Variable Types & I/O](#3-variable-types--io)
  - [3.1. `#define`](#31-define)
- [4. Arithmetic Operators & Order of Operations](#4-arithmetic-operators--order-of-operations)
      - [4.0.0.1. WARNINGS](#4001-warnings)
      - [4.0.0.2. OPERATOR PRECEDENCE & ASSOCIATIVITY](#4002-operator-precedence--associativity)
- [5. Math Functions](#5-math-functions)
  - [5.1. Math Library Functions](#51-math-library-functions)
  - [5.2. Generating Random Numbers](#52-generating-random-numbers)
  - [5.3. Applications Of Random Numbers](#53-applications-of-random-numbers)
- [6. Relational & Logic Operators](#6-relational--logic-operators)
  - [6.1. Relational Operators](#61-relational-operators)
  - [6.2. Logic Operators](#62-logic-operators)
    - [6.2.1. Lazy Evaluation](#621-lazy-evaluation)
    - [6.2.2. De Morgan's Law](#622-de-morgans-law)
    - [6.2.3. Dangling if-else](#623-dangling-if-else)
- [7. See 6. (De Morgan's Law, dangling `else`)](#7-see-6-de-morgans-law-dangling-else)
- [8. While Loops](#8-while-loops)
  - [8.1. do-while Loops](#81-do-while-loops)
- [9. For Loops](#9-for-loops)
- [10. See 8. & 9. (Nested Loops)](#10-see-8--9-nested-loops)
- [11. Functions](#11-functions)
- [12. Intro to Pointers](#12-intro-to-pointers)
  - [12.1. Why we need pointers ('Call by value')](#121-why-we-need-pointers-call-by-value)
  - [12.2. Defining pointers](#122-defining-pointers)
  - [12.3. Memory Taken up by Addresses & Pointers](#123-memory-taken-up-by-addresses--pointers)
- [13. More on Pointers](#13-more-on-pointers)
  - [13.1. Void Pointers](#131-void-pointers)
  - [13.2. NULL Pointers](#132-null-pointers)
  - [13.3. Returning Pointers in Functions](#133-returning-pointers-in-functions)
- [14. Variable Scopes](#14-variable-scopes)
  - [14.1. Overlapping Scopes](#141-overlapping-scopes)

# 1. _Course Intro_

GRADING: 30% labs, 30% midterm, 40% final exam

## 1.1. _Parts of a Computer_
*Q: What are the parts of a computer?*{.lr}
- CPU
    - executes instructions (e.g. add 2 numbers, store/delete data in memory) written in native/machine code 
- main memory
    - indexed by addresses
    - stores data and instructions (which can be sent to CPU for executing instructions)
- non-volatile storage (HD/SSD)
- I/O devices

*Q: What does the OS do?*{.lr}

- manage hardware resources
- provide interface for applications

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 2. _Intro to Computers_

## 2.1. ***_HOW ARE PROGRAMS STORED IN MEMORY?_***

Q: What is a program?{.lr}

A: A program is sequence of instructions performed by a computer.

Q: WHERE are data and instructions stored in a computer?{.r}

A: Data is stored in main memory (RAM).

- Q: What are the different UNITS OF MEMORY?{.r}
- 
  | UNIT     | SYMBOL | MEMORY SPACE {.lg} |
  | -------- | ------ | ------------------ |
  | Bit      | 1 or 0 | 1 bit              |
  | Byte     | B      | $2^3$ bits         |
  | KiloByte | KB     | $2^{10}$* B        |
  | MegaByte | MB     | $2^{10}$ KB        |
  | GigaByte | GB     | $2^{10}$ MB        |
  | TeraByte | TB     | $2^{10}$ GB        |
  \*$2^{10} = 1024$

e.g. How many bits are in 23 MB? {.p}

A: $23 MB\times 2^{10} KB/1MB \times 2^{10} B/KB \times 2^3\ bits/B = 23\times 2^{23} bits$ {.lg}

<!-- $2^{23}\text{ MB} \cdot \frac{2^{10} \text{ KB}}{1 \text{ MB}} \cdot \frac{2^{10} \text{ bits}}{1 \text{ B}} = 23 \cdot 2^{23} \text{ bits}$ -->

Q: HOW are data and instructions stored in a computer?{.lr}

A: Data (numerical information; i.e. numbers) are encoded in binary (1s & 0s).

- Q: How are numbers represented in BINARY?{.r} 
- 
  | DECIMAL | BINARY | MEMORY SPACE {.lg} |
  | ------- | ------ | ------------------ |
  | 0       | 0000   | 0 bits             |
  | 1       | 0001   | 1 bit              |
  | 2       | 0010   | 2 bits             |
  | 3       | 0011   | 2 bits             |
  | 4       | 0100   | 3 bits             |
  | 5       | 0101*  | 3 bits             |
  | 6       | 0110   | 3 bits             |
  | 7       | 0111   | 3 bits             |
  | 8       | 1000   | 4 bits             |
  | ...     | ...    | ...                |
  | n       | ...    | $2^n - 1$ bits     |
  \*0101 = $2^3\cdot0 + 2^2\cdot 1 + 2^1\cdot0+2^0\cdot1$

Q: How is main memory organized?{.r}

A: Main memory is divided into cells, each holding 1 Byte and with an address (making memory “Byte-addressable”). {.lg}

**PRACTICE:** 
1\. a) If we choose to represent addresses using 32-bits, how many different addresses can we have and what is the total memory that can be stored?{.p}

The question is effectively asking how many different numbers we can store with 32 bits. The answer is $2^{32}-1 + 1$ Bytes (we use the equation $2^n - 1$ & the knowledge that representing 0 requires 0 bits). {.lg}
- Since each address takes up/accesses 1 Byte, the total memory that can be stored is: $2^{32} \text{addresses} \cdot 1 \text{ Byte} = 2^{32} \text{ Bytes} = 2^{32} \text{ B} \cdot \frac{1 \text{ KB}}{2^{10} \text{ B}} \cdot \frac{1 \text{ MB}}{2^{10} \text{ KB}} \cdot \frac{1 \text{ GB}}{2^{10} \text{ MB}} = \frac{2^{32}}{2^{30}} \text{ GB} = 4 \text{ GB}$.

b) How big can my memory be if I have a 64-bit address?{.p}

We can have $2^{64}$ addresses in total, so the total memory that can be stored is: $2^{64} \text{ addresses} \cdot \frac{1 \text{ Byte}}{1 \text{ address}} = 2^4 \cdot {(2^{10})}^6 \text{ Bytes} = 16 \cdot {(2^{10})}^6 \text{ Bytes} = 16 \text{ ExaBytes}$] {.lg}

2\. a) What is the largest number we can store in 1 Byte? {.p}

Since we have $2^3=8$ bits, the largest number we can come up with in binary is 11111111. 

Since there are 8 place values that can be a 1 or a 0, that means there must be $2^8$ different possible numbers that we can represent using 8 bits. 

Subtracting $1$ from $2^8$ (because 0 is also a possible number), the largest number possible is $2^8-1=255$. {.lg}

b) What range of values can we represent with 1 Byte if we take into account negative values (e.g. signed) {.p}

-128 to 127 {.lg}
- $-\frac{\text{number of possible different numbers}}{2}$ to $... - 1$

## 2.2. _Intro to Writing C Programs_

Q: What is the process of developing a C program? {.lr}

1. Edit code (.c file)
2. Compile (using gcc compiler) to machine code in a .out file (stored in main memory)
    - machine code is a sequence of instructions that will be executed by CPU

Q: What are the standard parts of a C program? {.lr}

- `#include <stdio.h>`: standard library to use input/output functions (printf, scanf)
- `int main(void)` - every C program must have main method (where the program starts)
- `int input` - declare a variable (reserve space for it in main memory) and initialize it (assign it a value)
- `;` - every instruction must end with ;
- `scanf(”%d”, &input);` - %d is a format specifier (this is expecting an int, %lf expects a double)

### 2.2.1. Escape Sequences

Use to print special characters:
```c
printf(' \n '); // newline
printf(' \\ '); // backslash
printf(' \" '); // double quote
printf(" \' "); // single quote
```

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 3. Variable Types & I/O

## 3.1. `#define`

Instead of using a `const` variable, we can `#define` a macro at the top of a .c file (no semicolon) and have that value be subsitituted in the code.
- Because `#define` is not a variable, it has no type.
- can also use `include`: e.g. `include HST 100`
```c
// e.g.
#define CamelCaseMacro 31
...
int main() {
  int array[CamelCaseMacro];
}
```

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 4. Arithmetic Operators & Order of Operations

Implicit Type Conversion
- int y = sqrt(x) + 1;
  - sqrt function returns a double; is truncated when assigned to int y
- int i = 8.3;
  - 8.3 is being typecast from double to int (is truncated)
  
#### 4.0.0.1. WARNINGS

9/5 - int divided by int; result is truncated int (w/o decimal)
1 + 2.5 - int + double is double

Division by 0:
- (int) / 0
  - compile-time warning, runtime error (floating point exception) 
  - e.g. 1/0
- (double) / 0
  - results in inf
  - e.g. 1.0/0

Modulus operator %:
- 3 % 0
  - runtime error
- if operand is not int
  - e.g. 5.0 % 5 OR 5 % 5.0
  - compile-time error

↓

#### 4.0.0.2. OPERATOR PRECEDENCE & ASSOCIATIVITY 

assignment operators evaluate expressions from right to left
- for i = j = k = 1, the compiler will evaluate k = 1 first, then j = k, then i = j.

Operators Precedence and Associativity are two characteristics of operators that determine the evaluation order of sub-expressions in absence of brackets

Operator precedence determines which operator is performed first in an expression with more than one operators with different precedence. 
    e.g. from high to low precedence:
    1. arithmetic operators (*, /, %, +, -), are higher precedence than
    2. logical operators (&&, ||),
    3. assignment operators (=, +=, etc.)

Operators Associativity is used when two operators of same precedence appear in an expression. Associativity can be either Left to Right or Right to Left. 
    e.g. ‘*’ and ‘/’ have same precedence and their associativity is Left to Right, so the expression “100 / 10 * 10” is treated as “(100 / 10) * 10”.

1. Associativity is only used when there are two or more operators of same precedence (i.e. precedence is evaluated first before associativity).
2. All operators with the same precedence have same associativity.
3. There is no chaining of comparison operators in C: 
        In Python, expression like
        “c > b > a” is treated as “c > b and b > a”, but this type of chaining
        doesn’t happen in C. For example consider the  following program:

            int a = 10, b = 20, c = 30;
            print(c > b > a);
            >>> FALSE

        **Why?** 
        // (c > b > a) is treated as ((c  > b) > a), associativity of '>'
        // is left to right. Therefore the value becomes ((30 > 20) > 10)
        // which becomes (1 > 10), which is FALSE.

Associativity of arithmetic (* / % + -) and logic (&& ||) is LEFT TO RIGHT.
Associativity of assignment (= += -= *= /= %=) is RIGHT TO LEFT.

IMPORTANT NOTE!!!
It is important to note that a postfix increment or decrement expression evaluates to the value of the expression PRIOR to application of the respective operator. The increment or decrement operation occurs AFTER the operand is evaluated.
    e.g. if (i++ > 0) ...
    In this example, i is compared to 0, then incremented.

Conversely, the prefix increment or decrement expression evaluates to the value of the expression AFTER the application of the respective operator. The increment or decrement operation occurs PRIOR to the operand being evaluated.
    e.g. a = b++;
    In this example, b is incremented, then the value of b is assigned to a.

WHEN IS OPERATOR PRECEDENCE AND ASSOCIATIVITY RELEVANT?
    Pre/postfix in/decrementing, typecasting.

https://en.cppreference.com/w/c/language/operator_precedence 
| Precedence | Operator         | Description                                       | Associativity |
| ---------- | ---------------- | ------------------------------------------------- | ------------- |
| 1          | `++ --`          | Postfix increment and decrement            | Left-to-right |
|            | `()`             | Function call                                     |               |
|            | `[]`             | Array subscripting                                |               |
|            | `.`              | Structure and union member access                 |               |
|            | `->`             | Structure and union member access through pointer |               |
| 2          | `++ --`          | Prefix increment and decrement                    | Right-to-left |
|            | `(type)`         | Cast                                              |               |
|            | *                | Dereference                                       |               |
|            | &                | Address-of                                        |               |
|            | `sizeof` $^1$ {.lr} | Size-of                                           |               |
| 3          | `* / %`          | Multiplication, division, and remainder           | Left-to-right |
| 4          | `+ -`            | Addition and subtraction                          |               |
| 5          | `< <=`           | For relational operators < and ≤ respectively     |               |
|            | `> >=`           | For relational operators > and ≥ respectively     |               |
| 6          | `== !=`          | For relational = and ≠ respectively               |               |
| 7          | `&&`             | Logical AND                                       |               |
| 8          | `||`           | Logical OR                                        |               |
| 9          | `=`              | Simple assignment                                 | Right-to-left |
|            | `+= -=`          | Assignment by sum and difference                  |               |
|            | `*= /= %=`       | Assignment by product, quotient, and remainder    |               |
| 10         | `,`              | Comma                                             |               |

https://web.microsoftstream.com/video/2e8252f9-8652-4afe-b7e9-0e0d089e80f7?st=1464 

$^1$ Q: What is `sizeof()`? {.lr}

A: `sizeof()` returns the size (in B) of the type given as an argument. **`sizeof()` is NOT a function**{.lr} because it takes in type (not variables) as an argument (when you pass in a variable as an argument, it only takes in the variable's type). {.lg}

e.g.
- `sizeof(int)` => `4`
- `sizeof(double)` => `8`
- `sizeof(char)` => `1`

**PRACTICE**: 
1\. What is the order of operations for `i = j = k = 1`? {.p}

Same relational operator (`=`) means they all have the same precedence, so we look at associativity. `=` is right-to-left, so order of operations is:

1. `k=1`
2. `j=(k=1)`
3. `i=(j=(k=1))`{.lg}

2\. What is the order of operations for `! x > 5`? {.p}

Arithmetic operators are lower precedence than relational operators, so: 

1. `!x` is evaluated first
2. `!x == false`, even if x = 0
3. `false == 0` → `0 > 5` => evaluates to **`false`**{.lg} 

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 5. Math Functions

## 5.1. Math Library Functions

```c
#include <math.h>

// Notice how All operands and return types are double

// if 'int' is given as argument, it is typecasted to 'double'
double sqrt(double x);
double pow(double x, double y); // x^y

double fabs(double x); // return absolute value of x
/* ↓
   Q: Why use fabs() over abs()?
   A: abs() only returns int, so it will truncate doubles, unlike fabs() */

double fmax(double x, double y); // return largest of x, y
double fmin(double x, double y); // return smallest of x, y 

double floor(double x); // *round down* to integer
double ceil(double x); // *round up* to integer
double rint(double x); // *round to nearest* integer

double fmod(double x, double y); // mod for floating points
```

**PRACTICE:**
1\. How can you round 2.18 to 2.20? {.p}

A: 
1. multiply by 10 (`2.18 * 10 = 21.8`)
2. round up/to the nearest integer (`rint(21.8) = ceil(21.8) = 22.0`)
3. divide by 10 (`22.0 / 10 = 2.20`)
4. written as a single operation: **`rint(num * 10) / 10`**{.lg}

2\. Imagine Canada no longer uses pennies. How can you round any dollar amount (e.g. `$2.94`) to the nearest nickel (e.g. `$2.94 → $2.95`)? {.p}

A: use question 1 as a model for solving rounding problems:
1. we recognize that we want to use `rint()`, because we need to round to the nearest number.
2. **PROBLEM**: we are not rounding to the nearest int; we need to round to the nearest nickel (i.e. nearest 0.05).
3. **SOLUTION**: 
   1. **convert dollar amount to be decimal number of nickels:** 
   ($\text{2.94 dollars } \times \frac{\text{100 cents}}{\text{1 dollar}} \times \frac{\text{1 nickel}}{\text{5 cents}} =$ `2.94 * 100 / 5`)
   2. round number of nickels to nearest integer: 
   (`rint(58.8) = 59 nickels`) 
   3. convert rounded number of nickels back to dollars: 
   ($\text{59 nickels } \times \frac{\text{5 cents}}{\text{1 nickel}} \times \frac{\text{1 dollar}}{\text{100 cents}} =$ `59 * 5 / 100`)
4. now that we have a process for rounding, we can write it as a single expression: **`rint(price * 100/5) * 5/100)`**{.lg}

## 5.2. Generating Random Numbers

```c
// random number generator functions require standard library
#include <stdlib.h>
```

```c
// takes no input argument
int rand()
```
Generates a positive int from 0 to $2^{31}-1$` = RAND_MAX`

Q: Why is `rand()` a "pseudo-random" number generator? {.r}

A: Each time you run a program with `rand()`, the same numbers will be generated. This occurs because `rand()` uses a deterministic algorithm to generate random numbers. {.lg}

Q: How can we generate a different set of randuom numbers using `rand()`? {.r}

A: Change the **SEED** for the random number generator (only need to change it once at the beginning of the program) {.lg}
```c
void srand(unsigned int SEED)
// default seed = 1
```

Q: How can we set a random seed every time we run a program? {.r}

A: make seed dependent on time: {.lg}

```c
#include <time.h>
srand(time(NULL))
// time(NULL) → return time as seconds since 1 Jan 1970
```

## 5.3. Applications Of Random Numbers 

Q: How can we generate a random number within an interval ***STARTING AT 0*** (e.g. 0-1)? {.r}

A: Using mod (`%`): {.lg}

```c
0 % 5 = 0 // ← ←
1 % 5 = 1 //     ↑
2 % 5 = 2 //     ↑
3 % 5 = 3 //     ↑
4 % 5 = 4 //     ↑
5 % 5 = 0 // REPEATS
6 % 5 = 1
```
`% 5` will always return a number between `0 to 4`
`% 2` will always return a number between `0 to 1`
**`% n` will always return a number between `0 to n-1`**

Thus, we can use `rand() % n` to generate a number from `0 to n-1` {.lg}

- Q: How can we generate a random number within an interval ***NOT*** starting at 0 (e.g. `MIN to MAX`, 5 to 15)? {.r}
- A: Generate a number from `0+MIN to MAX-MIN`, i.e. `num = rand() % (MAX - MIN + 1) + MIN` {.lg}
- e.g. to generate a random number from 5-15: generate random num from 0-10, then add 5 (`rand() % 11 + 5`)

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 6. Relational & Logic Operators

## 6.1. Relational Operators

```c
if (bool == true OR int != 0) {return true}
else (bool == false OR int == 0) {return false}
```

Q: What can you compare using RELATIONAL OPERATORS (`<,>,<=,>=,==,!=`)? {.r}

A: NUMBERS and CHARACTERS:{.lg}
1. compare `int/double` (e.g. `7 >= 2.3`)
2. compare `int/double` with `ARITHMETIC OPERATORS`* (e.g. `a <= b+5`)
   - works because arithmetic operators have higher [precedence](#4002-operator-precedence--associativity) than relational operators.
3. compare `char` ASCII* codes (e.g. `'A' < 'a'`)
   - ASCII code of numbers < uppercase letters < lowercase letters:
   `' ' < '0' < '1' < ... < '9' < 'A' < 'B' < ... < 'Z' < 'a' < 'b' < ... < 'z'`
4. compare `int` & `char` (e.g. `'2' != 2`)

Q: What is ASCII code for `char`?{.lr}

A: `char` is encoded by ASCII code. Each `char` is encoded as an integer that corresponds to a character in ASCII (e.g. `'A'` is encoded as `65`). {.lg}

## 6.2. Logic Operators

**PROBLEM:** CANNOT compare multiple relational operators on a single variable (e.g. ~~`5 <= x <= 10`~~). {.r}

**SOLUTION:** Use logical operators (`&&, ||, !`) to split up expressions (e.g. `5 <= x && x <= 10`). {.lg}
- works because logical operators have lower [precedence](#4002-operator-precedence--associativity) than relational operators.

### 6.2.1. Lazy Evaluation

We can use the [associativity](#4002-operator-precedence--associativity) of logic operators to avoid having to compare all logical expressions:
```c
// e.g. 
if (x != 0 && y/x < 10) ...
if (i == 'red' || i == 'blue') ...

if (LEFT && RIGHT) ...
// RIGHT is not evaluated if LEFT is false

if (LEFT || RIGHT) ...
// RIGHT is not evaluated if LEFT is true
```

### 6.2.2. De Morgan's Law
```c
!(A && B) == !A || !B
and
!(A || B) == !A && !B
```

### 6.2.3. Dangling if-else
```c
if (...) if (...) ...; else ...;
// which 'if' does this 'else' belong to?
```
`else` always belongs to the nearest `if` (if brackets are not included).

```c
if (...) if (...) ...; else ...;

// is the same as

if (...) {
  if (...) {
    ...
  } else {
    ...
  }
}
```
Note that brackets will always take precedence:
```c
if (...) {
  if (...) {
    ...
  }
} else { // will belong to first 'if' because of brackets
  ...
} 
```

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 7. See 6. (De Morgan's Law, dangling `else`)

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 8. While Loops

## 8.1. do-while Loops
```c
do {
  ...
} while (...); // don't forget ';'!
```
`do-while` loops execute the `do` body at least once before checking the `while` condition.
- `do-while` loops are often used for checking user input validity (since you need to take input at least once).

# 9. For Loops

```c
// scope of variables initialized in a loop is limited to that loop
for (<initialization>; <condition>; <alteration>) {
  ...;
}
```
```c
// can exclude curly brackets if only 1 statement (like with 'if')
for (...; ...; ...;) // this is called STATEMENT HEADER
  ...;
```
```c
// can exclude initialization
int i = 1;
for ( ; n <= 15; n++) {
  ...
}
```
```c
// can exclude intialization AND alteration
int i = 1;
for ( ; n <= 15; ) {
  ...
  n++;
}
```
```c
// excluding condition defaults to 'true'
for(int i = 1; ; i++) {
  ...
  // infinite loop; need to break manually
}
```
```c
// we can have complex expressions in statement header
// e.g.
for (int i = 1, double j = 2; i != j && !done; printf("*"), k++) {
  ...
}
```

# 10. See 8. & 9. (Nested Loops)

PRINT FULL TRIANGLE OF STARS

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 11. Functions

Functions called in `main()` can either be:
- implemented before `main()`
  - must be implemented before being called
- PROTOTYPE of function before `main()` & implemented after `main()`
  - can be implemented in any order
  - NOTE: compiler will not complain if it sees the function in `main()` even if it has not been implemented

```c
// prototype
return_type function(parameter_1, parameter_2);
// can also just give type; e.g.
int function(int, bool); 

int main(void){
  function(2, true);
}

int function(int num, bool truth) {
  ...
}
```

Variables in functions are different from variables in `main()` even if they have the same name because they have different scopes.

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 12. Intro to Pointers

## 12.1. Why we need pointers ('Call by value')

**CALL BY VALUE:** when a parameter is passed to a function (e.g. `sqrt(2)`), a copy of the value in the parameter variable is sent, not the variable itself.

e.g. Consider a function to swap the values of 2 variables.
```c
void swap(int x, int y) {
  int temp = x;
  x = y;
  y = temp;
  // does not change x, y variable values in main()
}
```

=> to change the variable itself, use **POINTERS.**

## 12.2. Defining pointers

Q: What are pointers? {.r}

A: Pointers are variables (of type *pointer*) that store an address/location of another variable.
 {.lg}

- in memory, pointer variables store the address of another variable instead of an actual value.

```c
// pointer variable declaration
int *pointer;
int* pointer;

// assign pointer to address of x
int x = 5;
pointer = &x; // & = 'address of' operator

// DEREFERENCE a pointer = get value of variable that pointer is pointing to
int y = *pointer // * = 'dereference' operator
```

Q: How does changing the dereferenced value (e.g. `*a = 2`) of a pointer affect the value of the variable it is pointing to {.r}

A: The value of the variable being pointed to changes, but the pointer variable does not change (still holds the address of the variable). {.lg}

e.g.
```c
int x = 3, y = 4;
// declare pointer variables
int *a, *b;

// initialize pointers with addresses of x, y
a = &x;
b = &y;

// changing the dereferenced value of each pointer changes the value of the variable being pointed to
*a = 30; // now x = 30
*b = 40; // now y = 30
```

## 12.3. Memory Taken up by Addresses & Pointers 

Q: What is the value of an address of a variable? {.lr}

A: Addresses are non-negative integers (includes NULL pointer 0) that correspond to a memory location within the computer. **EACH ADDRESS IDENTIFIES 1 BYTE OF DATA.** {.lg}
- For a specific instance of a running program, variables in the same scope have the same address (obviously, different variables will have different addresses).
- Each time a program is run, it may or may not store variables in the same addresses/memory locations.

Q: How much space in memory does a pointer take up? {.r}

A: Pointers take up the space needed to hold an address, which is 4 Bytes on a 32-bit machine and 8 Bytes on a 64-bit machine.{.lg}

Q: Can we declare a pointer variable that pointers to a pointer? {.r}

A: Yes; `int **p2 = &p1`, where `p2` is a pointer that points to pointer `p1`. {.lg}

**PRACTICE:**{.p}
1\. Write a C function that swaps 2 variables. {.p}
```c
// function parameters are pointers
void swap(int *a,int *b) {
  // changing the dereferenced value of each pointer changes the value of the variable being pointed to
  int temp = *a;
  *a = *b;
  *a = temp;
}

int main(void) {
  int x = 1, y = 2;
  // because no pointer is actually initialized in main(), the function is given the 'address of' the int variables as parameters
  swap(&i, &j);
}
``` 

2\. If I have the following code... {.p}
```c
int i;
int *pi;
double d;
double *pd;
```
...which of the following are valid statements? {.p}
```c
i = &pd;
pi = &i;
pd = i;
pd = &pi;
*pi = &i;
*pd = 7.0;
```

Non-pointer variables cannot be assigned 'address of' values using `&`. Pointers of one type cannot be assigned addresses of pointers of a different type. {.lg}
```c
// A:
i = &pd; // INVALID: &pd is address of pd, which 
pi = &i;
pd = i;
pd = &pi;
*pi = &i;
*pd = 7.0;
????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????
```

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 13. More on Pointers

## 13.1. Void Pointers

**VOID POINTER:**  has no associated data type; can hold address of any type & can be casted to any type.
```c
int i = 10;
char c = 'x';

// void pointers can hold addresses of any type
void *p = &a; // address of int 'i'
*p = &b // address of char 'c'
```

## 13.2. NULL Pointers

**NULL POINTER:** is a constant pointer (pointing to address 0) used...
- ...to initialize pointers w/o assigning a valid memory address
  - e.g. `int *p = NULL;`
  - uninitialized pointers have arbitrary values & we don't know whether they are valid or not (which is why sometimes segmentation faults might occur, while other times they may not; the fault is nondeterministic)
- ...to check for valid pointer address before dereferencing
  - e.g. `p != NULL`
  - this helps prevent **Runtime Segmentation Faults** (invalid access of memory) by allowing us to check if a pointer has been assigned an address
- ...as a function argument (instead of passing a valid memory address)

## 13.3. Returning Pointers in Functions

Consider a function `largerAddress()` that returns the address of (i.e. a pointer to) the larger of x & y. 

The `main()` function looks like:
```c
int main(void) {
  int x = 1, y = 2;
  // since we want the address of the variable with the larger value, we will be storing the returned pointer in a pointer variable
  int *l = largerAddress(&x, &y); 
  // '&x', '&y' are parameters because we need to return the address of a variable, not the actual value
}
```
Q: What will `largerAddress()` look like? What will the return type be? {.r}
```c
// A:
int* largerAddress(int *x, int *y) {
  if (*x > *y) {
    return x;
  }
  return y;
}
```
- Q: Why do we return `x` instead of `&x`, `*x`, or `&*x`? {.r}
- A: After `largerAddress()` takes in addresses `&x` and `&y` as parameters, the function initalizes pointers `*x` and `*y` with those addresses. {.lg}
- Since we just want the address of (i.e. a pointer to) the variable with the larger value, we can just return `x` or `y`. {.lg}
- Since `x` is already a pointer, `*x` returns the value at the address, which is not what we want. 
- `&x` returns the address of the pointer `x` itself, which is not what we want either (we want the address of the variable `x` in `main()`).
- `&*x` is the same as returning the pointer `x`, because `&` and `*` are opposite operations.

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 14. Variable Scopes

VARIABLE SCOPE: the set of C statements (example below) within which a variable is defined/visible/accessible.
- variables declared inside function headers (e.g. `func(int x`) or compound statements (e.g. `{ {var} }`) are only available within their respective statement.
- declaring a variable before initializing it results in compile-time error:
- ```c 
  // e.g.
  i = 1; // compiler error
  int i;
  ```

GLOBAL VARIABLES: are declared at the top of the .c file outside any functions; are scoped to all functions in the file.
```c
// e.g.
#include <stdio.h>
int x; // GLOBAL VARIABLE

// x is scoped outside any function

void func() {
  ... // x is scoped here
}

int main(void) {
  ... // x is scoped here too
}
```

## 14.1. Overlapping Scopes

When variable with the same name is declared in a statement inside another statement that has already declared a variable with that name, the scope of those variables (which are different variables that point to different addresses but just have the same name) is overlapping.
- this is NOT an invalid operation; no errors/warnings will be given.
- the value assigned to the interior scoped variable is limited to the interior statement; in the surrounding statement, the value of the variable goes back to its original value.
  ```c
  // e.g.
  int i = 1;
  printf("%d", i);
  {
    int i = 10;
    printf("%d", i);
  }
  printf("%d", i);
  // what is the output?


  // OUTPUT: 1 10 0
  ```

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>