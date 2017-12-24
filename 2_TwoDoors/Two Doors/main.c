//
//  main.c
//  Two Doors
//
//  Created by Yongwoo Huh on 11/30/17.
//  Copyright © 2017 YongwooHuh. All rights reserved.
//
// Assignment 2: Two doors

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char play;
    char choice;
    
    printf("Welcome to Two doors.\n");
    printf("Would you like to play? (y/n): ");
    scanf("%c", &play); // change %d -> %c
    
    if (play == 'y') {   // change = -> ==
            // change all print -> printf
        printf("\nYou are a prisoner in a room with 2 doors and 2 guards.\n");
        printf("One of the doors will guide you to freedom and behind the other is a hangman --you don't know which is which.\n");
        printf("One of the guards always tells the truth and the other always lies. You don't know which one is the truth-teller or the liar either.\n");
        printf("You have to choose and open one of these doors, but you can only ask a single question to one of the guards.\n");
        printf("What do you ask so you can pick the door to freedom?\n\n");
        printf("\t1.Ask the truth-guard to point to the door of doom.\n");
        printf("\t2.Ask the liar-guard to point to the door of doom.\n");
        printf("\t3.Doesn't matter which one you pick.\n");
        scanf(" %c", &choice);    // change scan -> scanf, %f -> %c, choice -> &choice
        // change "%c" -> " %c": blank space before %c is for the newline character in the input buffer.
        
        char* answer = "No matter which one you choose the guards both tell you which door leads to death, and therefore you can pick the other door.\n";
        // change char -> char*
        // change 1, 2, 3 -> '1', '2', '3': choice is a char
        switch (choice) {
            case '1':
                printf("%s", answer); // change c -> %s
                break;
            case '2':
                printf("%s", answer); // change c -> %s
                break;
            case '3':
                printf("%s", answer); // change c -> %s
                break;
            default:
                break;
        }
    }
    
    return 0; // change 1 -> 0
}
