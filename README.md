# Turing Machine Simulator in C

## Overview

This repository houses a C implementation of a Turing Machine simulator, a computational model that can simulate the logic of a simple computing device. The simulator reads transition rules and machine configurations from an input file, processes input strings, and outputs the final results, including the machine's state.

## Files

- **turing_machine.c**: This C source code file contains the implementation of the Turing Machine simulator. It is the core of the project and handles the processing of transitions and input strings.
  
- **genlib.h** and **simpio.h**: These header files include general-purpose and simple I/O functions used in the simulator.

- **input.txt**: An example input file that defines the Turing Machine and its transitions. It serves as a reference for creating custom configurations.

## Usage

1. **Compile the Program**: Use the following command to compile the C program:

3. **Follow Prompts**: The simulator prompts the user to input the filename, initial tape configuration, and header position. The program then processes the input based on the defined transition rules and displays the output.

## Input File Format

The input file that defines the Turing Machine should follow a specific format:

- The first line contains the number of states.
- The second line contains the initial state.
- The third line contains the number of transitions.
- Subsequent lines define each transition with the format: `source char command target`. The `command` can be 'L' (move left), 'R' (move right), or a character to be written on the tape.

## Example

A sample input file, `input.txt`, is included in the repository to illustrate the format and provide an example configuration.

## License

This project is licensed under the [MIT License](LICENSE), allowing for open-source collaboration and distribution.

Feel free to explore, contribute, and adapt the code to suit your needs.
