#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(){
    while(1)
        fork();
    return 0;
}
