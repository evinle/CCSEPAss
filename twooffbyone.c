#include<stdio.h>
#include<string.h>

/*
Code is a modified version of the exerpt found in the link below
https://www.exploit-db.com/docs/english/28478-linux-off-by-one-vulnerabilities.pdf 
*/

void login(char *uname) {
    char username[500];
    strcpy(username,uname);
    printf("Logged in\nUsername:%s\nstrlen:%d\n", username,strlen(username));
}

int main(int argc, char** argv)
{
    if( strlen(argv[1]) > 500) { 
        printf("Invalid username for login\n");
        return 1;    
    } 
    
    login(argv[1]);

    return 0;
}

