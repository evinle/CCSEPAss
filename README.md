# Introduction 

The program is a simple hypothetical login system for some piece of software, with trivial length checking of buffer size that is off by one. We don't take account into the password since it would only complicate the stack making it unecessarily more complex, without altering the logic of the exploit.

Shell code was taken from: http://shell-storm.org/shellcode/

# Please note that this was done on a 32-bit system

The motif behind this is because doing it on a 64-bit system means figuring out ways to bypass null bytes that act as null pointers for strcpy, which makes the problem a lot more complex.

# How to compile the program:
make all

# How to run the program:
./biwan [username]
  
# Detection: 
The most reliable way to detect off by one errors is boundary testing, where test cases are built around the values that are less than 1, more than 1 or on the boundary.
  
# Exploit:
Inputting an array of characters that are exactly 500 in size, that contains the following structure [nopsled (array of 0x90) - shell code (what we want the program to execute) - return addresses (array that points to somewhere in the nopsled so that it "slides" all the way down to the start of our shell code)].
  
# Patch: 
Patching is as trivial as adding or removing the "=" sign from the offending control structure. As the name implies, we are one off of 

# Member        | Role


Gian Quiros   | script + presentation slides

Muhadib Hanafi | script + presentation slides

Denise Abalos | demo program patching + prevention

Tuan Le | demo program exploitation


