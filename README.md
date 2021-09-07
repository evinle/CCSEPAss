# CCSEPAss

The program is a simple hypothetical login system for some piece of software, with trivial length checking of buffer size that is off by one. We don't take account into the password since it would only complicate the stack making it unecessarily more complex, without altering the logic of the exploit.

How to run the program:
./biwan <username>
  
Detection: the most reliable way to detect off by one errors is boundary testing, where test cases are built around the values that are less than 1, more than 1 or on the boundary.
  
Exploit: inputting an array of characters that are exactly 500 characters, that contains the following structure [nopsled (array of 0x90) - shell code (what we want the program to execute) - return addresses (array that points to somewhere in the nopsled so that it "slides" all the way down to the start of our shell code)].
  
Patch: patching is as trivial as adding or removing the "=" sign from the offending control structure. As the name implies, we are one off of 


