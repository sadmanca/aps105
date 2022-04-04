**APS105 LECTURE NOTES**

- [1. _Course Intro_](#1-course-intro)
  - [1.1. _Parts of a Computer_](#11-parts-of-a-computer)
- [2. _Intro to Computers_](#2-intro-to-computers)
  - [2.1. ***_HOW ARE PROGRAMS STORED IN MEMORY?_***](#21-how-are-programs-stored-in-memory)
  - [2.2. _Intro to Writing C Programs_](#22-intro-to-writing-c-programs)
  - [2.3. Printing](#23-printing)
    - [2.3.1. Escape Sequences](#231-escape-sequences)
    - [2.3.2. Formatting Numbers (e.g. set width)](#232-formatting-numbers-eg-set-width)
- [3. Variable Types & I/O](#3-variable-types--io)
  - [3.1. `#define`](#31-define)
- [4. Arithmetic Operators & Order of Operations](#4-arithmetic-operators--order-of-operations)
      - [4.0.0.1. WARNINGS](#4001-warnings)
      - [4.0.0.2. OPERATOR PRECEDENCE & ASSOCIATIVITY](#4002-operator-precedence--associativity)
- [5. Math Functions](#5-math-functions)
  - [5.1. Math Library Functions](#51-math-library-functions)
  - [5.2. Generating Random Numbers](#52-generating-random-numbers)
  - [5.3. Generating Random Numbers Within a Range](#53-generating-random-numbers-within-a-range)
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
  - [9.1. For Loop - Statement Header Variations](#91-for-loop---statement-header-variations)
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
- [15. 1D Arrays](#15-1d-arrays)
  - [15.1. Ways to Declare/Initalize 1D Arrays](#151-ways-to-declareinitalize-1d-arrays)
  - [15.2. Writing into Unallocated Memory](#152-writing-into-unallocated-memory)
- [16. Array Pointers & Pointer Arithmetic](#16-array-pointers--pointer-arithmetic)
  - [16.1. Array Pointers](#161-array-pointers)
  - [16.2. Pointer Arithmetic](#162-pointer-arithmetic)
- [17. Dynamic Memory Allocation](#17-dynamic-memory-allocation)
  - [17.1. `malloc()`](#171-malloc)
  - [17.2. `free`](#172-free)
- [18. ***_MIDTERM PREP_***](#18-midterm-prep)
- [19. Intro to 2D Arrays](#19-intro-to-2d-arrays)
  - [19.1. Initializing 2D Arrays](#191-initializing-2d-arrays)
  - [19.2. 2D Array Memory Addresses/Pointer Arithmetic](#192-2d-array-memory-addressespointer-arithmetic)
  - [19.3. Passing 2D Arrays to Functions](#193-passing-2d-arrays-to-functions)
    - [19.3.1. Without Pointers](#1931-without-pointers)
    - [19.3.2. Passing Multidimensional Arrays](#1932-passing-multidimensional-arrays)
    - [19.3.3. With Pointers](#1933-with-pointers)
  - [19.4. Dereferencing 2D Arrays](#194-dereferencing-2d-arrays)
- [20. 2D Arrays & Dynamic Memory Allocation](#20-2d-arrays--dynamic-memory-allocation)
  - [20.1. `malloc` for 2D Arrays](#201-malloc-for-2d-arrays)
  - [20.2. `free` for 2D Arrays](#202-free-for-2d-arrays)
- [21. Strings](#21-strings)
  - [21.1. String == `char` array](#211-string--char-array)
  - [21.2. Initializing Strings](#212-initializing-strings)
    - [21.2.1. As `char` Arrays](#2121-as-char-arrays)
    - [21.2.2. As `char*` Pointers](#2122-as-char-pointers)
      - [21.2.2.1. Empty Strings](#21221-empty-strings)
- [22. String I/O](#22-string-io)
  - [22.1. `const` Characters & `const` Addresses](#221-const-characters--const-addresses)
  - [22.2. String OUTPUT](#222-string-output)
  - [22.3. String INPUT](#223-string-input)
    - [22.3.1. `scanf`](#2231-scanf)
    - [22.3.2. `fget(s)` & STRINGS (`char` ARRAYS) AS FUNCTION PARAMETERS](#2232-fgets--strings-char-arrays-as-function-parameters)
- [23. More on Strings & String Library Functions](#23-more-on-strings--string-library-functions)
  - [23.1. Small Details of Printing Strings](#231-small-details-of-printing-strings)
  - [23.2. String Library Functions](#232-string-library-functions)
  - [23.3. `strlen()`](#233-strlen)
  - [23.4. `strcpy()`](#234-strcpy)
- [24. More String Library Functions](#24-more-string-library-functions)
  - [24.1. `strncpy()`](#241-strncpy)
  - [24.2. `strcat()` / `strcat()`](#242-strcat--strcat)
  - [24.3. `strcmp()` / `strncmp()`](#243-strcmp--strncmp)
  - [24.4. `atoi()` / `atof()`](#244-atoi--atof)
  - [24.5. `strchr()`](#245-strchr)
  - [24.6. `strstr()`](#246-strstr)
- [25. 2D Arrays of Strings](#25-2d-arrays-of-strings)
- [26. RECURSION](#26-recursion)
- [27. Advanced RECURSION](#27-advanced-recursion)
  - [27.1. Using Backtracking](#271-using-backtracking)
  - [27.2. Multiple Base Cases](#272-multiple-base-cases)
  - [27.3. Storing Repeated Function Calls](#273-storing-repeated-function-calls)
- [28. RECURSION With Strings](#28-recursion-with-strings)
    - [28.0.1. Helper Functions](#2801-helper-functions)
- [29. STRUCTURES](#29-structures)
  - [29.1. Structures](#291-structures)
    - [29.1.1. Declaring `struct`](#2911-declaring-struct)
    - [29.1.2. `typedef`](#2912-typedef)
    - [29.1.3. Initializing `struct` Variables](#2913-initializing-struct-variables)
  - [29.2. Member Access Operators](#292-member-access-operators)
- [30. LINKED LISTS](#30-linked-lists)
  - [30.1. Why use a Linked List?](#301-why-use-a-linked-list)
  - [30.2. Linked List Interface](#302-linked-list-interface)
  - [30.3. Abstract Description of How a Linked List Works](#303-abstract-description-of-how-a-linked-list-works)
  - [30.4. Implementing Linked Lists (0/3)](#304-implementing-linked-lists-03)
  - [30.5. Problems with Linked Lists](#305-problems-with-linked-lists)
- [31. Implmenting Linked Lists (1/3)](#31-implmenting-linked-lists-13)
  - [31.1. `struct` Node](#311-struct-node)
  - [31.2. `createNode()`](#312-createnode)
    - [31.2.1. Manually Initializing Head & Adding Nodes](#3121-manually-initializing-head--adding-nodes)
  - [31.3. `insertAtFront()`](#313-insertatfront)
    - [31.3.1. Manually Initializing Head & Adding Nodes via `insertAtFront()`](#3131-manually-initializing-head--adding-nodes-via-insertatfront)
  - [31.4. `struct linkedList`](#314-struct-linkedlist)
    - [31.4.1. Initializing Head & Adding Nodes to our linkedList `struct`](#3141-initializing-head--adding-nodes-to-our-linkedlist-struct)
- [32. Implementing Linked Lists (2/3)](#32-implementing-linked-lists-23)
  - [32.1. `initList()`](#321-initlist)
  - [32.2. `isEmpty()`](#322-isempty)
  - [32.3. `printList()`](#323-printlist)
  - [32.4. `findFirstNodeSearch()`](#324-findfirstnodesearch)
  - [32.5. `insertAtBack()`](#325-insertatback)
- [33. Implementating Linked Lists (3/3)](#33-implementating-linked-lists-33)
  - [33.1. `insertIntoOrderedList()`](#331-insertintoorderedlist)
  - [33.2. `deleteFront()`](#332-deletefront)
  - [33.3. `deleteLast()`](#333-deletelast)
  - [33.4. `deleteAllNodes()`](#334-deleteallnodes)
  - [33.5. `deleteFirstMatch()`](#335-deletefirstmatch)
  - [33.6. `deleteAllMatches()`](#336-deleteallmatches)
  - [33.7. (Linked List) FINAL EXAM STRATEGIES](#337-linked-list-final-exam-strategies)
- [34. Searching Algorithms](#34-searching-algorithms)
  - [34.1. Sequential Search](#341-sequential-search)
  - [34.2. Binary Search (non-recursive)](#342-binary-search-non-recursive)
  - [34.3. Binary Search (recursive)](#343-binary-search-recursive)
- [35. Sorting Algorithms](#35-sorting-algorithms)
  - [35.1. Insertion Sort](#351-insertion-sort)
  - [35.2. Selection Sort](#352-selection-sort)

**Sidenote: sections 28. and 29. occurred in the same lecture and were split up for organization. Each section N from 29. onwards corresponds to the lecture number N-1 (e.g. 31 -> LEC 30).*

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

Q: What are the different UNITS OF MEMORY?{.r}

| UNIT     | SYMBOL | MEMORY SPACE {.lg} |
| -------- | ------ | ------------------ |
| Bit      | 1 or 0 | 1 bit              |
| Byte     | B      | $2^3$ bits         |
| KiloByte | KB     | $2^{10}$ B        |
| MegaByte | MB     | $2^{10}$ KB        |
| GigaByte | GB     | $2^{10}$ MB        |
| TeraByte | TB     | $2^{10}$ GB        |
\*$2^{10} = 1024$

e.g. How many bits are in 23 MB? {.p}

A: $23 MB\times 2^{10} KB/1MB \times 2^{10} B/KB \times 2^3\ bits/B = 23\times 2^{23} bits$ {.lg}

<!-- $2^{23}\text{ MB} \cdot \frac{2^{10} \text{ KB}}{1 \text{ MB}} \cdot \frac{2^{10} \text{ bits}}{1 \text{ B}} = 23 \cdot 2^{23} \text{ bits}$ -->

Q: How much memory does each variable type in C take up? {.r}

| TYPE    | MEMORY SPACE {.lg} |
| ------- | ------------------ |
| pointer | 1 B                |
| `char`  | 1 B                |
| `int`     | 4 B                |
| `double`  | 8 B                |

Q: HOW are data and instructions stored in a computer?{.lr}

A: Data (numerical information; i.e. numbers) are encoded in binary (1s & 0s).

Q: How are numbers represented in BINARY?{.r}

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

## 2.3. Printing
### 2.3.1. Escape Sequences

Use to print special characters:
```c
printf(' \n '); // newline
printf(' \\ '); // backslash
printf(' \" '); // double quote
printf(" \' "); // single quote
```

### 2.3.2. Formatting Numbers (e.g. set width)
```c
printf(%4d, int) // print int right aligned taking up 4 spaces
printf(%04d, int) // same as above + prefix of 0

printf(%4f, double) // print double right aligned taking up 4 spaces
printf(%.4f, double) // print double with 4 decimal values
printf(%3.4f, double) // same as above + right aligned taking up 3 spaces
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

9/5 - int divided by int; result is truncated int (w/o decimal)
1 + 2.5 - int + double is double

#### 4.0.0.1. WARNINGS

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

Operators Precedence and Associativity are two characteristics of operators that determine the evaluation order of sub-expressions in absence of brackets.
- Operator precedence determines which operator is performed first in an expression with more than one operators with different precedence.

Operators Associativity is used when two operators of same precedence appear in an expression. Associativity can be either Left to Right or Right to Left.

1. Associativity is only used when there are two or more operators of same precedence (i.e. precedence is evaluated first before associativity).
2. All operators with the same precedence have same associativity.
3. There is no chaining of comparison operators (e.g. `a < b < c`) in C; operators will be evaluated in based on precedence and associativity.
   ```c
   a < b && b < c // is equivalent to 'a < b < c'
   ```

Q: What is the hierarchy of precedence and associativity for operators in C?{.r}

| PRECEDENCE | OPERATOR            | DESCRIPTION                                    | ASSOCIATIVITY |
| ---------- | ------------------- | ---------------------------------------------- | ------------- |
| 1          | `i++ i--` $^1$ {.lr}          | Postfix increment and decrement                | Left-to-right |
|            | `()`                | Function call                                  |               |
|            | `[]`                | Array subscripting                             |               |
| 2          | `++i --i` $^2$ {.lr}           | Prefix increment and decrement                 | Right-to-left |
|            | `(type)`            | Cast                                           |               |
|            | *                   | Dereference                                    |               |
|            | &                   | Address-of                                     |               |
|            | `sizeof` $^3$ {.r} | Size-of                                        |               |
| 3          | `* / %`             | * / %                                          | Left-to-right |
| 4          | `+ -`               | + -                                            |               |
| 5          | `< <=`              | < and ≤                                        |               |
|            | `> >=`              | > and ≥                                        |               |
| 6          | `== !=`             | = and ≠                                        |               |
| 8          | `||`                | OR                                             |               |
| 7          | `&&`                | AND                                            |               |
| 9          | `=`                 | Assignment                                     | Right-to-left |
|            | `+= -=`             | Assignment by sum and difference               |               |
|            | `*= /= %=`          | Assignment by product, quotient, and remainder |               |


<!-- | 8          | `||`                | OR                                             |               | -->

Expressions with *$^1$postfix are evaluated first using original value of variable and then variable value is modified.*{.lr}
Expressions with *$^2$prefix are evaluated after variable value is modified.*{.lr}
```c
// e.g.
b = a++; // a++,   THEN b = a
b = ++a; // b = a, THEN a++
```

- Q: Why is prefix and postfix still in the table then? {.lr}
- A: Because they are higher in precedence than pointer `*` and `%`.{.lg}
  - e.g. `*p++` is evaluated as `*(p++)`

$^3$ Q: What is `sizeof()`? {.r}

A: `sizeof()` returns the size (in B) of the type given as an argument. **`sizeof()` is NOT a function**{.lr} because it takes in type (not variables) as an argument (when you pass in a variable as an argument, it only takes in the variable's type). {.lg}
```c
// e.g.
sizeof(int)    // 4 (B)
sizeof(double) // 8 (B)
sizeof(char)   // 1 (B)
```

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

3\. What is the order of operations for `a < b < c`? {.p}

All operators have same precedence, so we look at associativity (which is left-to-right for `<`). Thus, expression is evaluated as `(a < b) < c`{.lg}

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 5. Math Functions
## 5.1. Math Library Functions

```c
#include <math.h>
// math library also includes constants for pi (`M_PI`) and euler's number (`M_E`)

// Notice how All operands and return types are double

// if 'int' is given as argument, it is typecasted to 'double'
double sqrt(double x);
double pow(double x, double y); // x^y
double exp(double x); // e^x
double log(double x); // ln(x)
double log10(double x); // log_10(x)

double fabs(double x); // return absolute value of x
//     ↓
//     Q: Why use fabs() over abs()?
//     A: abs() only returns int, so it will truncate doubles, unlike fabs()

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

int rand() // returns random int
```
Generates a positive int from 0 to $2^{31}-1$` = RAND_MAX`
- Q: Why does `RAND_MAX = `$2^{31}-1$? {.lr}
- A: assume a 32-bit computer; 1 bit is taken up by sign of `int` (1 = positive; 0 = negative); leaves 31 bits for a number → largest number we can represent with 32 bits is $2^{31}-1$. {.lg}

Q: Why is `rand()` a "pseudo-random" number generator? {.r}

A: Each time you run a program with `rand()`, the same numbers will be generated. This occurs because `rand()` uses a deterministic algorithm to generate random numbers. {.lg}

Q: How can we generate a different set of random numbers using `rand()`? {.r}

A: Change the **SEED** for the random number generator (only need to change it once at the beginning of the program) {.lg}
```c
void srand(unsigned int SEED) // default seed = 1
```

Q: How can we set a random seed every time we run a program? {.r}

A: make seed dependent on time: {.lg}

```c
#include <time.h>
srand(time(NULL))
// time(NULL) → return time as seconds since 1 Jan 1970
```

## 5.3. Generating Random Numbers Within a Range

Q: How can we generate a random number within an interval ***STARTING AT 0*** (e.g. 0-1)? {.r}

A: Using mod (`%`): {.lg}

```c
0 % 5 = 0 // ← ← ←
1 % 5 = 1 //       ↑
2 % 5 = 2 //       ↑
3 % 5 = 3 //       ↑
4 % 5 = 4 //       ↑
5 % 5 = 0 // REPEATS
6 % 5 = 1
```
`% 5` will always return a number between `0 to 4`
`% 2` will always return a number between `0 to 1`
**`% n` will always return a number between `0 to n-1`**

Thus, we can use `rand() % n` to generate a number from `0 to n-1` {.lg}

- Q: How can we generate a random number within an interval ***NOT*** starting at 0 (e.g. `5 to 15`)? {.r}
- A: Generate a random number from `0 to 10`, then `add 5`: `rand() % 11 + 5` {.lg}

| RANGE                        | EQUIVALENT RANGE                                                                                         | CODE                             |
| ---------------------------- | -------------------------------------------------------------------------------------------------------- | -------------------------------- |
| 0 to 100 {.r}                |                                                                                                          | `rand() % 101`                   |
| -100 to 100 {.r}             | (0 to 200) - 100                                                                                         | `(rand() % 201) - 100`           |
| 0 to 100 EVEN {.r}           | (0 to 50) * 2                                                                                            | `(rand() % 51) * 2`              |
| 0 to 100 ODD {.r}            | (0 to 49) * 2 + 1                                                                                        | `(rand() % 50) * 2 + 1`          |
| 0 to 100 DIVISIBLE BY 3 {.r} | follow process for EVEN: take range (0 to $\frac{\text{MAX}}{3}$), then multiply by divisor ($\times 3$) | `(rand() % 34) * 3`              |
|                              |                                                                                                          |                                  |
| 50 to 100 EVEN {.lr}         | (0 to 50 EVEN) + 50                                                                                      | `(rand() % 50) * 2 + 50`         |
| 50 to 100 ODD {.lr}          | (0 to 50 ODD) + 50                                                                                       | `(rand() % 49) * 2 + 1) + 50`    |
| -100 to 100 EVEN {.lr}       | (0 to 200 EVEN) - 100                                                                                    | `(rand() % 101) * 2 - 100`       |
| -100 to 100 ODD {.lr}        | (0 to 200 ODD) - 100                                                                                     | `((rand() % 100) * 2 + 1) - 100` |

**PRACTICE:**
1\. Write a C statement to generate...
a) ...odd numbers from 600 to 650. {.p}

600 to 650 ODD <=> (0 to 50 ODD) + 600 <=> ((0 to 24) * 2 + 1) + 600 <=> `((rand % 25) * 2 + 1) + 600`{.lg}

b) ...even numbers from 50 to 100. {.p}

50 to 100 EVEN <=> (0 to 50 EVEN) + 50 <=> ((0 to 25) * 2) + 50 <=> `(rand() % 26) * 2 + 50`{.lg}

c) ...numbers from -51 to 201 that are divisible by 3. {.p}

-51 to 201 DIV3 <=> (0 to 252 DIV3) - 51 <=> ((0 to $\frac{252}{3}=$ 84) * 3) - 51 => `(rand() % 85) * 3 - 51`{.lg}

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
!(A && B) // !A || !B
!(A || B) // !A && !B
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

## 9.1. For Loop - Statement Header Variations

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

```c
// e.g.
int x = 3, y = 4;
int *a, *b; // declare pointer variables

// initialize pointers with addresses of x, y
a = &x;
b = &y;

// changing the dereferenced value of each pointer changes the value of the variable being pointed to
*a = 30; // now x = 30
*b = 40; // now y = 30
```

## 12.3. Memory Taken up by Addresses & Pointers

Q: What is the value of an address of a variable? {.lr}

A: Addresses are non-negative integers (includes NULL pointer 0) that correspond to a memory location within the computer.  {.lg}
- For a specific instance of a running program, variables in the same scope have the same address (obviously, different variables will have different addresses).
- Each time a program is run, it may or may not store variables in the same addresses/memory locations.

Q: How much space in memory does a pointer take up? {.r}

A: Pointers take up the space needed to hold an address; since we simplify each address to identify 1 B of data for this course, that means each pointer takes up 1 B of memory.{.lg}

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

# 15. 1D Arrays
## 15.1. Ways to Declare/Initalize 1D Arrays

```c
int a[5] // declares 5 variables: a[0], ..., a[4]
int all_zero[5] = {0} // sets all indices to have the same value
int individual_values[5] = {0,1,2,3,4} // set unique value at each index

// both initializations below are the same
int individual_values[] = {0,1,2,3,4}
int individual_values[5] = {0,1,2,3,4}

int individual_values[10] = {0,1,2,3,4} // first 5 indices are unique values; rest are 0

int size_less_than_values[3] = {0,1,2,3,4} // compile-time error
```

## 15.2. Writing into Unallocated Memory
Q: What happens if we try to assign a value beyond the declared indices of an array (e.g. `a[6] = 23` for `int a[5]`)? {.r}

A: Because the C compiler does not do range checking, this may result in a segmentation fault or overwrite other indices of the array; it is nondeterministic. {.lg}

**PRACTICE:**
1\. What is the address of a variable at an array index (e.g. for array `int a[]`)? {.p}

`&a[n]` for variable at array index n. {.lg}

2\. Write a function that reverses an integer array. {.p}
```c
see lecture 15: 02-11-2022_Lecture
```

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 16. Array Pointers & Pointer Arithmetic
## 16.1. Array Pointers
In C, the identifier (name) of an array points* to the 1st element in the array.
```c
// e.g.
int a[] = {1,2,3,4};

// a is pointer to (i.e. points to address of) a[0]
a     <==>    &a[0]
*a    <==>   *&a[0]   <==>   a[0]
```
- Q: Since an array identifier points to the 1st element in the array, is an array identifer a pointer variable? {.lr}
- A: No, array identifiers are not pointer variables. We know this because assigning an array identifer variable to another address causes a compile-time error. {.lg}
- e.g. `a = &x` is invalid

We can use pointers to pass arrays as parameters to functions, enabling us to actually manipulate arrays using functions.

Q: How do we pass an array as a parameter to a function? {.r}

A: Pass the pointer to the 1st element (`a = &a[0]`) as a function argument. The function parameter for the array is the pointer (`*a`), but we can also just write it as an array variable (`int a[]`). {.lg}

- Because we are passing a pointer to a function, manipulating elements of the array changes the values directly in the memory (and thus in `main()` as well).
```c
// all are same; argument given is always a pointer
int func(int *list);
int func(int list[]);
int func(int list[100]); // size given doesn't matter, because it is ultimately a pointer

int a[] = {1,2,3};
// remember a == &a[0]
int result = func(a);
```
- Since we can only pass a pointer to the 1st element of an array, this does not allow for the function to know the size of the array. For now (we will look at [dynamic memory allocation](#17-dynamic-memory-allocation) in the next lecture), _*you should also pass the size of the array as a parameter.*_

**PRACTICE:**
1\. Suppose that a is a one-dimensional int array `int a[]` and p is a pointer to int variable `int *p`. Assuming that the assignment `p = a` has just been performed, which of the following expressions are illegal because of mismatched types? Of the remaining expressions, which are true? {.p}

| EXPRESSION             | ANSWER                                                       |
| ---------------------- | ------------------------------------------------------------ |
| a) `p == a[0]` {.p}    | illegal (bc `p` is pointer/address of while `a[0]` is value) |
| b) `p == &a[0]` {.p}   | true                                                         |
| c) `*p == a[0]` {.p}   | true                                                         |
| d) `p[0] == a[0]` {.p} | true                                                         |

## 16.2. Pointer Arithmetic

Q: If we let pointer `int* p = a = &a[0]` (that is, pointer to first element in array `a`), how can we get the next element in the array w/o using `&a[0+1]` (i.e. by manipulating pointer `p`)? {.r}

A: pointer `p+1` points to the next element of the array. {.lg}

**POINTER ARITHMETIC**{.c} (adding an integer value to a pointer value; e.g. `p+1`) advances the pointer value in units of the type it points to.
- Because `p` is an integer pointer (of type `int*`) & `int` takes up 4 Bytes, `p+1` will point to the address that 4 Bytes ahead.
  - Since each address takes up 1 Byte, if the integer value of pointer `p` is, say 1000, the integer value of pointer `p+1` will be 1000 Bytes + (4 Bytes per int) = 1004.
  - $\therefore$ pointer to `a[1]` if `int *p = a` is:
    `a + 1` <=> `&a[0] + 1` <=> `&a[1]`
    and
    `*(a + 1)` <=> `*(&a[1])` <=> `a[1]`
- Different pointer types (e.g. `char`, `double`) advance the pointer by an amount corresponding to the amount of memory that type takes up in memory.
- Adding to pointers is valid only if both the original pointer and the result of the addition point to elements of the same array object, or just past the end of it.

Q: What is the difference between `a[i]` and `*(a + i)`? {.lr}

A: None; they compile to the same machine code. {.lg}

We can also:
1. add/subtract pointers to/from each other (e.g. `q-p`)
   - e.g. if `int *p = a = &a[0]` and `int *q = &a[3]`, then `q-p = 3-0 = 3`{.lg}
2. use relational operators to compare pointers to each other (e.g. `if (p <= q)`)
3. use relational operators to compare a pointer to an integer
   - for all integers (except 0), this means that we're just comparing the address of the pointer (which isn't necessarily practical, but can come up on exams).
   - we can use `if (p != 0)` <=> `if (p != NULL)` to check if a pointer points to a valid address before dereferencing

C does not check array bounds, so *pointer arithmetic that goes beyond the bounds of an array*{.r} is a nondeterministic bug -> it will not result in a compile-time error/warning or a run-time warning, but *may or may not result in a run-time warning*{.r}.

**PRACTICE:**
1\. For the code below, how can we rewrite `&marks[i]` using pointer arithmetic? {.p}
```c
int a[size];
for (int i = 0; i < size; i++) {
  scanf("%d", &a[i]);
}
```
1\) Since `&a[0]` <=> `a` and `&a[1]` <=> `&a[0] + 1` <=> `a + 1`, *we can replace `&a[i]` with `a + i`*{.lg}:
```c
// 'scanf("%d", &a[i]);'
scanf("%d", a + i);
```
2\) We can also *rewrite the header of the `for` loop to increment a pointer initially at the first element of the array*{.lg}:
```c
// 'int i = 0; i < size; i++' is necessary because we can't check array bounds any other way
for (int *p = a, int = 0; i < size; p++, i++) {
  scanf("%d", p);
}
```

2\. a) Is the code below valid? Why or why not? {.p}
```c
void swap(int a[], int i, int j) {
  int temp = a[i];
  a[i] = a[j];
  a[j] = temp;
}
```
This code is valid. {.lg}
- `int a[]` is pointer to the 1st element of `a[]`: `&a[0]`, which allows us to manipulate the array.
- `a[i]` is equivalent to `*(&a[i])`, which allows us to dereference the value at `a[i]` and assign it a new value by: `a[i] = temp` <=> `*(&a[i])`.

b) Rewrite the code using pointers and pointer arithmetic. {.p}
```c
// A:
void swap(int *a, int i, int j) {
  // a[i] <=> *(&a[i]) <=> *(&a[0] + i) <=> *(a + i)
  // via the definition of pointers & pointer arithmetic
  int temp = *(a + i);
  *(a + i) = *(a + j);
  *(a + j) = temp;
}
```

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 17. Dynamic Memory Allocation
## 17.1. `malloc()`
Q: How can we allocate memory (i.e. set the size) of an array if we don't know how many elements it will hold while we are writing the program? {.r}

A: Either...
- set an arbitrarily high array size
  - a waste of memory if left unused
- write code that allows us to allocate a specific size of memory (for an array) based on variable input using `malloc()` and `free`. {.lg}

**HEAP:** a large amount of pre-reserved memory that a program can use to store data that won't be until the program is running.
- examples of data that IS known before the program runs includes constants, int/double/char variables, and fixed arrays.

We can use the `malloc()` function to allocate memory for arrays:
```c
// remember
int *a = (int*) malloc(num_elements * sizeof(type))
// while 'malloc' return type is void* and is implicitly typecasted to whatever data type it is being assigned to, typecasting as int* is easier to understand
```
- Q: Do we need to initalize an array as `int a[1]` or any other low value before allocating memory using `malloc()`? {.lr}
- A: No; by running `int *a = malloc(...)`, we are effectively initializing the array as a pointer.  {.lg}

##  17.2. `free`

After we are done using an array with allocated memory, we should unallocate that memory in the heap so it can be used for other tasks.

To free memory allocated to a pointer, we pass that pointer as an argument to the `free()` function:
```c
int* a = malloc(...);
...
free(a); // don't need to input size, only pointer

// it is also good practice to reassign a freed pointer to 'NULL' to avoid nondeterministic run-time errors in the case the freed pointer is dereferenced
a = NULL;
```

When allocated memory is forgotten to be unallocated, **memory leaks** occur.

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 18. ***_MIDTERM PREP_***

<<<ADD PAST MIDTERM + TUTORIAL PROBLEMS TO A SEPARATE FILE>>>

Material prior to the midterm will NOT BE TESTED ON THE FINAL EXAM. {.lr}

Obviously, however, you are going to need to understand pre-midterm concepts in order to understand the concepts that will be tested on the final exam.

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 19. Intro to 2D Arrays
## 19.1. Initializing 2D Arrays
```c
//  arr[rows][cols] = { {row1}, {row2}, ...}
// where each row has 'cols' # of columns

// e.g.            2 rows 3 cols
int arr[2][3] = { {0, 0, 0},
                  {1, 1, 1} };
```

```c
// CANNOT INITIALIZE 2D ARRAY with a SINGLE VALUE
arr[3][4] = { 0 }; // COMPILE-TIME ERROR!

// ↓

// need to intialize 2D array via nexted 'for' loop
for (int i = 0; i < num_rows; i++) {
  for (j = 0; j < num_cols; j++) {
    arr[i][j] = ...;
  }
}
```

## 19.2. 2D Array Memory Addresses/Pointer Arithmetic
Q: How are 2D array values stored in memory addresses?
(i.e. how does pointer arithmetic work with 2D arrays) {.r}

A: 2D array values are in ROW-MAJOR ORDER (start at `arr[0][0]`, increment col in same row, then increment col). {.lg}

| 2D ARRAY VALUE | ADDRESS                                              |
| -------------- | ---------------------------------------------------- |
| `arr[i][j]`    | `arr + sizeof(TYPE) * (i * num_cols - j)` $^1$ {.lr} |
| ...            | ...                                                  |
| `arr[2][1]`    | `arr + sizeof(TYPE) * 7`                             |
| `arr[2][0]`    | `arr + sizeof(TYPE) * 6` -> row 2                    |
| `arr[1][2]`    | `arr + sizeof(TYPE) * 5`                             |
| `arr[1][1]`    | `arr + sizeof(TYPE) * 4`                             |
| `arr[1][0]`    | `arr + sizeof(TYPE) * 3` -> row 1                    |
| `arr[0][2]`    | `arr + sizeof(TYPE) * 2`                             |
| `arr[0][1]`    | `arr + sizeof(TYPE) * 1`                             |
| `arr[0][0]`    | `arr` -> row 0                                       |

$^1$Q: How can we find the address of any 2D array value if we know its row (`i`) and column (`j`)? {.r}

A: address of `arr[num_rows][num_cols]` = (address of `arr[0][0]`) `+ sizeof(TYPE) * (i * num_cols - j)` {.lg}

## 19.3. Passing 2D Arrays to Functions

### 19.3.1. Without Pointers
The C compiler only needs the number of columns of a 2D array when passed as a parameter to a function.

*NOTE: arrays (regardless of number of dimensions) are always passed to functions as pointers.*
```c
void func(int arr[ ][3]);
void func(int arr[2][3]); // row num is ignored by compiler
void func(int col, int arr[][col]); // can also input 'col' as a variable
```

### 19.3.2. Passing Multidimensional Arrays

We can initialize arrays of any number of dimensions:
```c
int a[1][2][3];     // 3D array
int b[1][2][3][4];  // 4D array
```

When we pass any multidimensional array to function, *the 1st dimension ('row') is always ignored if passed* but **ALL other dimensions MUST be passed**{.lr}:
```c
// e.g.
void func(int z[][2]);
void func(int a[][2][3]);
void func(int b[][2][3][4]);
```

### 19.3.3. With Pointers
When passed as a **DOUBLE pointer**, we can access each element normally via `arr[i][j]`:
```c
void func(int **arr) {
  for (row = 0; ...) {
    for (col = 0; ...) {
         arr[row][col] = ...;
      // arr[ i ][ j ] = ...;
    }
  }
}
```
Wwhen passed as a **SINGLE pointer**, we need to access each element by dereferencing the [specific address of each element](#192-2d-array-memory-addressespointer-arithmetic):

```c
void func(int *arr) {
  for (row = 0; ...) {
    for (col = 0; ...) {
         arr[row * num_cols + col] = ...;
      // arr[ i  * num_cols +  j ] = ...;
      // *(arr + i * num_cols + j) = ...;
    }
  }
}
```

## 19.4. Dereferencing 2D Arrays
A 2D array is basically just an array of pointers ('rows'), with each pointer pointing to the 1st element of its row (enabling traversal of 'columns' in each row).

Just like with 1D arrays, the identifier (`arr`) of a 2D array (`arr[2][3]`) is the address of `arr[0]` (`&arr[0]`).

```c
// points to first cell of first row
arr <=> &arr[0]
```
```c
// since each row is a 1D array, the identifier of the first cell of the first row ('arr[0]') is **ALSO AN ADDRESS** of the first cell of the first row
*arr <=> *&arr[0] <=> arr[0] // <=> &arr[0][0]
```
```c
// dereference first cell of first row of array
*arr[0] <=> *&arr[0][0] <=> arr[0][0]
```
```c
// since we have to dereference 'arr' twice to dereference the value in the first cell of the first row,
// we can simplify dereferencing using 2 '*'s:
**arr <=> arr[0][0]
```
*Remember that 2D array identifiers are also not pointer variables that can be assigned a different address.*{.lr}

---
PRACTICE:
1\. Find 3 consecutive horizontal '1's in a 6 x 6 array. {.p}
```c
int board[6][6] = ...;

// A:

```

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 20. 2D Arrays & Dynamic Memory Allocation

## 20.1. `malloc` for 2D Arrays

Q: How do we allocate memory for 2D arrays using `malloc`? {.r}

A:
1. First, allocate memory via `malloc` for the number of rows.  {.lg}
   ```c
   int **arr = (int**) malloc(sizeof(int*) * num_rows);
   ```

2. Then, allocate memory via `malloc` for the number of columns, iterating through each row. {.lg}
   ```c
   for (int row = 0; row < num_rows; row++) {
     arr[row] = (int*) malloc(sizeof(int) * num_cols);
     // <=> *(arr + i) = ...
   }
   ```

## 20.2. `free` for 2D Arrays

We cannot just run `free(arr);` for 2D arrays because that only frees memory for the pointers to the array of each row -> *the pointers to the first element of each row are lost, so we are unable to unallocate all the values of those arrays, resulting in a memory leak.*{.lr}

Instead, we need to iterate through each row and run `free()` on the pointer to each row:
```c
for (int row = 0; row < num_rows; row++) {
     free(arr[row]);
  // free(*(arr + row));
}
```

Dyamically allocated arrays can only be passed to functions as pointers:
```c
void func(int **arr);
void func(int *arr);
```
Remember that [passing as a double vs. single pointer means different methods must be used for dereferencing elements](#1933-with-pointers).

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 21. Strings

## 21.1. String == `char` array

Strings in C are null-terminated\* `char` arrays.
\*Null-terminated means the final element in each `char` array corresponding to a string is always the **null character** `'\0'`.

## 21.2. Initializing Strings

### 21.2.1. As `char` Arrays

We can initialize a string as a `char` array with `char` values OR with a **STRING CONSTANT**{.b}:
```c
char s[] = {'H','e','l','l','o',\'0'}; // remember to include null character at end
char s[] = "Hello"; // using string constant
char s[5] = "Hello"; // size input is ignored by compiler

// when size input is greater than characters required,
// compiler inserts '0's which are converted to null characters
char s[4] = "He"; // == {'H','e','\0','\0'};
```

Q: What happens if we initialize a `char` array without the null character at the end (e.g. `char s[] = {'H'}`)? {.r}

A: Without the null character, the compiler is unable to identify it as a string, so the array is just initialized as a `char` array. {.lg}

Q: What happens when we initialize a `char` array using a string constant? {.r}

A: The compiler basically creates a string constant in the call stack and then copies over each character to each element in the `char` array; the memory for the string constant is then unallocated and free to be used. {.lg}

### 21.2.2. As `char*` Pointers

The main thing to remember is the while `char` arrays and `char*` pointers are similar (e.g. identifier of `char` array is address of `arr[0]`), `char` arrays are *NOT*{.lr} pointers and so there are differences in initialization and memory allocation.

We can also initialize strings as `char*` pointers:
```c
char *s = "Hello";
```

Q: Is initializing a string as an array the same as initializing it as a pointer? {.r}
```c
char s[] = "Hello";
s[1] = 'E';

// is this the same as above?
char *p = "Hello";
p[1] = 'E';
```
A: **NO**{.lr} {.lg}
- `char s[] = "Hello"` initializes an array in the CALL STACK, so array values can be mutated via `s[i] = ...`
- `char *p = "Hello"` initializes an array in the GLOBAL VARS & CONSTANTS section of memory; `p` is a pointer to a literal STRING CONSTANT, so attempting to mutate any value of the array via `p[i] = ...` or `*(p+i) = ...` is an invalid access of memory (potential segmentation fault).
  - **Conversely, if `p` pointed to a `char` array in the call stack (e.g. `char *p = s`), then `p[i] = ...` would be legal because local variables in the call stack are being mutated.**{.lg}

  - Q: Does `s` in the code below end up pointing to the same string constant in the GLOBAL VARS & CONSTANTS section of memory? {.r}
  ```c
  char *p = "Hello";
  p = "Hello";
  ```
  - A: **NO**{.lr}; a second string constant is allocated in a different memory block of the GLOBAL VARS & CONSTANTS section and the address in the pointer just changes to point to that new second string constant. {.lg}

  - Q: Is the following code legal? {.lr}
  ```c
  char s[] = "Hello";
  s = "Hello";
  ```
  - A: **NO**{.lr}; `s` is not a pointer, it is just an address and we cannot change the value of its address. {.lg}

#### 21.2.2.1. Empty Strings

Since strings are `char` arrays with their end indicated by the null character `'\0'`, if the first element of a `char` array is the null character then the string is an EMPTY STRING `""`:
```c
char s[] = {\'0','H','e','l','l','o',\'0'}; // is same as '""'
```
Because every string in C is null-terminated, we don't need the size of the string's `char` array to iterate through its element without invalidly accessing memory; **we can just stop iterating when we reach an element with the null character:**
```c
char s[] = "Hello"; // same process for 'char s* = ...;'
for (int i = 0; s[i] != '\0'; i++) {
  ...
}
```

- Q: If we initalize a pointer pointing to the 2nd element of the `char` array `s[] = {\'0','H','e','l','l','o',\'0'}` above, what will happen? {.r}
- A: Because the C compiler only cares about the null character when terminating strings, this means that the pointer to the second value is basically pointing to string `"ello"`. {.lg}

- Q: What is the difference between `'\0` and `NULL`? {.lr}
- A: `'\0'` is a `char`-type constant with value `0`. `NULL` is a pointer-type constant with vlaue `0`. They are same value but different types. {.lg}

---
**PRACTICE:**
1\. What will happen when the following code is run? {.p}
```c
char *p = (char*) malloc(sizeof(char) * 6);
p[1] = 'e';
p = "Hello";
```
- A `char` array with memory for 6 elements is initialized by `malloc` in the **HEAP**. {.lg}
- The second element in the `char` array is changed to `'e'` (remember that the pointer to the second element is dereferenced: `p[1]` <=> `*&p[1]`). {.lg}
- *`p = "Hello"` creates a string constant in the GLOBAL VARS & CONSTANTS memory and changes the pointer `p` to point to that new constant.*{.lg}

  - *Because only the address assigned to the pointer has changed, the memory allocated using `malloc` has not been freed and is causing a memory leak.*{.lr}
  - To free the memory allocated by `malloc`, you can initialize a new pointer pointing to p (`char *p2 = p`), which allows us to free it (`free(p2)`) after changing the address assigned to `p`.

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 22. String I/O
## 22.1. `const` Characters & `const` Addresses

- `const char *s` <=> `char const *s` --- changeable address, constant char

PRACTICE:
1\. Will the following code run? {.p}
```c
// Q:
const char *s;
s = malloc(10);
s[0] = 'H';
```
A: **ERROR OCCURS**{.lr}; cannot change character that the pointer is pointing to because `const char *s` means the character initially assigned is a constant. {.lg}

- `char* const s` --- constant address, changeable char
- `const char* const s` --- both address & character are constant
  - `const char*` means character is constant
  - `const s` means pointer `s` is constant

## 22.2. String OUTPUT

- `printf("%s", s);` --> auto finds null terminating character in an input string
- `printf("%0.5s", s)` --> prints first 5 characters
- `puts(s)` ---> print string s with new line appended at end

## 22.3. String INPUT

### 22.3.1. `scanf`
`scanf("%s", s)` -- skips leading white space, reads before next white space
- e.g. for `"__Another_Example"`, input will be `"Another"`
- Q: what is the format for the variable s in `scanf`? {.r}
- A: `char *s = (char*) malloc(NUMBER OF CHARACTERS)` or `char s[6]`; {.lg}
- Q: what happens if input is larger than space in s? {.r}
- A: invalid access of memory; nondeterministic buffer overflow {.lg}

`scanf` is an unsafe function bc it doesnt check the size of the input before assigning it to a variable/pointer.

### 22.3.2. `fget(s)` & STRINGS (`char` ARRAYS) AS FUNCTION PARAMETERS

Q: so what is a safe string input function? {.r}

A: `gets(s)` and `fget(s)`. {.lg}
- `get(s)` reads entire string (inc. leading and nonleading white spaces) until it reaches new line character. *however, still have problem of memory*{.lr}
- `fgets(s, NUMBER OF CHARACTERS, stdin)`; gets string input from file, but bc we are using `stdin`, it will get input from user in terminal
  - e.g. `fgets(s, 6, stdin)` for `"__Another_Example"` will just get `"__Ano"` (6-1 = 5 characters bc last character is null character)
  - e.g. `fgets(s, sizeof(s), stdin)` -- auto allocates memory (since `char` just takes up 1 B, we don't need to put in `... * sizeof(char)` like we have to do for `int` which takes up 4 B)
  - NOTE: `sizeof(s)` only returns the valid number of characters (i.e. space taken up by the string/`char` array) only if string `s` is initialized as character array `char s[6]`, **NOT** character pointer using `malloc` (`char *s = (char*) malloc(6))`; because size of an address for a pointer is 8 B) {.lr}

**PRACTICE:**
1\. Will either of the lines of code below take in the right amount of characters into the function? {.p}
```c
// Q:
int f(char *s) {
  fgets(s, sizeof(s), stdin);
}

int f(char s[]) {
  fgets(s, sizeof(s), stdin);
}
```
**No.**{.r} *`sizeof(s)` does not return the correct number of characters in the string if `s` is initialized as a character pointer.*{.lg} Since the array is being passed to a function, it is passed as a pointer (function parameters `s*` and `s[]` are equivalent to the compiler), so both lines of code have the wrong number of characters.
- To take in the correct number of characters (i.e. prevent invalid access of memory); we need to add `int size` as a parameter to the function (`f(char *s, int size)`). {.lg}

2\. Write your own function that takes safe string input. {.p}
```c
// A:
// 'getchar()' -- returns character entered by user

// could also be void
char* getStringSafely(char *s, int size) {
  int i = 0;
  char c;

  while (i < size - 1 && // size - 1 to leave 1 space for null character
    (c = getchar()) != '\n') // stop taking input after new line; REMEMBER you can call functions & assign variables in loop headers {
      s[i] = c;
      i++;
    }
  s[i] = '\0';
  return s;
}
```
Because we are returning a char array pointer char *s, we can easily print out the input string: {.lg}
```c
int main(void) {
  char s[6];
  printf("%s", getStringSafely(s, s[6]));
}
```

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 23. More on Strings & String Library Functions

## 23.1. Small Details of Printing Strings

Q: What will be printed for the code below? {.lr}
```c
// Q:
char *s = "Sample";

printf("%s", s);
printf("%s", s + 2);
```
```c
// A:
Sample
mple
```
A: ala pointer arithmetic, `s+2` points to the third cell in the array, and since strings are printed by iterating through a char array until null character is reached, printing `s+i` will just print string `s` starting from the `i`th cell to the end. {.lg}

Q: How do you print a single character in a string? {.lr}

A: String <=> `char` array, so can just dereference first cell of array {.lg}
- `s[0]` <=> `*(s+0)` <=> `*s` --> 1st character of string
- `s[2]` <=> `*(s+2)` --> (1st+2=) 3rd character of string

Q: What is the value of `*s + 2` if `char *s = "Sample";`? {.r}

A: Dereference operator `*` has higher precedence +/-, so the code will run as: `(*s) + 2` => `'S' + 2` => `'U'`{.lg}

## 23.2. String Library Functions

```c
#include <string.h> // string library
```

## 23.3. `strlen()`
```c
int strlen(const char *s) // returns string length

// 'const char *s' is used whenever we want to ensure that a function does not modify the input string or character
```

**PRACTICE:**
1\. a) Write your own implementation of `strlen().` {.p}
```c
// STRATEGY
// get each char & count++ until '\n' or '\0'

// A:
int strLength(const char *s) {
  int size = 0;
  // 's[size]' <=> '*(s+i)'
  while (s[size] != '\0') {  // OR 'while (s[size])' bc value of '\0' is 0 <=> false
    size++;
  }
  return size;
}
```

b) Rewrite your implementation of `strlen()` _***using pointer arithmetic.***_ {.p}

```c
int strLength_PointerArithmetic(const char *s) {
  // REMEMBER: 'const char *t' means constant char, changeable address
  const char *t = s;
  while (*t != '\0') {
    t++; // works via pointer arithmetic

    // 't' <=> 't + 0' <=> '&t + 0'
    // 't + i' <=> '&t + i' (pointer arithmetic takes 't' to take next cell)
    // 't[i]' <=> '*(t + i)'
  }
  return t-s; // at end, t points to last cell, s points to first cell,
  // so number of cells = last - first
}
```

## 23.4. `strcpy()`
```c
char* strcpy(char* dest, char* src);
// could have been 'void' bc we are just manipulating pointers
// returns string pointer via 'char*' return type for convenience
```

**PRACTICE:**
1\. a) Write your own implementation of `strcpy().` {.p}
```c
// STRATEGY:
// iterate through each char of 'src' and assign to current index of 'dest'

char* strCopy(char* dest, char* src) {
  int i = 0;
  while (src[i] != '\0') {
    src[i] = dest[i];
  }
  dest[i] = '\0'; // add null character bc loop is exited before \0 can be added
  return dest;
}
```

b) Rewrite your implementation of `strcpy().` _***using pointer arithmetic***_ {.p}
```c
// A:
char* strCopy_PointerArithmetic(char* dest, char* src) {
  // for returning pointer to `dest` string by returning address of first character
  char *t = dest;

  while (*src != '\0') {
    *dest = *src;
    src++;
    dest++;
  }

  *dest = '\0';

  ----return dest;---- // WRONG bc dest is now last character of string
  return t; // need to return first character of dest
}
```
```c
// we could also write:

// same as 'while ((*dest = *src))'
while ((*dest = *src) != '\0') { // first assignment happens, then logic evaluation
  dest++;
  src++;
}
return t;


// or:

while ((*dest++ = *src++)) {} // first dereference, then assignment, then increment via pointer arithmetic
return t;
```

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 24. More String Library Functions
## 24.1. `strncpy()`

**PROBLEM:**{.lr} `char* strcpy(char *dest, const char *src)` is an unsafe function (because if `src` has more memory allocated to it than `dest`, then buffer overflow will occur when running `strcpy(dest, src)`).
**SOLUTION:**{.lg} use `char* strcpy(char *dest, const char *src, int n)`; allocates first `n` characters of `src` to `dest`.
```c
char* strcpy(char *dest, const char *src, int n);
```
```c
// e.g.

// if     'n' == number of characters in 'src' + 1...
// then   copy 'src' into 'dest' AND add null character at end

char s[6];
strncpy(s, "Hello", 6);
strncpy(s, "Hello", sizeof("Hello")); // same as above
strncpy(s, "Hello", sizeof(s)); // same as above

// if     'n' == number of characters in 'src'...
// then   copy 'src' into 'dest'; null character is NOT ADDED at end

char s[6] = "hELLOWorld";
strncpy(s, "Hello", 5);
// s is now "HelloWorld"
// bc null character is not added, only the first n characters are replaced
```

**PRACTICE:**
1\. a) Write your own implementation of `strncpy().` {.p}
```c
// A:
char* strn_Copy(char* dest, const char* src, size_t/int n); {
  for (int i = 0; i < n && (dest[i] = src[i]) != '\0'; i++) {
    ; // do everything in header, so no actual code in loop
  }
  return dest;
}
```

## 24.2. `strcat()` / `strcat()`
```c
// concatenates 'src' string to end of 'dest'
char* strcat(char* dest, const char* src);
char* strcat(char* dest, const char* src, size_t/int n); // n is number of char to append
```
```c
// e.g.

// 'a' needs 5 spaces to hold all characters from 'a' and 'b'
char a[5] = "Ab"; // 2 char for 'a'
char *b = "Cd";   // 2 char for 'b' + 1 null character

strcat(a, b); // a is now "AbCd!"
```

## 24.3. `strcmp()` / `strncmp()`
```c
int strcmp(const char *a, const char *b);
int strcmp(const char *a, const char *b, size_t/int n); // compares first n characters of each string
```
```c
// if      strcmp(a, b) < 0
// then    a precedes b

// if      strcmp(a, b) > 0
// then    b precedes a

// if      strcmp(a, b) == 0
// then    a and b are same string
```
Q: How are strings compared? {.r}

A: via ASCII values of characters. {.lg}
- e.g. "ab" precedes "bc"
- e.g. "Ab" precedes "ab"
  - NOTE: null character '\0' ASCII value is 0
  - e.g. "abc" precedes "abca" bc null character (0) comes before any other ASCII value
  - e.g. "Abcd" precedes "abc" bc comparison always starts from first character and then goes to next character if if both characters are the same

Q: Why can't we just use `s1 == s2` to compare strings? {.r}

A: for a string, `s1` <=> `&s2`, so by `s1 == s2` we are comparing the addresses of the char pointers, **NOT the string characters.**{.lr} {.lg}

## 24.4. `atoi()` / `atof()`
```c
int atoi(const char *s); // converts string (ASCII) to int
// e.g. atoi("314") = (int) 314;

int atof(const char *s); // converts string (ASCII) to double
// e.g. atof("3.14") = (double) 3.14;
```

## 24.5. `strchr()`
```c
char* int strchr(const char* str, char chr);
// returns pointer to address of string/character array 'str' with FIRST OCCURENCE of 'chr'
// if 'chr' not found, returns null character
```
```c
// e.g.
char* s = "Hello";
strchr(s, 'e'); // returns &s[1]

printf("%s", strchr(s, 'e')); // prints "ello" bc C reads strings until null character
```

**PRACTICE:**
1\. a) Write a function that prints the index of each occurence of a character in a string (using `strchr()`). {.p}
```c
// A:
void charOccurences(const char* str, char chr) {
  char *p = strchr(s, chr);

  while (p != '\0') {
    printf("%d", p - s);

    // p points to address of occurence
    // s points to address of first character

    // p - s is current index of array
    // (e.g. if s is first char, then p - s == 0)
  }
}
```

## 24.6. `strstr()`
```c
char* strstr(const char *s1, const char *s2);
// finds FIRST OCCURRENCE of string 's2' in string 's1'
// returns pointer to address of FIRST CHARACTER of 's2' in 's1'
```

**PRACTICE:**
1\. a) Write your own implementation of `strstr().` {.p}
```c
// STRATEGY:
// starting at index 0 and ending at index 'n - strlen(s2)',
// iterate through each index i of 's1' and compare substring of size 'len_s2' to 's2'
// use `strncmp()` to compare string 's2' to each substring of 's1'

// A:
char *p = s1;
while (*p != '\0' && strncmp(p, s2, strlen(s2)) != 0) {
  p++;
}

if (*p == '\0') {
  return NULL;
}

return p;
```

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 25. 2D Arrays of Strings

While we can have 2D `char` arrays for strings, it is inefficient to do so if strings have different sizes because the same space is allocated for each subarray.
```c
// 10 because longest month (September) needs 9 characters + 1 for null char
char months[][10] = {"January",
                     "February",
                     ...,
                     "December"};
```
Instead, we can use an **array of pointers**, and set the pointer at each index to be a string constant.
This way, each string "in" the array only as much space as required to store it (in GLOBAL VARS & CONSTANTS) and we can easily change what the string at each index in the array by simply pointing to a different address.
```c
char *months[12];
months[0] = "January";
// OR
char *months[10] = {"January",
                   "February",
                   ...,
                   "December"};
```

Q: Can we change the string values for both initializing as a 2D string array and as an array of pointers? {.r}

A: **NO**{.r}: a 2D `char` array stores each string as characters in an array (which we can alter), but an array of pointers points to literal string constants stored in the GLOBAL VARS & CONSTANTS section of memory. {.lg}

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 26. RECURSION

**Recursion** (divide-and-conquer) -- break down ("divide") a bigger problem into smaller problems until they are small enough to be solved easily ("conquer") and then combine solutions of smaller problems to form solution to bigger problem.

EXAMPLE: Write a function for factorial using recursion. {.r}
```c
// non-recursive implementation
int factorial(int n) {
  int f = 1;
  for (int i = 1; i <= n; i++) {
    f *= i;
  }
  return f;
}
```
We know that $n! = n * (n - 1)!$. Thus, we can recursively call the factorial function, eliminating the `for` loop and explicit storing of variables.
```c
// RECURSIVE implementation
int factorial(int n) {
  // base case
  if (n == 0) {
    return 0;
  }
  // recursive call
  return n * factorial(n - 1);

  // e.g. 4! = 4 * 3! = 4 * (3 * 2!) =  4 * (3 * (2 * 1!)) = 4 * (3 * (2 * (1 * 0!)))
  // '0!' is base case for factorial, and need to explicitly return 1
}
```
- Q: What is the ***base case?*** {.r}
- A: The base case is the (simplest) case when for the recursion should stop and the solution should be computed/combined. For factorial, this is when n equals 0 for n!. {.lg}

Q: How does the program store the return values of recursively called functions? {.r}
A: Each time a function is called, a new *frame* for the function is created in memory, with each frame having its own variables. {.lg}

Recursion is typically suboptimal because it consumes stack by:
- taking up time to call each function
- taking up space
- can cause stack overflow if problem is too big

**PRACTICE:**
1\. a) Write a recursive function for the piecewise function f(x) = { 2f(n-1) + 1 for n > 0 AND = { 3 for n = 0. {.p}
```c
// A:
int f(int n) {
  // base case
  if (n == 0) {
    return 3;
  }
  return 2 * f(n - 1) + 1;
}
```

2\. a) Write a recursive function that prints a row of asterisks. {.p}
```c
// A:
void printRow(int n) {
  // base case --  stop printing at row 0
  if (n <= 0) {
    printf("\n");
  } else {
    printf("*");
    printRow(n - 1);
  }
  return;
}
```
- Q: What would happen if we switched the 2 following lines of code around as seen below? {.r}
  ```c
  ...
  printRow(n - 1);  // previously 'printf("*");'
  printf("*");      // previously 'printRow(n - 1);'
  ...
  ```
- A: In our initial answer, we printed '*' before each function call so that when the base case was reached, the function call for the base case returned, which then allowed the second-last function call to return, and so on and so forth until the parent function call was returned (`void` return type, so its just exiting the functions).
- By switching the lines around, now we call each function, and then only backtrack and print '*' from each function call AFTER the base case has returned. {.lg}

b) Using your `printRow()` function, write a recursive function that prints a half triangle. {.p}
```c
// ?
****
***
**
*
```
```c
// A:

// STRATEGY:
// first print the row with the most stars,
// then recursively print the row with ...-1 stars

void printTriangle(int n) {
  if (n > 0) {
    printRow(n);
    printTriangle(n - 1);
  }
  // base case -- n <= 0 (nothing happens, so we can just return)
  return;
}
```

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 27. Advanced RECURSION
## 27.1. Using Backtracking

Q: How can we print an inverted half triangle (opposite of practice question 2. b) in last lecture)? {.lr}
```c
// ?
*
**
***
****
```
A: use backtracking to our advantage; recursively call each function BEFORE printing row n; when we reach base case (n < 0), function calls will return starting by printing `printRow(1)`, then `printRow(1+1)`, then `printRow((1+1)+1)`, ... until `printRow(n-1)`, and finally `printRow(n)`. {.lg}
```c
// A:
void printTriangle(int n) {
  if (n > 0) {
    printTriangle(n - 1);
    printRow(n);
  }
  // don't need else bc if statement in parent function call is only reached
  // AFTER all interior function calls have returned
  return;
}
```

Q: How can we print a normal AND an inverted half triangle (see below)? {.lr}
```c
// ?
****
***
**
*
**
***
****
```
A: our base case is n = 1 (only print 1 star); **we can use backtracking by combining both types of recursively calling functions from the past 2 questions:** {.lg}
```c
// A:
void printTriangles(int n) {
  if (n == 1) {
    printRow(1);
  } else {
    printRow(n);
    printTriangles(n - 1);
    printRow(n);
  }
  return;
}
```
- After the first `printRow(n)`, each time `printTriangles()` is called it runs `printRow()` and then recursively calls `printTriangles()` on and on (printing the upper inverted half triangle) until the base case. {.lg}
- After printing out a row of 1 star at the base case, all the functions now backtrack, so the deepest function call now runs `printRow(2)` *(because `printTriangle(2-1)` is the base case where n = 2-1 = 1)*{.lr}, and then `printRow(3)`, and so on and so forth until `printRow(n)`, at which the parent function finally exits the if statement and returns. {.lg}

- Q: Will the program be identical if we replaced the base case to be at n == 0 with the following code below? {.r}
  ```c
  // ?
  if (n == 0) {
    return;
  }
  ```
- A: **NO**{.r}; this will result in two calls to `printRow(1)`, which means 2 rows of 1 star will be printed. **Consider the base case carefully when writing recursive functions.**{.r} {.lg}

## 27.2. Multiple Base Cases

Q: How should you go about writing a recursive function for: {.r}
```c
double power(double x, int n); // ?
```

A: find all relevant base cases and recursive cases, and then implement via code. {.lg}

**RECURSIVE CASE:**
- inefficient but simple/obvious: $x^n = x * x^(n - 1)$
- more efficient but also more complex
  - $x^n = x^{n/2} \cdot x^{n/2}$ if `n % 2 == 0` (even #s)
  - $x^n = x^{n/2} \cdot x^{n/2} \cdot x$ if `n % 2 != 0` (odd #s)

**BASE CASE(S):**
- **n = 0** ($x^n = x^0$) => `return 1`
- **n < 0** ($x^n = x^{-n}$) => return $1 / x^n$
  - Q: Why is this not a recursive case? {.r}
  - A: Because this does not reduce the size of the problem we are trying to solve (i.e. is not diivide-and-conquer). We still have to run through the same number of steps (just with a different process for each step). {.lg}
  - Because $x^{-n} = 1 / x^n$, we can use backtracking and simply run `return 1.0 / power(x, -n)`, allowing the rest of our function to remain unchanged.
- **x = 0** => `return 0` if `n != 0` AND ERROR if `n == 0`;

**IMPLEMENTATION:**
```c
// A:
double power(double x, int n) {
  // BASE CASES
  if (x == 0) {
    if (n == 0) { // 0^0 = undefiend
      printf("ERROR");
      return 0;
    } else { // 0^n = 1 if n != 0
      return 0;
    }
  }
  if (n < 0) {
    return 1.0 / power(x, -n);
  }
  if (n == 0) {
    return 1.0;
  }
  // remember to use double constants in arithmetic expressions!

  // RECURSIVE CASE -- inefficient
  // return x * power(x, n - 1);

  // RECURSIVE CASE -- efficient
  if (n % 2 == 0) {
    return power(x, n/2) * power(x, n/2);
  } else {
    return power(x, n/2) * power(x, n/2) * x;
  }
}
```

## 27.3. Storing Repeated Function Calls
While our `power()` function does work, when we track all the function calls for a single parent call, we see that *we call the same function multiple times (as a result of calling `power(x, n/2)` twice per function call).*{.lr}
```
// #        indicates when each function call occurred
// # -> #   indicates which function is called after return value

power(2,5) // 1
├── power(2,2) // 2 -> 6
│   └── power(2,1) // 3 -> 2
│       ├── power(2,0) // 4 -> 3*
│       └── power(2,0) // 5 -> 3*
└── power(2,2) // 6
    └── power(2,1) // 7 -> 6
        ├── power(2,0) // 8 -> 7*
        └── power(2,0) // 9 -> 7*

*after returning first `power(2,0)`, go back to current parent function call and call second `power(2,0)` in statement
```

Since we are calling the same function (that will return the same value) multiple times, we can **save function values in a temporary variable and simply return that when the function call is repeated.**
```c
// STORING FUNCTION RETURNS

// base cases stay the same
...
if (n % 2 == 0) {
  double temp = power(x, n/2);
  return temp * temp;
} else {
  double temp = power(x, n/2);
  return temp * temp * x;
}
```

Q: Is it a good idea to further divide x (e.g. by 3, 10, etc.) in order to make our function faster? {.lr}

A: Unless speed is critical, NO, because that would mean we need to add more base cases that would increase complexity of our code and would only marginally increase the speed. {.lg}

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 28. RECURSION With Strings

*Note:* final exam recursion problems commonly involve strings (instead of more complex problems like Tower of Hanoi or Chess Knights).

Q: How can we write a recursive function for.. {.r}
```c
bool isPalindrome(char *s) // ?
```

**BASE CASE(S):**
- empty string (`""`) -- `return true`
- one character (`"a"`) --  `return true`

**RECURSIVE CASE:**

Consider the string `"racecar"`.
- Q: What is next smallest problem we can solve? {.r}
- A: string w/o first and last characters -- "~~r~~`aceca`~~r~~" {.lg}

- Q: How do we solve each subproblem? {.r}
- *A: Consider first and last character of each string. If they are the same, then check palindrome for substring.*{.lg}

**IMPLEMENTATION:**

- Q: How can we get the substring w/o first & last characters of string? {.r}
- While we could use `malloc()` and `strcpy()` to another string, this is really inefficient.
- *A: Instead, use variables `int low` and `int high` to store the index of the first and last character of each substring.*{.lg}

  - Q: Can we just use variables `int low, high` in our function? {.r}
  - A: **NO**{.r}; if we just run the following code... {.lg}
  ```c
  // ?
  bool isPalindrome(char *s) {
    int low = 0;
    int high = strlen(s) - 1;
    ... // recursive case
    low++;
    high--;
    return isPalindrome(SUBSTRING);
  }
  ```
  - ...the values of low and high reset to that for base string for each function call. {.lr}
  - Instead, we need to have `low` and `high` be parameters to the function such that we are able to manipulate them when calling subfunctions: {.lg}
  ```c
  // values that need to be remembered between function calls MUST be passed as function parameters

  bool isPalindrome(char *s, int low, int high) {
    ... // recursive case
    return isPalindrome(SUBSTRING, low + 1, high - 1);
  }
  ```

***ANY VALUES THAT NEED TO BE REMEMBERED IN RECURSIVE CASE NEED TO BE PASSED AS PARAMETERS TO THE FUNCTION!***

- *Q: What is the condition where the base case (single character) returns `true`/`false`?*{.r}
  - Q: Can it be `if (strlen(s) == 0)`? {.lr}
  - A: **NO**{.lr}; because we are calling recursively, we cannot find the length of the current substring.
- A: We need to use our `low` and `high` variables. That leaves us with 2 possible cases: {.lg}
  - if in a function call `low > high`, then parent string has even length.
    - Since this point is only reached if the current parent string of 2 characters has the same first and last character (e.g. `"aa"`), we **only need to consider how to `return true` when `low` is greater than `high`.**{.g}
  - If in a function call `low == high`, then the parent string has odd length and current substring is just a single character.
    - Since **a single character is palindromic and this point is only reached when all parent strings have the same first and last characters**{.g}, this means we can `return true`.
  - We can combine the two conditions when base case is true as `!(low < high)
  ```c
  // A:
  bool isPalindrome(char *s, int low, int high) {
    if (!(low < high)) {
      return true;
    }
    ...
  }
  ```
- Q: What is the condition where the RECURSIVE CASE returns `true`/`false`? {.r}
- A: we can just return false if the first character is not equal to the last character; if they are equal, simply recursively call the function (when base case is reached, function will return true)... {.lg}
  ```c
  // A:
  bool isPalindrome(char *s, int low, int high) {
    // BASE CASE
    if (!(low < high)) {
      return true;
    }

    // RECURSIVE CASE
    if (s[low] != s[high]) {
      return false;
    } else { // recursively call until base case (true) or returned false
      return isPalindrome(s, low + 1, high - 1);
    }
  }
  ```

### 28.0.1. Helper Functions
Since it can be inconvenient to call a function with multiple arguments, it is better to consolidate our actual function (with all the required arguments) into a helper function that only takes the string as an argument.
```c
bool isPalindrome(char *s) {
  isPalindromeHelper(s, 0, strlen(s) - 1);
  // extrapolate other parameters from single parameter
}

bool isPalindromeHelper(char *s, int low, int high) {
  ... // actual function implementation
}
```
**PRACTICE:**
1. ***(FINAL EXAM 2018, Q14)*** --- Write a recursive function for `strchr()` (take a string and a character and return index of 1st occurrence of character in string). {.p}
```c
// function prototype
int recursiveFindIndex(char *str, char c) {
  // ?
}
```
STEPS: consider examples -> determine base cases & recursive call -> implement base cases & recursive calls. {.lg}

**EXAMPLE:**
- `str`: `"apple\0"`
- `c`: `'l'`
- returns: 4

**RECURSIVE CALL:**
- first, we check if the first letter of the current string is required character.
- If not, smaller problem is to look at remaining substring from current position to end (e.g. `"pple\0"`).

**BASE CASE:**
- when we find character --- return current index
- have reached end of string & have not found character

**IMPLEMENTATION:**
```c
// A:

// remember to consolidate with helper function that has actual arguments and abstract function with single argument!

int recursiveFindIndexHelper(char *str, char c, int index) {
  // BASE CASES
  // c is found
  if (str[index] == c) {
    return index;

  // reached string end & c is not found
  } else if (str[index] == '\0') {
    return -1;

  // RECURSIVE CALL
  } else {
    // c not found,
    // but not yet end of string, so increment index
    index++;
    return recursiveFindIndexHelper(str, c, index);
  }
}

// abstract function with single argument
int recursiveFindIndex(char *str, char c) {
  // start at index 0
  return recursiveFindIndexHelper(str, c, 0);
}
```

2. Write a recursive function that counts the number of odd numbers in an array. {.p}

EXAMPLE:
- arr: `[3,2,1]`
- returns: 3

RECURSIVE CALL:
- check if `arr[i]` at first index is odd, then add to count of odd numbers in rest of array.
  - since `true == 1` and `false == 0`, we can just add the function calls.
- use `low`/`left` and `high`/`right` variables to signify current and end indices.
- number is odd if `num % 2 == 1) is true.

BASE CASE:
- reached end of array
- only need to see if number is odd and add to count (just return int of whether number is odd)

e.g.
- arr: `[3,2,1]`
- INITIAL (1ST) CALL
  - left = 0, right = 2
  - `return (arr[left] % 2 == 1) + recursiveOddCount(arr, left + 1, right);`
- 2ND CALL:
  - left = 1, right = 2
  - `return (arr[left] % 2 == 1) + recursiveOddCount(arr, left + 1, right);`
- 3RD CALL:
  - left = 2, right = 2
  - only `return (arr[left] % 2 == 1)`

```c
// remember strings need to be taken as pointers!

int recursiveOddCountHelper(int *arr, int left, int left, int right) {
  // BASE CASE

  // reached end of array
  if (right == left) {
    return (arr[left] % 2 == 1);

  // RECURSIVE CALL

  // add whether current odd number to count
  } else {
    return (arr[left] % 2 == 1) + recursiveOddCountHelper(arr, left + 1, right);
  }
}
```
<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 29. STRUCTURES

*Sidenote: sections 28. and 29. occurred in the same lecture and were split up for organization. Each section N from 29. onwards corresponds to the lecture number N-1 (e.g. 31 -> LEC 30).*

## 29.1. Structures
 Arrays allow us to define variables that can hold several data items of the type.

 **STRUCTURES** all us to hold several data items of different types.
### 29.1.1. Declaring `struct`
We can initialize `struct` variables...:
1. ...in `main()`
2. ...in the `struct` definition
 ```c
// e.g. to represent info about a warehouse item in a database
struct entry { // struct name is called a 'tag'
int quantity;
char size;
char area[5];

}; // nothing before semicolon means we are not declaring any variables of the 'entry' struct type

// vs.

} item1, item2, items[100]; // declare variables of type struct here
// can access globally

int main() {
  // declare variables of struct type in main()
  struct entry item3, item4, items2[100];

  ...

  // can access struct variables via 'member operators':
  item1.quantity = 7;
  strcpy(items[3].area, "AnItem");

  return 0;
}
```
### 29.1.2. `typedef`

Instead of writing `struct entry` every time to intialize a new struct variable of this type, we can use `typedef` to set a custom name for this combined type:
```c
// typedef [old type] [new type]
struct entry {
  ...
}

typedef struct entry Entry;
```
```c
// another way of using typedef for structs
typedef struct entry {
  ...
} Entry;
```

We can also use `typedef` to make working with primitives easier:
```c
// e.g. custom unsigned int for non-negative variables
typedef unsigned int size_t
```
```c
// e.g. custom int pointer
typedef int* int_pointer
```

### 29.1.3. Initializing `struct` Variables
```c
// suppose we had a struct for a date:
typedef struct date {
  int year, month, day;
} Date;

// we can declare and initialize the data within the struct by:
Date date_variable = {1867, 12, 30};
```

## 29.2. Member Access Operators

Can access variables inside structs using...
1. ...dot-syntax on variable:
```c
date_variable.year = 2022;
```

2. ...dot-syntax on dereferneced pointer (pointing to struct <tag> variable):
```c
Date *p = &date_variable;
(*p).year = 2000;
```

3. ...arrow syntax on pointer to struct <tag> variable:
```c
Date *p = &date_variable;
p -> year = 1862;
```
- Instead of using ampersand to assign address to pointer, we can also use `malloc()` (so we can free the memory later on):
  ```c
  p = (Date*) malloc(sizeof(Date));
  ...
  free(p);
  ```

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 30. LINKED LISTS
## 30.1. Why use a Linked List?

Problems with arrays:
- can't insert an element in middle of array without shifting all elements to the right
- can't delete an element without shifting all elements to the left
- can't insert elements without creating a new array and copying elements

Solution: use **LINKED LIST**
- dynamically allocated data structure
- can easily change/add/delete elements

## 30.2. Linked List Interface

**Interface** --- collection of functions for our data structure.
- It is a good idea to separate function interface from implementation such that changes in implementation do not affect older code using the same interface.

*Interface for Linked List:*
- create a new empty list
- insert element into list
  - beginning
  - end
  - middle
- delete element from list
  - beginning
  - end
  - middle
- search for element
- delete all elements
- print all elements
- ...

## 30.3. Abstract Description of How a Linked List Works

We can think of a linked list as a series of nodes (can store a single data type or multiple) that point to the cell after it.
- First cell is called 'head'
- Last cell is called 'tail'
```c
head -> [] -> [] -> [] -> [] -> [tail] -> NULL
```

## 30.4. Implementing Linked Lists (0/3)
```c
typdef struct node {
  int data; // can add multiple data types
  struct node *next; // pointer pointing to next node
} Node;
```

Q: How can we create a new empty linked list? {.lr}

A: Since the last (tail) node in a linked list points to NULL, we can easily and memory-efficiently declare a new linked list simply by pointing head to NULL: {.lg}
```c
// A:
head [] -> NULL
```

Q: How can we insert a new node in a linked list? {.lr}

A: We can simply point the `*next` pointer of the previous node to the inserted node and point the `*next` pointer of the current node to the node that the previous one pointed to. {.lg}

## 30.5. Problems with Linked Lists

1. **Random access** --- while we can easily access any element in an array with the given index, in linked lists we need to traverse through multiple nodes (which can be slow).
2. Storing pointers in memory (is minor problem) --- with singly linked lists, each node needs a pointer to the next node which takes up memory. Ultimately, this is worth the tradeoff for speed when inserting/deleting nodes.

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 31. Implmenting Linked Lists (1/3)
## 31.1. `struct` Node
0. We have already defined the node struct for our linked list:
```c
typedef struct node {
  int data;
  struct node *next;
} Node;
```
Q: Is the following replacement code valid? {.r}
```c
struct node next; // a) ?
// OR
Node *next; // b) ?
```
A: *a) causes compile-time error* because it results in never-ending recursion in allocating space for a node. *b) causes compile-time error* because alias 'Node' does not exist within the struct definition. {.lg}

## 31.2. `createNode()`
1. Write a function for our linked list interface to create a node: {.lr}
```c
// A:
Node* createNode(int data) {
  Node* newNode = malloc(sizeof(Node));
  if (newNode != NULL) { // only assign data if memory is available to avoid segmentation faults
    newNode -> data = data;
    // same as (*newNode).data = data;
    newNode -> next = NULL; // initialize next node to NULL bc its not in a linked list yet
    return newNode;
  }
}
```

### 31.2.1. Manually Initializing Head & Adding Nodes
Now, we can separately initialize the `head` pointer of our linked list (in `main()` for now) to NULL:
- *Just like with arrays, we only need a pointer to the first element because we can get to any other element by traversing through the list.*
```c
int main() {
  Node *head = NULL;
  ...
}
```

Now that we can create nodes and have initialized our head pointer, we can start (manually) adding nodes to our linked list: {.lr}
```c
// set head to a new node
*head = createNode(0);
// head -> [0] -> NULL

// add nodes to head
head -> next = createNode(1);
// head -> [0] -> [1] -> NULL
head -> next -> next = createNode(2);
// head -> [0] -> [1] -> [2] -> NULL
head -> next -> next = createNode(3);
// head -> [0] -> [1] -> [2] -> [3] -> NULL
```
Q: Do we need to assign to `head` using the dereference operator? {.r}

A: YES! If we just use `head = createNode(0)`, we are entirely reassigning head and lose access to the past node (causing memory leak). {.lg}

## 31.3. `insertAtFront()`

Manually adding nodes is inefficient and unscaleable; instead let's...

1. ...write a function to insert a node at the front of a linked list (later, we'll look at inserting at the end): {.lr}
```c
// return true/false in the event that we cannot insert
bool insertAtFront(Node **head, int data) {
  // head is a already a pointer, so we need to have a double pointer be our function argument in order to actually change the address of head in the program
  // recall not using pointers in our swap() function

  Node *newNode = createNode(data);
  // avoid segmentation fault by not invalidly accessing memory because none is available
  if (newNode == NULL) {
    return false;
  }

  // make newNode point to the node that head is currently pointing to
  newNode -> next = *head;
  // make head now point to newNode
  *head = newNode;

  // have inserted, so return true
  return true;
}
```
Q: Can we switch the two lines of code changing the pointer addresses for the nodes (as below)? {.r}
```c
// ?
*head = newNode;          // previously ↓
newNode -> next = *head;  // previously ↑
```
A: NO; if we point head to the newNode first, we are unable to point the newNode next pointer to the node that head was originally pointing to! {.lg}

### 31.3.1. Manually Initializing Head & Adding Nodes via `insertAtFront()`
Now, we can create a linked list from NULL again using our insert-at-beginning function: {.lr}
```c
Node *head = NULL;
insertAtFront(&head, 1); // need to use '&head' bc head parameter is a double pointer
// head -> [1]
insertAtFront(&head, 2);
// head -> [2] -> [1]
```

## 31.4. `struct linkedList`

Instead of manually initializing a Node pointer for the head, we can...

3. **...write a struct for a linked list containing the head pointer:**
```c
struct linkedList {
  Node *head = NULL;
} LinkedList;
```

### 31.4.1. Initializing Head & Adding Nodes to our linkedList `struct`

Now, we can change the parameter of our insertAtFront() function to take in a pointer to the linked list data type and get the head from there:
```c
// previously '**head'
bool insertAtFront(LinkedList *list, int data) {
  if (newNode == NULL) {
    return false;
  }

  newNode -> next = list -> head; // point next to pointer to head of list
  list -> head = newNode // point head of list to newNode
}
```

With our linked list struct, we can more explcitly create linked lists in our programs:
```c
LinkedList list;
// 'list -> head = NULL' is not needed bc head is already NULL

insertAtFront(&list, 1);
// head -> [1]
insertAtFront(&list, 2);
// head -> [2] -> [1]
```

Finally, we've abstracted away any refernece to the head in the interface, which is good because it means we don't need to understand the implementation in order to use the linked list interface (just like real-life APIs)!


<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 32. Implementing Linked Lists (2/3)
## 32.1. `initList()`

Suppose we needed to reset a linkedlist. Right now, we have to point head of a linked list to NULL in main(). Instead, we can...

4. ...write a function that initializes a new linkedlist (taking an input of list pointer): {.lr}
```c
// A:
void initList(LinkedList *list) {
  list -> head = NULL;
}
```

## 32.2. `isEmpty()`
5. Write a function to check if a linked list is empty (i.e. head points to null). {.lr}
```c
// A:
void isEmpty(LinkedList *list) {
  return (list -> head == NULL);
}
```

For final exams, NEVER assume a linked list input is never empty; empty linked lists are often edge cases you need to consider. {.r}

## 32.3. `printList()`
6. Write a function to print each node of a linked list in order. {.lr}

```c
void printList(LinkedLIst *list) {
  // A:

  // create current node pointer to head
  Node *curr = list -> head;

  while (curr != NULL) {
    // print data of current node
    printf("%d\n", curr -> data);

    // point current node pointer to next node
    curr = curr -> next;
  }
}

```

## 32.4. `findFirstNodeSearch()`
7. Write a function to find the first node that matches search data. {.lr}
```c
// iterate through each node starting at head
// want to RETURN the NODE that matches search data

Node* findFirstNodeSearch(LinkedList *list, int data) {
  Node *curr = list -> head;
  while (curr != NULL) {
    if (curr -> data == data) {
      return curr;
    }
    curr = curr -> next;
  }

  // if not found
  return NULL;
}
```

## 32.5. `insertAtBack()`
8. Write a function to insert a node at the tail of a linked list. {.lr}
```c
// return T/F if possible
bool insertAtBack(LinkedList *list, int data) {
  // STRATEGY:
  // traverse list until reached tail node pointing to null
  // then point tail node to new node
  // and new node to NULL

  Node *newNode = createNode(data);
  Node *curr = list -> head;

  // while (curr != NULL) {
  // WRONG! bc that means curr ends up pointing to NULL
  // instead of a node that points to NULL

  // SOLUTION: check if NEXT node is NULL
  while (curr -> next != NULL) {
    curr = curr -> next;
  }

  // curr now points to tail node
  curr -> next = newNode; // point tail node to new node
  // newNode -> next = NULL; // point new node to NULL
  // DONT NEED THIS BC newNode already points to NULL when initialized
}
```

*Remember to consider edge cases with your functions!*{.lr} For our` insertAtBack()` function, if a list is empty (no nodes), then the current node is NULL which means we get a segmentation fault trying to assign `curr -> next` to the new node.

SOLUTION: insert a new node (at front) when list is empty (i.e. head points to null; JUST USE OUR BUILT FUNCTION!): {.lg}
```c
// A:
bool insertAtBack(LinkedList *list, int data) {
  if (isEmpty(list)) {
    // can just return insert function bc we have bool for that too
    return insertAtFront(list, data);
  }

  Node *curr = head;
  while (curr -> next != NULL) {
    curr = curr -> next;
  }

  Node *newNode = createNode(data);
  curr -> next = newNode;

  // even this is only reached if newNode is successfully added,
  // it is good practice to recheck to catch errors in code changes
  if (curr -> next != NULL) {
    return true;
  }
  return false;
}
```

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 33. Implementating Linked Lists (3/3)

Note: in the final exam, function implementations for linked lists will NOT be provided for questions (except for those explicitly stated; commonly `createNode()`). You will need to be able to create helper functions as necessary to write the function that actually answers the question.

## 33.1. `insertIntoOrderedList()`
9. Write a function to insert a node (with an `int` data value) into a sorted linked list: {.lr}
```c
// ?

// e.g. insert [2] into...
// head -> [0] -> [1] -> [3] -> NULL
```
```c
// STRATEGY:
// iterate through each node until the data value of the
// NEXT node is greater than that of the node to be inserted

void insertIntoOrderedList(LinkedList *list, int data) {
  Node *curr = list -> head;
  while (curr -> next -> data < data) {
    curr = curr -> next;
  }
  // now at: ... -> [1] -> [3] -> ...

  Node *newNode = createNode(data);
  newNode -> next = curr -> next;
  curr -> next = newNode;
}
```
PROBLEM: need to account for edge cases! {.lr}
- if new node data is greater than all list data
  - just need to stop while loop when next node is null -> *needs to be before checking data of next node bc otherwise that would be invalid access of memory the other way around*{.lr}
- if new node data is smaller than all list data
  - while loop will never run
  - use an if statement to check if first node data is greater than to-be-inserted data
  - can just use our `insertAtFront()` function instead of writing a separate implementation
- if list is empty
  - can just use our `insertAtFront()` function instead of writing a separate implementation

```c
// A:

// 'bool' so we can return SUCCESS/FAILURE
bool insertIntoOrderedList(LinkedList *list, int data) {
  Node *curr = list -> head;
  // if new node data is greater than all list data
  while (curr -> next != NULL && curr -> next -> data < data) {
    curr = curr -> next;
  }

  if (isEmpty(list) || data < curr -> data) {
    return insertAtFront(list, data);
  }

  Node *newNode = createNode(data);

  if (newNode == NULL) { // if no more memory is available
    return false;
  }

  newNode -> next = curr -> next;
  curr -> next = newNode;
}
```

## 33.2. `deleteFront()`
10. Write a function to delete the FIRST node in a list: {.lr}
**General case: **
```c
// 1 - set tmp pointer to new head (next node after head node)
Node *newHead = list -> head -> next;
// 2 - can free current head pointer
free(list -> head);
// 3 - set head to tmp new head pointer
list -> head = newHead;
```
**Edge cases:**
- if list is empty
  - can just return (true if `bool` return type)
```c
// A:

void deleteFront(LinkedList *list) {
  if (isEmpty(list)) {
    return;
  }

  Node *newHead = list -> head -> next;
  free(list -> head);
  list -> head = newHead;
}
```

## 33.3. `deleteLast()`
11. Write a function to delete the LAST node in a list: {.lr}
```
e.g. want to delete last node of:
head -> [1] -> [2] -> NULL
```
**General case:**
- traverse through list until node after next node is NULL
  - bc we need to set the 'next' pointer of the second last node to NULL
```c
while (curr -> next -> next != NULL) {
  curr = curr -> next;
}
```
- when node after next node is null, free next node and set next of current node to NULL
```c
free(curr -> next);
curr -> next = NULL;
```
**Edge cases:**
 - empty list
   - catch when: `isEmpty()` is true
   - nothing needs to be done: `return void`
```c
if (isEmpty(list)) {
  return;
}
```
- list only has 1 node *(visualize using examples!)*{.r}
```
head -> [1] -> NULL
...
head -> NULL
```
  - catch when: `next` pointer after `head` points to NULL
  - handle by: ~free head and set head to NULL~ can just use `deleteFront()`!
```c
if (list -> head -> next == NULL) {
  deleteFront(list);
}
```
Putting it all together...
```c
// A:
void deleteLast(LinkedList *list) {
  if (isEmpty(list)) { // empty list
    return;
  }
  if (list -> head -> next == NULL) { // single node in list
    deleteFront(list);
  }

  Node *curr = list -> head;
  while (curr -> next -> next != NULL) {
    curr = curr -> next;
  }
  free(curr -> next);
  curr -> next = NULL;
}
```

## 33.4. `deleteAllNodes()`
12. Write a function to delete all nodes in a list {.lr}
We can just use our `deleteFront()` or `deleteLast()` functions and simply call them on the list until the list is empty.
NOTE: since `deleteLast()` needs to traverse through entire list while `deleteFront()` doesn't, using `deleteFront()` will make our function more efficient. {.lr}

We can add additional functionality (that could come into use later on) by returning the number of deleted nodes:
```c
// A:
int deleteAllNodes(LinkedList *list) {
  int deleted = 0;
  while (!isEmpty(list)) {
    deleteFront(list);
    deleted++;
  }
  return deleted;
}
```

## 33.5. `deleteFirstMatch()`
13. Write a function to search for a data value in a linked list and delete the first matching node: {.lr}
```
e.g. want to delete node with data 3:
head -> [1] -> [2] -> [3] -> NULL
```
General case:
- traverse through each node
- check whether next node data value matches input
- if node data matches input, set current node pointer to 'next' pointer of next node
- free the deleted node pointer

Special cases:
- if matching node is not found, simply stop traversing through list (avoid calling 'data' for NULL)
- if memory is unavailable, ensuer that invalid access of memory does not occur (*guard condition*)
- if first node in list matches input, we can simply call our `deleteAtFront()` function on the list (instead of re-implementing)
- if list is empty, we can set our first condition be checking if 'curr' node pointer is NULL immediately after pointing it to the head OR we could simply just use our `isEmpty()` function.

```c
// A:
bool deleteFirstMatch(LinkedList *list, int data) {
  Node *curr = list -> head;

  // needs to be first to avoid segmentation faults
  if (isEmpty(list)) { // curr == NULL
    return false;
  }

  if (curr -> data == data) { // i.e. head node = match
    deleteFront(list);
    return true;
  }

  while ((curr -> next != NULL) && (curr -> next -> data != data)) {
    curr = curr -> next;
  }

  if (curr -> next != NULL) {
    curr -> next = curr -> next -> next;
  }
}
```

## 33.6. `deleteAllMatches()`
14. Write a function to delete **all** nodes with the matching input data value: {.lr}

Instead of re-implementing, we can simply call our `deleteFirstMatch()` function repeatedly on the list until it returns false.
- If the first call to `deleteFirstMatch()` returns false, we can return false to the parent function. If not, this indicates that at least 1 node was deleted, so we must return true.

```c
// A:
int deleteAllMatches(LinkedList *list, int data) {
  int numDeleted = 0;

  while (deleteFirstMatch(list, data)) {
    numDeleted++;
  }

  return numDeleted;
}
```

## 33.7. (Linked List) FINAL EXAM STRATEGIES
- Consider whether list traversal is needed
- Generate an example for each general and edge case
- Create an initial implementation for the general case
- For each edge case, check whether it is...
  - ...caught by the general case (if not, need logic for when it occurs)
  - ...is handled by the general case (if not, add code to handle it)
- Write helper functions to break up functionality and for repetitive tasks
- Combine all required code into a single function

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 34. Searching Algorithms
## 34.1. Sequential Search

The simplest search algorithm we can create (for an array of integers) involves simply iterating through each index sequentially (one-by-one):

```c
// return index at which search is found; -1 if not found
int sequentialSearch(int list[], int length, int data) {
  for (int i = 0; i < length, i++) {
    if (list[i] == data) {
      return i;
    }
  }
  return -1;
}
```

This is inefficient (in Big O notation, the time complexity of sequential search is $O(n)$).

## 34.2. Binary Search (non-recursive)

If we have a sorted list, we can speed up searching using binary search (cutting the number of indices we need to search through in half for each iteration) with a time complexity of $O(log_2{n})$.

```c
int binarySearch(int list[], int length, int data) {
  // indices that we will be searching through
  int low = 0, high = length - 1;

  while (low < high) {
    int mid = (low + high) / 2;
    if (list[mid] == data) {
      return mid;

    } else if (data < list[mid]) {
      // start of index search stays same
      // change end of index search to be below mid
      high = mid - 1;

    } else { // data > list[mid]
      // end of index search stays same
      // change start of index search to be above mid
      low = mid + 1;
    }

    return -1; // if no match
  }
}
```

## 34.3. Binary Search (recursive)
Base cases:
- if found, middle index between low and high will have value being searched -> return that index
- if not found, low will become greater than high -> when this happens, return -1

Recursive case(s):
- if middle index is greater than searched value, set high to be middle index - 1
- if middle index is less than searched value, set low to be middle index + 1
- call binarySearchHelper with new low & high parameters
```c
// A:
int binarySearchHelper(int list[], int data, int low, int high) {
  if (low > high) {
    return -1;
  }

  int mid = (low + high) / 2;
  if (list[mid] == data) {
    return mid;
  }

  if (data < list[mid]) {
    return binarySearchHelper(list, data, low, mid - 1);
  } else { // list[mid] < data
    return binarySearchHelper(list, data, mid + 1, high);
  }
}
```
- Q: Why use `...Helper()?` {.r}
- A: Add parameters for recursive case(s) in helper function and auto-get those parameters in the interface function so that user doesn't need to care about implementation. {.lg}

```c
int binarySearch(int list[], int data, int length) {
  return binarySearchHelper(list, data, 0, length - 1);
}
```

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>

# 35. Sorting Algorithms

Q: Why care about sorting algorithms? {.r}

A: Using binary search (which is much more efficient than sequential search) requires a sorted array. {.lg}

## 35.1. Insertion Sort

Array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.

Steps:
To sort an array of size n in ascending order:
1. Iterate from arr[1] to arr[n] over the array.
2. Compare the current element (key) to its predecessor.
3. If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.

```c
4 3 2 10 12 1 5 6
[3 4] 2 10 12 1 5 6
[2 3 4] 10 12 1 5 6
[2 3 4 10] 12 1 5 6
[2 3 4 10 12] 1 5 6
[1 2 3 4 10 12] 5 6
[1 2 3 4 5 10 12] 6
[1 2 3 4 5 10 12 6]
```

How can we implement? {.lr}
1. Loop over all elements in the array we want to insert
2. Every step we "insert" a number to the previously sorted array

```c
// A:
void insertionSort(int list[], int length) {
  // iterate through each index of the list
  for (int top = 1; top < length; top++) {
    int item = list[top];
    int emptyIndex = top;

    // keep shifting item at 'list[top]' to the left until it fits in position or the next item is smaller than the current item
    while (emptyIndex > 0 && list[emptyIndex-1] > item) {
      list[emptyIndex] = list[emptyIndex - 1];
      emptyIndex--;
    }
    list[emptyIndex] = item;
  }
}
```

## 35.2. Selection Sort
- Search entire array to find largest value & move largest value to end (by swapping with end)
- Search for largest element excluding last element (which was placed in correct position in last step)

```c
9 5 18 8 5 2
9 5 8 5 2 [18]
5 8 5 2 [9 18]
5 5 2 [8 9 18]
2 5 [5 8 9 18]
2 [5 5 8 9 18]
[2 5 5 8 9 18]
```
- Q: # of times we looked for largest Number? {.r}
- A: size of array - 1 {.lg}
- Q: How many items did we have to compare in each search? {.r}
  1. 6
  2. 5
  - ...
  - last time: 2

```c
//A:
void selectionSort(int list[], int length) {
  for (int top = length - 1; top > 0; top--) {
    // assume first element is largest
    int indexOfLargest == 0;

    for (int i = 1; i < top; i++) {
      if (list[i] > list[indexOfLargest]) {
        indexOfLargest = i;
      }
    }

    // swap largest element found with top
    int tmp = list[top];
    list[top] = list[indexOfLargest];
    list[indexOfLargest] = tmp;
  }
}
```

<hr style="border:4px solid #FFFF; margin: 30px 0 30px 0; "> </hr>