#include <stdio.h>

void sortcount(int x[], int n) { 
    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - i - 1; j++) { 
            if (x[j] < x[j + 1]) { 
                int t = x[j]; 
                x[j] = x[j + 1]; 
                x[j + 1] = t; 
            } 
        } 
    } 
} 

int main() { 
    int n; 
    scanf("%d", &n); 
    
    int x[n], b[n]; 
    
    for (int i = 0; i < n; i++) { 
        scanf("%d", &x[i]); 
        b[i] = x[i]; 
    } 
    
    sortcount(b, n); 
    
    int y = 0; 
    for (int i = 0; i < n; i++) { 
        if (x[i] == b[i]) 
            y++; 
    } 
    
    printf("%d\n", y); 
    return 0; 
}
