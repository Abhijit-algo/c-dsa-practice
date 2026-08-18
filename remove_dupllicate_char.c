#include <stdio.h>
#include <string.h>

void remove_duplicates(char* str) {
    int src = 0; 
    int dst = 0; 
    
    
    int seen[256] = {0}; 
    
    while (str[src] != '\0') {
        unsigned char current = str[src];
        
        
        if (!seen[current]) {
            seen[current] = 1;      
            str[dst++] = str[src];  
        }
        src++;
    }
    str[dst] = '\0'; 
}

int main() {
    char str[] = "programming";
    
    remove_duplicates(str);
    
    printf("Result: %s\n", str); // 
    return 0;
}
