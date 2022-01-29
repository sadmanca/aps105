# WARNINGS

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

# OPERATOR PRECEDENCE & ASSOCIATIVITY 

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
|------------|--------------|---------------------------------------------------|---------------|
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