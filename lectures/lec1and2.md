### LECTURE 1 / 2

**HARDWARE**

- CPU
    - executes instructions in native/machine code (i.e. add 2 numbers)
- main memory
    - indexed by addresses
    - stores data and instructions (which can be sent to CPU for executing instructions)
- non-volatile storage (HD/SSD)
- I/O devices

**What does the OS do?**

- manage hardware resources
- provide interface for applications

---

**What is a program?**

A sequence of instructions performed by a computer.

How are data and instructions stored?

Data (i.e. numbers) are encoded in binary

- bit (1 or 0) - 1 bit
- byte (B) - 8 bits = 2^3 bits
- kilobyte (KB) - 1024 B = 2^10 B
- megabyte (MB) - 1024 KB = 2^10 KB = 2^20 B
- gigabyte (GB) - 1024 MB = 2^10 MB = 2^30 B
- terabyte (TB) - 1024 GB = 2^10 GB =  = 2^40 B

Representing numbers in binary

0 - 0000 - 0 bits
1 - 0001 - 1 bit
2 - 0010 - 2 bits
3 - 0011 - 2 bits
4 - 0100 - 3 bits
5 - 0101 - 3 bits
6 - 0110 - 3 bits
7 - 0111 - 3 bits
8 - 1000 - 4 bits

Representing a number n requires 2^n-1 bits.

How is main memory organized?

- Main memory is divided into cells, each holding 1 byte and with an address (making memory “byte-addressable”).

Q: If we choose to represent addresses using 32-bits, how many different addresses can we have and what is the total memory that can be stored?

- The question is effectively asking how many different numbers we can store with 32 bits. The answer is 2^32-1 + 1 (representing 0 requires 0 bits).
- Since each address accesses 1 byte, the total memory that can be stored is 2^32 addresses * 1 byte = 2^32 B = 2^2 * 2^10 * 2^10 * 2^10 B = 4 * (2^10)^3 B = 4 * (2^10)^2 KB =  = 4 * (2^10) MB = 4 GB.
- Written another way: 2^32 addresses * 1 byte = 2^32 addresses * 8 bits = 2^35 bits.

Q: How big can my memory be if I have a 64-bit address?

- We can have 2^64 addresses, and so the total memory that can be stored is 2^64 addresses * 1 byte = 2^4 * (2^10)^6 bytes = 16 * (2^10)^6 bytes = 16 exabytes.

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