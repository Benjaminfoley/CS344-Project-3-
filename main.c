#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
int main(char argc, char *argv[]){
    forever_loop();
}
void forever_loop(void){
    char *individual_line;  
    individual_line = forever_loop_read_line();
}
char forever_loop_read_line(void){
    char individual_line = NULL;
    fgets(char *individual_line, int 2048, char *stdin);
}