# Program Structure

Now that we understand some of the basic concepts used in C, let's look at
what a simple C program actually looks like.

```c
#include <stdio.h>

int main()
{
    printf("Hello World");

    return 0;
}
```

At first, this may look like a lot of unfamiliar syntax. Let's break it
down piece by piece.

---

## 1. `#include <stdio.h>`

```c
#include <stdio.h>
```

`#include` is a **preprocessor directive**.

It tells the preprocessor to include the contents of the `stdio.h` header
file before the program is compiled.

`stdio.h` is the standard input/output header provided by C. It contains
declarations for functions related to input and output, including `printf()`.

We need it here because we are using `printf()` in our program.

---

## 2. `main()`

```c
int main()
```

`main` is a function.

The execution of a C program begins with the `main()` function.

The `int` before `main` tells us that the function returns an integer value.

For now, think of `main()` as the **starting point of our program**.

---

## 3. The Curly Braces `{ }`

```c
int main()
{
    printf("Hello World");

    return 0;
}
```

The curly braces mark the beginning and end of the body of the `main`
function.

Everything written between `{` and `}` belongs to the function.

So in this example, these are the instructions that belong to `main()`:

```c
printf("Hello World");

return 0;
```

---

## 4. `printf()`

```c
printf("Hello World");
```

`printf()` is a function used to produce formatted output.

In this example, it displays:

```text
Hello World
```

on the  console/terminal.

The `printf()` function is declared in `stdio.h`.

---

## 5. `return 0`

```c
return 0;
```

`return` is a keyword used to return a value from a function.

Since `main()` has an `int` return type, it returns an integer value.

Returning `0` from `main()` indicates that the program terminated
successfully.

A non-zero status can be used to indicate that the program terminated
with an error or other unsuccessful status.

---

## Rules for writing C program

1. **Each instruction is written as a separate statement.**

2. **Statements are written in the order in which we want them to be executed.**

3. **C is case-sensitive.** Uppercase and lowercase letters are treated differently.

4. **C is a free-form language.** There is no fixed position on a line where a statement must be written.

5. **Every C statement generally ends with a semicolon (`;`).** The semicolon acts as a statement terminator.
