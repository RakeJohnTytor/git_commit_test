#include <stdio.h>
#include <stdlib.h>

void hidden_function() {
    system("echo 'Hacked!' > /tmp/hack.txt");  // malicious operation, creating a file
}

int main() {
    printf("This is a normal program.\n");
    
    // misguised call
    hidden_function();

    return 0;
}

