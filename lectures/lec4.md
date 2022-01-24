7/0 - int/int is a compile time warning and runtime error; this means that the c file will still compile, but it will not run.
7.0/0.0 - double/double results in inf
9/5 - int divided by int; result is int without the decimal (i.e. rounded down)
1 + 2.5 - int + double is double

assignment operators evaluate expressions from right to left
- for i = j = k = 1, the compiler will evaluate k = 1 first, then j = k, then i = j.

---

Operators Precedence and Associativity are two characteristics of operators that determine the evaluation order of sub-expressions in absence of brackets

Operator precedence determines which operator is performed first in an expression with more than one operators with different precedence. From high to low precedence:
    1. arithmetic operators (*, /, %, +, -), are higher precedence than
    2. logical operators (&&, ||),
    3. assignment operators (=, +=, etc.)

Operators Associativity is used when two operators of same precedence appear in an expression. Associativity can be either Left to Right or Right to Left. 
    e.g. ‘*’ and ‘/’ have same precedence and their associativity is Left to Right, so the expression “100 / 10 * 10” is treated as “(100 / 10) * 10”.

1. Associativity is only used when there are two or more operators of same precedence (i.e. precedence is evaluated first before associativity).
2. All operators with the same precedence have same associativity.
3. There is no chaining of comparison operators in C:
    In Python, expression like “c > b > a” is treated as “c > b and b > a”, but this type of chaining doesn’t happen in C. For example consider the  following program:

    int a = 10, b = 20, c = 30;
    print(c > b > a);
    >>> FALSE
    
    **Why?**
    // (c > b > a) is treated as ((c  > b) > a), associativity of '>'
    // is left to right. Therefore the value becomes ((30 > 20) > 10)
    // which becomes (1 > 10), which is FALSE.

Associativity of arithmetic (* / % + -) and logic (&& ||) is LEFT TO RIGHT.
Associativity of assignment (= += -= *= /= %=) is RIGHT TO LEFT.

https://web.microsoftstream.com/video/2e8252f9-8652-4afe-b7e9-0e0d089e80f7?st=1464 