#include<stdio.h>
#include<string.h>

#define SIZE 500

int emptinessCheck(const char* arg) {
    int value = 0;

    if( strlen(arg) == 0 ) {
        value = 1;
    }
    return value;
}

int sizeCheck(const char* arg) {
    int value = 0;

    if( ((int)strlen(arg) >= SIZE) || ( strlen(arg) < 1 ) ) {
        value = 1;
    }
    return value;
}

void login(char *uname) {
    char username[500];
    //strcpy(username,uname);
    strncpy(username,uname,sizeof(username)-1);
    printf("Logged in\nUsername:%s\nstrlen:%d\n", username,strlen(username));
}

int main(int argc, char** argv)
{
    if( argc != 2 ) {
        printf("Invalid number of arguments\n");
        printf("Syntax: ./twooffbyone <username>\n");
        return 1;
    }
    
    if( ( emptinessCheck(argv[1]) == 1 ) || (sizeCheck(argv[1]) == 1) ) { 
        printf("Invalid username for login\n");
        return 1;    
    } 
    
    login(argv[1]);

    return 0;
}

