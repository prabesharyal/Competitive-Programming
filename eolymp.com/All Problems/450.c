#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int i = 0, j = 0; // Variables to track the current position
    int x = 0, y = 0; // Variables to track the previous position
    
    int direction = 0; // Direction: 0 - right, 1 - down, 2 - left, 3 - up
    int steps = 1; // Number of steps to move in the current direction
    
    int sum;
    int found = 0; // Flag to indicate if the neighbors with the desired sum are found
    
    while (1) {
        // Move in the current direction
        for (int k = 0; k < steps; k++) {
            x = i;
            y = j;
            
            // Calculate the sum of the current cell and its neighbors
            sum = 0;
            sum += (i-1 >= 0) ? (i-1)*2 : 0; // Top neighbor
            sum += (j-1 >= 0) ? (j-1)*2 : 0; // Left neighbor
            sum += i*2; // Current cell
            sum += j*2; // Right neighbor
            sum += (i+1)*2; // Bottom neighbor
            
            if (sum == N) {
                found = 1;
                break;
            }
            
            // Move to the next cell in the current direction
            switch (direction) {
                case 0: j++; break; // Move right
                case 1: i++; break; // Move down
                case 2: j--; break; // Move left
                case 3: i--; break; // Move up
            }
        }
        
        if (found || steps == 0) // Exit if the neighbors are found or steps reach 0
            break;
        
        direction = (direction + 1) % 4; // Change direction
        
        if (direction == 0 || direction == 2) // Increment steps every two direction changes
            steps++;
    }
    
    if (found) {
        printf("(%d, %d) and (%d, %d) are neighbors whose sum is %d\n", x, y, i, j, N);
    } else {
        printf("No neighbors whose sum is %d\n", N);
    }
    
    return 0;
}
