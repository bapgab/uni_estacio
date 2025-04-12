#include <stdio.h>
#include <data.h>

int main(){
    time_t tempo;
    time (&tempo);
    printf(ctime(&tempo));
    
}