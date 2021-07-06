# DAY 1
## Introduction
#### C
- type
- control-flow constructions
- function: not nested
#### C : low-level
- deals with characters, numbers, and addresses
- do not deal with arrays, strings, sets, heap, garbage collecting, io
- straightforward, single-thread
#### C : Programmers' points
- compile-time errors
- function declaration
- standard library
## A Tutorial Introduction
### Getting Started
#### How to compile
- gcc -o [object file name] [c file name]
#### how to include library
#### main()
# DAY 2
### Variables and Arithmetic Expression
#### basic data types
- int
- float
- char
- short
- long
- double
#### % construction
- right-justify with %[width][type] ex) %3d(_10)
    - floating point : %[width].[width of fraction][type] ex) %3.2f(1.50)
- %d : integer
- %f : floating point
- %o : octal
- %x : hexadecimal
- %c : character
- %s : string
- %% : %
#### casting
- operation between int and float : cast int to float
    - try to use explicit decimal points
# Day 3
### The For Statement
#### choice between for and while
- for
    - when initialization and increment are single statements and logically related
    - more compact
    - keeps the loop control statements together in one place
### Symbolic Constants
#### #define
- do not use "magic numbers" in a program
- conventionally written in upper case
- no semicolon at the end of a #define line
# Day 4
### Character Input And Outupt
#### text stream
- lines of zero or more characters each followed by newline character
- each library should follow this model
#### EOF
- specific numeric value defined in <stdio.h>
- cannot be represented in char type (EOF = -1)
- type ctrl + d to represent EOF in terminal
#### ASCII
- prefer character set written between single quotes than its numerical value
# Day 5
### Arrays
#### subscript
- any integer expression
- start at zero
### Functions
#### why?
- encapsulate
- clarify codes
#### parameter vs argument
- parameter
    - formal argument
    - variables used in function definition
    - named in parenthesized list
- argument
    - actual argument
    - values used in a call of the function
#### return value
- return with no expression is possible
- caller can ignore any returned value
- main function is recommended to return zero or non-zero values
    - programs should return status to their environment
### Arguments - Call by Value
#### call by value
- called funcion cannot directly alter a variable in the calling function
# Day 6
### Character Arrays
#### passing array to function
- do not need to pass the length of the array
#### null character
- mark the end of the string
- \0
### External Variables and Scope