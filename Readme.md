# DAY 1
## Introduction
#### C
- type
- control-flow constructions
- function: not nested
#### C : low-level
- deals with characters, numbers, and addresses
- do not deal with arrays, strings, sets, heap, gc, io
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
