# Turing Machine Simulator in C

## Overview

This project implements a simple **Turing Machine simulator** in C.  
The simulator reads machine transition rules from a file and evaluates whether an input string is accepted or not based on the defined transitions and header movement.

---

## Features

- Reads Turing Machine configuration (states and transitions) from a file
- Supports movement of the head left (`L`) or right (`R`)
- Can write symbols on the tape
- Accepts inputs interactively from the user
- Simulates the Turing Machine execution step-by-step
- Detects acceptance (final state `-1`) or halting without acceptance
- Prints final tape state and head position

## Overview

The Turing Machine Simulator is a C program that simulates a simple Turing machine based on the provided transition rules. The Turing machine processes input strings and manipulates them on a tape according to the specified transitions. Users can interactively input strings and set the initial position of the tape head (header) to observe the machine's behavior.



## File Structure

- **turing_machine.c**: This C source code file contains the implementation of the Turing Machine simulator. It is the core of the project and handles the processing of transitions and input strings.
  
- **genlib.h** and **simpio.h**: These header files include general-purpose and simple I/O functions used in the simulator.

 - **sample1.txt:** contains an example of a language grammar in the form of a context-free grammar (CFG) that generates strings in the language $\{b^na^m:n=m}$. This language consists of strings with an equal number of 'b's and 'a's.
    And the transition rules:
     * **Transition 1 (1a#2):** From state 1, if reading 'a', write nothing ('#'), move the tape head to the right, and transition to state 2.
     * **Transition 2 (2#R1):** From state 2, if reading '#', move the tape head to the right, and transition to state 1.
     * **Transition 3 (2aa1):** From state 2, if reading 'a', write 'a', and transition to state 1.
     * **Transition 4 (1##0):** From state 1, if reading '#', write nothing ('#'), and transition to the halt state (state 0).
 - **sample2.txt:** contains an example of a language grammar in the form of a context-free grammar (CFG) that generates strings in the language $\{b^na^m:n=m}$. This language consists of strings with an equal number of 'b's and 'a's.
    And the transition rules:
     * **Transition 1 (1a#2):** From state 1, if reading 'a', write nothing ('#'), move the tape head to the right, and transition to state 2.
     * **Transition 2 (2#R1):** From state 2, if reading '#', move the tape head to the right, and transition to state 1.
     * **Transition 3 (2aa1):** From state 2, if reading 'a', write 'a', and transition to state 1.
     * **Transition 4 (1##0):** From state 1, if reading '#', write nothing ('#'), and transition to the halt state (state 0).       

  
## Notes

  * The simulator allows users to interactively input strings and simulate the Turing Machine behavior.
  * Ensure that the input file adheres to the specified format.



---

## Limitations

- No dynamic resizing of the tape
- Limited error checking (e.g., file format must be correct)


