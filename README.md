# Patch 
The purpose of this branch is to simply address the prevention part of
off-by-one vulnerability by showing some prevention techniques to avoid
or to minimize the chances of this bug from being exploited. 

When we try and compile this program once again with the patched update
as we have seen before in the vulnerable application that the size of 
our buffer is 500 and when we try and input a username that is exactly 
500, it will try and segfault. However, with this patched program, it 
defeats that vulnerability with our bound checking as well as 
implementation of our secure methods.
