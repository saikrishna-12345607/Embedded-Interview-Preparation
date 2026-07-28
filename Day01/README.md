# Day 1 - Embedded Systems & C Programming Notes

## 1. What is an Embedded System?

An Embedded System is a specialized computer system designed to perform a specific task for a long period of time.

### Examples
- Washing Machine
- Smart Home Automation
- Microwave Oven

---

## 2. Types of Embedded Systems

### Standalone Embedded System
- Works independently without a host computer.
- Examples:
  - Calculator
  - Digital Camera

### Real-Time Embedded System
- Produces output within a specified time.
- Example:
  - Airbag system in a car

### Networked (IoT) Embedded System
- Connected to a network or the Internet.
- Used to transmit and receive data.
- Examples:
  - CCTV Camera
  - Security Camera

### Mobile Embedded System
- Used in portable devices.
- Examples:
  - Smart Watch
  - Fitness Tracker
- Focuses on battery efficiency and compact size.

---

# 3. Microprocessor vs Microcontroller

## Microprocessor

- Contains only the CPU.
- Requires external RAM, ROM and I/O devices.
- Used in computers and laptops.
- Suitable for general-purpose computing.

## Microcontroller

- CPU, RAM, ROM and I/O peripherals are integrated on a single chip.
- Designed for specific applications.
- Used in embedded systems.
- Example:
  - Microwave Oven
  - Washing Machine
  - Traffic Light Controller

---

# 4. ARM Cortex-M Introduction

ARM develops processor architectures.

ARM Cortex-M processors are designed for microcontrollers.

### Cortex-M0 / M0+
- Very low power consumption.

### Cortex-M3 / M4
- Balanced performance.
- M4 includes FPU and DSP instructions.

### Cortex-M7 / M23
- High performance.
- Higher power consumption.

---

# 5. C Programming Basics

## Variables

Variables are containers used to store data.

Example:

```c
int age = 20;
```

---

## Data Types

### int
Stores integer values.

Example:

```c
int a = 10;
```

### float

Stores decimal numbers.

```c
float b = 12.5;
```

### double

Stores larger precision decimal values.

```c
double c = 15.6789;
```

### bool

Stores True or False values.

---

# 6. Operators

## Arithmetic Operators

```
+
-
*
/
%
```

### Modulus (%)

Returns the remainder after division.

Example:

```
10 % 3 = 1
```

---

## Relational Operators

```
==
!=
<
>
<=
>=
```

Used for comparison.

---

## Logical Operators

```
&&   AND

||   OR

!    NOT
```

Used to combine multiple conditions.

---

# 7. if-else Statement

```c
if(condition)
{
    // statements
}
else
{
    // statements
}
```

---

# 8. switch Statement

```c
switch(choice)
{
    case 1:
        break;

    case 2:
        break;

    default:
        break;
}
```

---

# 9. for Loop

Used when the number of iterations is known.

```c
for(int i=1; i<=5; i++)
{
    printf("%d\n", i);
}
```

---

# 10. while Loop

Used when the number of iterations is not known.

```c
int i = 1;

while(i <= 5)
{
    printf("%d\n", i);
    i++;
}
```

---

# 11. Largest of Three Numbers

Algorithm

1. Read three numbers.
2. Compare the numbers using if-else.
3. Print the largest number.

---

# 12. Prime Number

Algorithm

1. Read a number.
2. Check divisibility.
3. If divisible, it is not prime.
4. Otherwise, it is prime.

---

# 13. Why is C used in Embedded Systems?

- Direct access to hardware.
- Supports memory addressing.
- Fast execution.
- Low memory usage.
- Efficient for microcontrollers.
- Easy to interface with peripherals.

---

# Interview Questions

1. What is an Embedded System?
2. Types of Embedded Systems.
3. Difference between Microprocessor and Microcontroller.
4. Explain ARM Cortex-M.
5. Why is C preferred for Embedded Systems?
6. What is a variable?
7. What are data types?
8. Difference between for loop and while loop.
9. What is the modulus operator?
10. Explain logical operators.

---

# Programs Practiced

- Largest of Three Numbers
- Prime Number
- Fibonacci Series (Pending Practice)
- Reverse Number (Pending Practice)


⏳ Fibonacci Program

⏳ Reverse Number Program
