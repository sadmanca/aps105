- [1. `Course Intro`](#1-course-intro)
  - [1.1. `Parts of a Computer`](#11-parts-of-a-computer)
- [2. `Intro to Computers`](#2-intro-to-computers)
  - [2.1. ***`HOW ARE PROGRAMS STORED IN MEMORY?`***](#21-how-are-programs-stored-in-memory)
  - [2.2. Intro to Writing C Programs](#22-intro-to-writing-c-programs)
- [3. Variable Types & I/O](#3-variable-types--io)
- [4. Arithmetic Operators & Order of Operations](#4-arithmetic-operators--order-of-operations)
      - [WARNINGS](#warnings)
      - [OPERATOR PRECEDENCE & ASSOCIATIVITY](#operator-precedence--associativity)
- [5. Math Functions](#5-math-functions)
- [6. Relational Expressions](#6-relational-expressions)
- [7. Logic Operators](#7-logic-operators)
- [8. Loops](#8-loops)
- [9. For Loops (see 8.)](#9-for-loops-see-8)
- [10. Nested Loops (see 8.)](#10-nested-loops-see-8)
- [11. Functions](#11-functions)
- [12. **POINTERS**](#12-pointers)
- [13. **POINTERS II** - repointed](#13-pointers-ii---repointed)
- [14. Variable Scopes](#14-variable-scopes)
- [15. 1D Arrays](#15-1d-arrays)
- [16. Arrays <---> Pointers](#16-arrays-----pointers)
- [17. Dynamic Memory Allocation](#17-dynamic-memory-allocation)
- [18. ***`Midterm Prep`***](#18-midterm-prep)

# 1. `Course Intro`

GRADING: 30% labs, 30% midterm, 40% final exam

## 1.1. `Parts of a Computer`
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

<hr style="border:4px solid #575757; margin: 30px 0 30px 0; "> </hr>

# 2. `Intro to Computers`

## 2.1. ***`HOW ARE PROGRAMS STORED IN MEMORY?`***

Q: What is a program?{.lr}

A: A program is sequence of instructions performed by a computer.

Q: WHERE are data and instructions stored in a computer?{.r}

A: Data is stored in main memory (RAM).

- Q: What are the different UNITS OF MEMORY?{.r}
- A:
  | UNIT     | SYMBOL |                   |                         |   |
  | -------- | ------ | ----------------- | ----------------------- | - |
  | Bit      | 1 or 0 | 1 bit             |                         |   |
  | Byte     | B      | $2^3 = 8$ bits    |                         |   |
  | Kilobyte | KB     | $2^{10} = 1024$ B |                         |   |
  | Megabyte | MB     |                   | $(2^{10})^2 = 2^{20}$ B |   |
  | Gigabyte | GB     |                   |                         |   |
  | Terabyte | TB     |                   |                         |   |

<!-- GENERATE PROPER MARKDOWN TABLE FOR MEMORY UNITS!!!! -->

<!-- bit (1 or 0) - 1 bit
- byte (B) - 8 bits = 2^3 bits
- kilobyte (KB) - 1024 B = 2^10 B
- megabyte (MB) - 1024 KB = 2^10 KB = 2^20 B
- gigabyte (GB) - 1024 MB = 2^10 MB = 2^30 B
- terabyte (TB) - 1024 GB = 2^10 GB =  = 2^40 B -->

Q: HOW are data and instructions stored in a computer?{.lr}

A: Data (numerical information; i.e. numbers) are encoded in binary (1s & 0s).

- Q: How are numbers represented in BINARY?{.r}
- A:
0 - 0000 - 0 bits
1 - 0001 - 1 bit
2 - 0010 - 2 bits
3 - 0011 - 2 bits
4 - 0100 - 3 bits
5 - 0101 - 3 bits
6 - 0110 - 3 bits
7 - 0111 - 3 bits
8 - 1000 - 4 bits

<!-- GENERATE PROPER MARKDOWN TABLE FOR BINARY NUMBERS!!!! -->

- Representing a number n requires 2^n-1 bits.

Q: How is main memory organized?{.r}

A: Main memory is divided into cells, each holding 1 byte and with an address (making memory “byte-addressable”).

**PRACTICE:** 
1\. a) If we choose to represent addresses using 32-bits, how many different addresses can we have and what is the total memory that can be stored?{.p}

- A: The question is effectively asking how many different numbers we can store with 32 bits. The answer is 2^32-1 + 1 (representing 0 requires 0 bits).
- Since each address accesses 1 byte, the total memory that can be stored is 2^32 addresses * 1 byte = 2^32 B = 2^2 * 2^10 * 2^10 * 2^10 B = 4 * (2^10)^3 B = 4 * (2^10)^2 KB =  = 4 * (2^10) MB = 4 GB.
- Written another way: 2^32 addresses * 1 byte = 2^32 addresses * 8 bits = 2^35 bits.

b) How big can my memory be if I have a 64-bit address?{.p}
- We can have 2^64 addresses, and so the total memory tha[t can be stored is 2^64 addresses * 1 byte = 2^4 * (2^10)^6 bytes = 16 * (2^10)^6 bytes = 16 exabytes.]

---

## 2.2. Intro to Writing C Programs

What is the process of developing a C program?

1. Edit code (.c file)
2. Compile (using gcc compiler) to machine code (stored in main memory)
    1. machine code is a sequence of instructions that will be executed by CPU

What are the standard parts of a C program?

- #include <stdio.h> - standard library to use input/output functions (printf, scanf)
- int main(void) - every C program must have main method (where the program starts)
- int input - declare a variable (reserve space for it in main memory) and initialize it (assign it a value)
- ; - every instruction must end with ;
- scanf(”%d”, &input); - %d is a format specifier (this is expecting an int, %lf expects a double)

Escape sequences:

- ” ← \”
- \ ← \\

<hr style="border:4px solid #575757; margin: 30px 0 30px 0; "> </hr>

# 3. Variable Types & I/O

**#define**
```c
#define Constant(CamelCase) 10
```
- Can be used to indicate a constant.
- Reduces repetition of numbers.
- If the definition is changed then all values in the program are changed.
- Semicolon is not required.
- i.e. `include HST 100`

<hr style="border:4px solid #575757; margin: 30px 0 30px 0; "> </hr>

# 4. Arithmetic Operators & Order of Operations

#### WARNINGS

9/5 - int divided by int; result is truncated int (w/o decimal)
1 + 2.5 - int + double is double

Implicit Type Conversion - no compile-time or runtime warnings.
- int y = sqrt(x) + 1;
  - sqrt function returns a double; is truncated when assigned to int y
- int i = 8.3;
  - 8.3 is being typecast from double to int (is truncated)

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

#### OPERATOR PRECEDENCE & ASSOCIATIVITY 

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
| Precedence | Operator     | Description                                       | Associativity |
|------------|--------------|---------------------------------------------------|---------------|
|      1     | ++ --        | Suffix/postfix increment and decrement            | Left-to-right |
|            | ()           | Function call                                     |               |
|            | []           | Array subscripting                                |               |
|            | .            | Structure and union member access                 |               |
|            | ->           | Structure and union member access through pointer |               |
|            | (type){list} | Compound literal(C99)                             |               |

|      2     | ++ --        | Prefix increment and decrement[note 1]            | Right-to-left |
|            | + -          | Unary plus and minus                              |               |
|            | ! ~          | Logical NOT and bitwise NOT                       |               |
|            | (type)       | Cast                                              |               |
|            | *            | Indirection (dereference)                         |               |
|            | &            | Address-of                                        |               |
|            | sizeof       | Size-of[note 2]                                   |               |
|            | _Alignof     | Alignment requirement(C11)                        |               |
|------------|--------------|---------------------------------------------------|---------------|
|      3     | * / %        | Multiplication, division, and remainder           | Left-to-right |
|------------|--------------|---------------------------------------------------|               |
|      4     | + -          | Addition and subtraction                          |               |
|------------|--------------|---------------------------------------------------|               |
|      5     | << >>        | Bitwise left shift and right shift                |               |
|------------|--------------|---------------------------------------------------|               |
|      6     | < <=         | For relational operators < and ≤ respectively     |               |
|            | > >=         | For relational operators > and ≥ respectively     |               |
|------------|--------------|---------------------------------------------------|               |
|      7     | == !=        | For relational = and ≠ respectively               |               |
|------------|--------------|---------------------------------------------------|               |
|      8     | &            | Bitwise AND                                       |               |
|------------|--------------|---------------------------------------------------|               |
|      9     | ^            | Bitwise XOR (exclusive or)                        |               |
|------------|--------------|---------------------------------------------------|               |
|     10     | \|           | Bitwise OR (inclusive or)                         |               |
|------------|--------------|---------------------------------------------------|               |
|     11     | &&           | Logical AND                                       |               |
|------------|--------------|---------------------------------------------------|               |
|     12     | \|\|         | Logical OR                                        |               |
|------------|--------------|---------------------------------------------------|---------------|
|     13     | ?:           | Ternary conditional[note 3]                       | Right-to-left |
|------------|--------------|---------------------------------------------------|               |
|     14     | =            | Simple assignment                                 |               |
|            | += -=        | Assignment by sum and difference                  |               |
|            | *= /= %=     | Assignment by product, quotient, and remainder    |               |
|            | <<= >>=      | Assignment by bitwise left shift and right shift  |               |
|            | &= ^= \|=    | Assignment by bitwise AND, XOR, and OR            |               |
|------------|--------------|---------------------------------------------------|---------------|
|     15     | ,            | Comma                                             | Left-to-right |

https://web.microsoftstream.com/video/2e8252f9-8652-4afe-b7e9-0e0d089e80f7?st=1464 

<hr style="border:4px solid #575757; margin: 30px 0 30px 0; "> </hr>

# 5. Math Functions

<hr style="border:4px solid #575757; margin: 30px 0 30px 0; "> </hr>

# 6. Relational Expressions

<hr style="border:4px solid #575757; margin: 30px 0 30px 0; "> </hr>

# 7. Logic Operators

<hr style="border:4px solid #575757; margin: 30px 0 30px 0; "> </hr>

# 8. Loops

# 9. For Loops (see 8.)
# 10. Nested Loops (see 8.)

<hr style="border:4px solid #575757; margin: 30px 0 30px 0; "> </hr>

# 11. Functions

<hr style="border:4px solid #575757; margin: 30px 0 30px 0; "> </hr>

# 12. **POINTERS**

<hr style="border:4px solid #575757; margin: 30px 0 30px 0; "> </hr>

# 13. **POINTERS II** - repointed

<hr style="border:4px solid #575757; margin: 30px 0 30px 0; "> </hr>

# 14. Variable Scopes

<hr style="border:4px solid #575757; margin: 30px 0 30px 0; "> </hr>

# 15. 1D Arrays

<hr style="border:4px solid #575757; margin: 30px 0 30px 0; "> </hr>

# 16. Arrays <---> Pointers

<hr style="border:4px solid #575757; margin: 30px 0 30px 0; "> </hr>

# 17. Dynamic Memory Allocation

<hr style="border:4px solid #575757; margin: 30px 0 30px 0; "> </hr>

# 18. ***`Midterm Prep`***

<hr style="border:4px solid #575757; margin: 30px 0 30px 0; "> </hr>