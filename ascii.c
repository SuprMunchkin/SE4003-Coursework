#include <stdio.h>      // For printf function
#include <stdbool.h>    // For boolean type
int main (void) {
    // Assignment called for four columns, but only two fields of information. 
    // I interpreted this to mean each row should have two columns of ASCII values and their corresponding character
    printf("\tASCII Table:\n");
    printf("----------------------------------------------\n");
    printf("Decimal\t| Char\t|| Decimal | Char\n");
    printf("----------------------------------------------\n");
    for (int ascii = 0; ascii < 65; ascii++) {
        bool skip = false;
        // This switch statement marks all the fully non-printable characters on the left side of the table to be skipped.
        // Some technically non-printable characters are still included because they have a printable represnetation.
        // The right side of the table only has one fully non-printable character, handled later. 
        switch (ascii) {
            case 0: skip = true; break;
            //case 2: char1 = "STX"; break;
            //case 3: char1 = "ETX"; break;
            //case 4: char1 = "EOT"; break;
            //case 5: char1 = "ENQ"; break;
            //case 6: char1 = "ACK"; break;
            case 7: skip = true; break;
            case 8: skip = true; break;
            case 9: skip = true; break;
            case 10: skip = true; break;
            case 11: skip = true; break;
            case 12: skip = true; break;
            case 13: skip = true; break;
            case 14: skip = true; break;
            case 15: skip = true; break;
            case 27: skip = true; break;
            default: break;
            }
        if (skip) {                     // Using space character to represent non-printable characters for better formatting.
            printf("  %d\t| %c\t||  %d\t   | %c\n", ascii, ' ', ascii + 64, ascii + 64);
        } else if(ascii + 64 > 127) {   // This case covers the only non-printable character in the second half of the table.
            printf("  %d\t| %c\t||  %d\t   | %c\n", ascii, ascii, ascii + 64, ' ');
        } else {
            printf("  %d\t| %c\t||  %d\t   | %c\n", ascii, ascii, ascii + 64, ascii + 64);
        }
    }
}