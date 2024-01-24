# Turing Machine Simulator in C
This repository houses a C implementation of a Turing Machine simulator, a computational model that can simulate the logic of a simple computing device. The simulator reads transition rules and machine configurations from an input file, processes input strings, and outputs the final results, including the machine's state 

## Table of Contents

1. [Overview](#overview)
2. [Features](#features)
3. [File Structure](#file-structure)
4. [Getting Started](#getting-started)
5. [Build and Run](#build-and-run)

## Overview

The Turing Machine Simulator is a C program that simulates a simple Turing machine based on the provided transition rules. The Turing machine processes input strings and manipulates them on a tape according to the specified transitions. Users can interactively input strings and set the initial position of the tape head (header) to observe the machine's behavior.

## Features 
The main functionalities include:
  * **Turing Machine Simulation:** The program simulates a Turing machine, which consists of a tape, a tape head, and a set of transition rules.
  * **Interactive Input:** Users can provide input strings and set the initial position of the tape head before running the simulation.
  * **Transition Rules:** Transition rules define the behavior of the Turing machine. Each rule consists of a source state, input symbol, command ('R' for right, 'L' for left, or a symbol for read/write), and a target state.
  *  **Out-of-Bounds Handling:** The program checks for out-of-bounds conditions, preventing the tape head from moving beyond the boundaries of the input string.
  * **Dynamic Memory Allocation:** The transition rules are stored dynamically, allowing for flexibility in defining Turing machines with varying numbers of states and transitions.

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

## Getting Started

   1. **Input File Specification:** The user is required to provide an input file containing the specifications of the finite automaton. This includes the number of states, initial and final states, and the transitions.

   2. **User Interaction:** After reading the input file, the program prompts the user to input words for the automaton to process. The user can choose to continue or exit after each word.

   3. **Word Processing:** The program processes each input word using the specified transitions and determines whether the word is accepted or rejected.
  
## Build and Run

## Notes

  * The simulator allows users to interactively input strings and simulate the Turing Machine behavior.
  * Ensure that the input file adheres to the specified format.


Feel free to explore, contribute, and adapt the code to suit your needs.
