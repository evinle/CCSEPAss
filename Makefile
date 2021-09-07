all: twooffbyone.c
	gcc twooffbyone.c -Werror -Wextra -Wall -fstack-protector-all -pie -fPIE -o twooffbyonew

