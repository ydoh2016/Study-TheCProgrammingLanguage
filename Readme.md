# DAY 1
## :blue_book: **Introduction** :blue_book:
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
## :blue_book: **A Tutorial Introduction** :blue_book:
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
# Day 7
### External Variables and Scope
#### local variables(automatic variables)
#### external variables
- use keyword `extern` in usage, if declaration of variables follows their usage
- use header files when using external variables in several files
#### local variables v.s. external variables
- using external variables anytime leads to a fragile program
- using external variables anytime leads to not-reusable program
#### definition v.s. declaration
- definition : state variables, and assign storage
- declaration : state variables, but not assign storage
# Day 8
## :blue_book: **Types, Operators, and Expressions** :blue_book:
#### Declarations
- list the variables, their types, their initial values
#### operators
- specify jobs
#### expressions
- combine variables and constants
#### change on ANSI
- signed and unsigned forms of all integer types
- notations for unsigned constants and hexadecimal character constants
- floating-point operations done in single precision
    - single precision : sign(1) - exp(8) - fraction(23)
    - double precision : sign(1) - exp(11) - fraction(52)
- string constants concatenated at compile time
- enum is part of the language
- objects available in const
- augmented automatic coercions [learn more](https://www.geeksforgeeks.org/argument-coercion-in-c-c/)
### Variable Names
#### naming rules
- use letters and digits, _(underscore)
- first character must be a letter
- do not use _ as a first character since library routines often do that
- use upper case for symbolic constants, lower case for variables in tradition
- length limitation(not anymore in modern compilers)
- choose short names for local variables, loop indices, longer names for external variables
### Data Types and Sizes
#### basic data types
|types|description|
|---|---|
|char|a character|
|int|an integer|
|float|single-precision floating point|
|double|double-pricision floating point|
#### qualifiers
|qualifiers|description|
|---|---|
|short|apply to integer, at least 16 bits|
|long|apply to integer, at least 32 bits|
|signed|apply to any types|
|unsigned|apply to any types|
#### signed char
- char can be signed or unsigned dependent to a machine
- printable characters are always positive
#### long double
- extended-precision floating point
#### `<limits.h>`, `<float.h>`
- contain symbolic constants for types

