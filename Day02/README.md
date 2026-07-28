# Day 2 - Functions and Number Programs

Today I learned about functions in C programming and practiced some number-based programs.

## Topics Learned

- What is a Function
- Why Functions are used
- Function Declaration
- Function Definition
- Function Call
- Types of Functions
- Standard Library Functions
- User Defined Functions
- Call by Value
- Call by Reference

## Types of User Defined Functions

### 1. No Arguments and No Return Value

The function does not take any input and does not return any value.

Example:

```c
void display()
{
    printf("Hello");
}
```

---

### 2. No Arguments and Return Value

The function does not take input but returns a value.

```c
int getNumber()
{
    return 10;
}
```

---

### 3. Arguments and No Return Value

The function takes input but does not return any value.

```c
void add(int a, int b)
{
    printf("%d", a + b);
}
```

---

### 4. Arguments and Return Value

The function takes input and returns a value.

```c
int add(int a, int b)
{
    return a + b;
}
```

## Programs Practiced

- Fibonacci Series
- Reverse Number
- Factorial
- Palindrome Number

## Logic Learned

### Fibonacci

- Start with 0 and 1.
- Add the previous two numbers to get the next number.

### Reverse Number

- Get the last digit using `% 10`.
- Add it to the reverse number.
- Remove the last digit using `/ 10`.

### Factorial

- Start with factorial = 1.
- Multiply factorial by each number from 1 to n.

### Palindrome

- Reverse the given number.
- Compare the reversed number with the original number.

## Interview Questions

### What is a Function?

A function is a reusable block of code that performs a specific task.

### Why do we use Functions?

- Reduces code repetition.
- Makes the program easy to understand.
- Makes debugging easier.
- Improves code reusability.

### Difference between Function Declaration and Function Definition

Function Declaration tells the compiler that a function exists.

Function Definition contains the actual implementation of the function.

### Call by Value

A copy of the variable is passed to the function.

### Call by Reference

The address of the variable is passed to the function.

## What I Learned Today

Today I understood how functions make programs easier to write and reuse. I also practiced Fibonacci, Reverse Number, Factorial, and Palindrome programs. These programs helped me improve my logic-building skills.

---
