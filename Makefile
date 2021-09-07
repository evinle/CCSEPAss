all: twooffbyone.c
	gcc -mpreferred-stack-boundary=2 -z execstack -fno-stack-protector -o biwan twooffbyone.c 

