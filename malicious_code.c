#include <stdio.h>
#include <stdlib.h>

void hidden_function() {
    system("echo 'Hacked!' > /tmp/hack.txt");  // 恶意操作：创建文件
}

int main() {
    printf("This is a normal program.\n");
    
    // 伪装的后门调用
    hidden_function();

    return 0;
}

