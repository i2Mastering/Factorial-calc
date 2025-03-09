# Factorial Calculation in C++

## Overview
This project implements a **Factorial Calculation** program in C++. The program prompts the user to enter a positive integer and computes its factorial using an iterative approach.

## Features
- Accepts **user input** for factorial calculation.
- **Validates input** to ensure only non-negative integers are processed.
- Handles the special case where **factorial of 0 is 1**.
- Computes **factorial iteratively** to ensure efficiency.

## How It Works
1. **User Input**: The user is prompted to enter a positive integer.
2. **Input Validation**:
   - If the user enters a negative number, they are prompted again.
   - If the user enters `0`, the program immediately outputs `1`.
3. **Factorial Calculation**:
   - Uses a loop to multiply numbers from `1` to `n`.
   - Stores the result in a **long double** to accommodate large numbers.
4. **Output Result**: Displays the factorial of the entered number.

## Installation
Ensure you have a C++ compiler installed. You can use **GCC** or **MSVC**.

## Compilation & Execution
### Using g++
```bash
g++ -o factorial factorial.cpp
./factorial
```
### Using MSVC (Windows)
```powershell
cl factorial.cpp
factorial.exe
```

## Example Output
```
Enter a positive integer: 5
The factorial of 5 is 120
```
```
Enter a positive integer: -3
Sorry, only positive numbers are allowed. Enter again: 4
The factorial of 4 is 24
```

## License
This project is open-source and free to use.
