# Core Concepts

Before learning the syntax of C, it helps to understand some basic concepts
that appear throughout a C program.

One of the first things a programming language needs to provide is a way to
**store and represent data**.

## 1. Variables

A variable is a **named storage location used to hold a value**.

Think of it as giving a name to a place where the program can keep some data.

For example:

```c
int age = 20;
```

Here:

- `int` tells C that we want to store an integer.
- `age` is the name of the variable.
- `20` is the value stored in it.

We can create variables for different kinds of data:

```c
int a = 3;
float b = 4.5;
char c = 'A';
```

Here:

- `a` stores the integer value `3`
- `b` stores the floating-point value `4.5`
- `c` stores the character `'A'`

### Changing the Value of a Variable

A variable can hold a different value later in the program.

For example:

```c
int a = 3;

a = 5;
```

Initially, `a` stores the value `3`.

When we execute:

```c
a = 5;
```

the value stored in `a` becomes `5`.

Think of it like this:

```text
        ┌─────────┐
        │    3    │ a 
        └─────────┘
             │new value of a     
             │  a = 5
             ▼
        ┌─────────┐
        │    5    │a
        └─────────┘

```

The important idea is that **`a` is the name we use to refer to the stored
value**.

When we assign a new value to `a`, the previous value is replaced.

> A variable can hold a value, and that value can change during program
> execution.

---

## 2. Identifiers

An **identifier** is a name given to something in a C program.

Identifiers can be used to name variables, functions, arrays, structures,
and other program elements.

For example:

```c
int age;
float salary;

int calculate_sum();
```

Here:

- `age` is an identifier.
- `salary` is an identifier.
- `calculate_sum` is an identifier.

### Rules for Naming Identifiers

An identifier in C:

- Can contain letters, digits, and underscores (`_`)
- Must begin with a letter or an underscore
- Cannot begin with a digit
- Cannot contain spaces
- Cannot contain special characters such as `@`, `#`, `%`, or `-`
- Cannot be a C keyword
- Is case-sensitive

Examples of valid identifiers:

```text
age
student_name
total1
_total
```

Examples of invalid identifiers:

```text
2value
student name
student-name
```

C is case-sensitive.

Therefore:

```text
age
Age
AGE
```

are treated as three different identifiers.

---

## 3. Keywords

While we are free to create names for variables and functions, some words
are already reserved by C for its own use.

These words are called **keywords**.

Keywords have a predefined meaning in the C language and therefore cannot be
used as identifiers.

Some commonly used C keywords are:

```text
int
char
float
if
else
for
while
return
```

For example, this is not allowed:

```c
int return = 10;
```

because `return` is already a keyword in C.

Think of keywords as words that belong to the language itself.

---

## 4. Literals

A **literal** is a value written directly in the source code.

For example:

```c
int age = 20;
float price = 4.5;
char grade = 'A';
```

Here:

- `20` is an integer literal.
- `4.5` is a floating-point literal.
- `'A'` is a character literal.

The value is written directly in the program rather than being referred to
through a variable.

---

## 5. Constants

A constant is a value that is not intended to change after it has been
defined.

In C, we can declare a variable as constant using the `const` keyword:

```c
const int DAYS_IN_WEEK = 7;
```

After this, we should not assign a new value to `DAYS_IN_WEEK`.

```c
DAYS_IN_WEEK = 10;   // Not allowed
```

It is useful to distinguish between **literals** and **constants**.

For example:

```c
const int days = 7;
```

Here:

- `7` is a literal.
- `days` is a variable declared with `const`.

---

# Tokens

A token is an individual unit of a C program that has meaning during the
compilation of the source code.

Just as words and punctuation form the building blocks of a sentence,
tokens form the building blocks of a C program.

For example:

```c
int age = 20;
```

This statement contains several tokens:

```text
int    age    =    20    ;
│      │      │     │    │
│      │      │     │    └── punctuator
│      │      │     └─────── literal
│      │      └───────────── operator
│      └──────────────────── identifier
└─────────────────────────── keyword
```

Some important categories of C tokens are:

- Keywords
- Identifiers
- Constants
- String literals
- Operators
- Punctuators


---
                         ┌───────────────┐
                         │  Punctuators  │
                         └───────┬───────┘
                                 │
       ┌───────────┐             │             ┌───────────┐
       │ Keywords  │─────────────┼─────────────│  Strings  │
       └───────────┘             │             └───────────┘
                                 ▼
                          ┌─────────────┐
                          │ Token in C  │
                          └─────────────┘
                                 ▲
       ┌───────────┐             │             ┌───────────┐
       │ Constants │─────────────┼─────────────│ Operators │
       └───────────┘             │             └───────────┘
                                 │
                         ┌───────┴───────┐
                         │  Identifiers  │
                         └───────────────┘

