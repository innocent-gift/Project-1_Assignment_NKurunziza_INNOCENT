# Project-1_Assignment_NKurunziza_INNOCENT

# QUESTION1
codes\
question1.c\
description
The program I wrote uses modulo operator(%) which finds the remainder of a division. This is mostly used for the logic of load balancing in computer networks. When users visit a website the server uses modulo to calculate using ID numbers to distribute the traffic across different backup servers so the website doesn’t crash.
Generally C programming is mostly important because it controls the memory directly which makes it best for writing Operating systems such as Linux Kenrel which android telephones use and other devices.
   Syntax Error: This is when you violated the C Programming language rules here your codes can’t run because the compiler can’t read and understand your code. Examples: you may not write some semi colons that end the program or use the wrong structure. Like int number instead of int number;
                      Semantic Error: these are logic mistakes that can be understood by the compiler but the program does the wrong logic because your logic is incorrect.
      Stages of C compilation
 Preprocessing: This is when the processor looks for the line which starts with #include <stdio.h> and then strips out your comment to save space and copies the actual content of your header files directly into your code.
The output of this is A preprocessed code file usually ends with .i.
Compilation: this is when the compiler takes those preprocessed codes and translates them into assembly codes which are made of instructions such as MOV, ADD.. 
The output of this is Assembly code file which is usually .s.
Assembly: This is when an assembler takes the codes and convert them into raw machine codes which are zeros and ones(0s and 1s). The output of this mostly ends in .o or .obj.
Linking: from this the linker takes your object file and merge it together with the pre-compiled system library files. It packages everything into a final independent file.
The output is executable file that ends with .exe
Question 2;
 Codes;
Question2.c

Sample input and output:
This calculator add or subtract
Enter your first number:
3
Enter your second number:
3
Choose the symbol '+', '-', 's' to skip, or 'e' to exit:
+
Result: 6.00

This calculator add or subtract
Enter your first number:

Explanation:
The program is simple calculator that adds and substracts the number;
So from this the user is able to input two numbers and select the operation sign he/she want to use and then ge the result  he can even exit the calculator by clicking e or skip by chose s.

# Question3;
Codes:question3.c
	
Explanation: 
Function Reuse: The printWelcome() function is used twice in the program: once at the very beginning to print a top border, and once at the end to print a bottom border. This saves us from writing the same printf line multiple times.
How the Recursion Works: The calculateFactorial() function calculates numbers by multiplying down to 1. For example, if you enter 3, it returns 3 * calculateFactorial(2). This triggers another call for 2 * calculateFactorial(1). When it hits 1 (the Base Case), the code stops calling itself and calculates the final answer: $3 \times 2 \times 1 = 6$

Question4:
Codes:
	question4.c


Drawings:\

# Block diagram
<img width="1239" height="636" alt="Screenshot 2026-06-05 154304" src="https://github.com/user-attachments/assets/cc736b4f-3dc0-49b6-831f-a2cff468ea1f" />


# Circuit diagram
<img width="629" height="491" alt="Screenshot 2026-06-05 143815" src="https://github.com/user-attachments/assets/7d3e2805-9e56-49cd-a8f6-4c6c190d3282" />\

Explanation:
This diagram can be used as a smart irrigation system. This is where the moisture sensor will sense how much soil is wet and after getting at some point the system will start the motor to water the farm.
# QUESTION5:
Embedded system: this is the physical system where the sensor takes the real world data and then sends the analogue signals to the arduino(controller) and then the digital signals sent to the actuator(motor).
Functions: functions are a reusable body of codes where you can use them over and over to perform tasks designed to.
Control flow: This is the logic behind every codes where the codes can take decisions according to what programmers wanted.

