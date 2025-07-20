# Bitwise-Operators-in-cpp

### Aim :

- To study bitwise operator in C++. write a program to implement all bitwise operators. write a program to set and reset bit.

### Tools :

- GNU g++ compiler for local and code editor or Online C++ Compiler.
  
### Program 1 - Bitwise Operations

1. The program begins by declaring two integer variables `a` and `b`.
2. It asks the user to input values for both variables.
3. Using these values, the program performs:
   - Bitwise AND (`a & b`)
   - Bitwise OR (`a | b`)
   - Bitwise XOR (`a ^ b`)
   - Bitwise NOT (`~a`)
   - Left Shift (`a << 1`)
   - Right Shift (`a >> 1`)
4. Each result is stored in a separate variable and printed to the user with a clear label.

### Program 2 - Bit Set and Reset

1. The program starts with a fixed integer `i = 50`, which in binary is `0011 0010`.
2. The user is prompted to enter a bit position to **set** (make 1).
   - The program uses `i | (1 << position)` to set that bit.
3. Then the user is asked to enter a bit position to **reset** (make 0).
   - The program uses `i & (~(1 << position))` to reset that bit.
4. It displays:
   - The original number
   - The number after setting the bit
   - The number after resetting the bit

## Conclusion : 

We learn how to use bitwise operators in C++ and learned the concept pof setting anf resetting of bits.
