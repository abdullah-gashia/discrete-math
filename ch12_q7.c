#include <stdio.h>

char transition(char state, char input) {
    switch (state) {
        case '1':
            if (input == 'I' || input == 'i') return '1';
            if (input == 'G' || input == 'g') return '2';
            if (input == 'E' || input == 'e') return '4';
            break;
        case '2':
            if (input == 'O' || input == 'o') return '2';
            if (input == 'D' || input == 'd') return '3';
            if (input == 'A' || input == 'a') return '4';
            break;
        case '3':
            if (input == 'B' || input == 'b') return '3';
            break;
        case '4':
            if (input == 'Y' || input == 'y') return '3';
            if (input == 'A' || input == 'a') return '2';
            break;
    }
    return '0'; // Invalid transition
}

int main() {
    char state = '1'; // Start state
    char input;
    
    printf("Enter the input string (uppercase letters only, e.g., 'GOD'):\n");
    
    while ((input = getchar()) != '\n') {
        state = transition(state, input);
        if (state == '0') {
            printf("Invalid input. Rejected.\n");
            return 1;
        }
    }

    // Accepting states: 1, 3, 4
    if (state == '1' || state == '3' || state == '4') {
        printf("Accepted. Final state: %c\n", state);
    } else {
        printf("Rejected. Final state: %c\n", state);
    }
    
    return 0;
}
