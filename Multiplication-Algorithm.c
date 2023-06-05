#include <stdio.h>
#include <stdlib.h>

int main()
{
    int td1[] = {8,9};
    int td2[] = {5,9};
    int digits = 2;
    // Multiply the digits between them
    int fspair = td1[1] * td2[1];
    int scpair = td1[0] * td2[1];
    int trpair = td1[1] * td2[0];
    int ftpair = td1[0] * td2[0];
    // Print the operations
    printf("   %d%d \n x %d%d \n -----\n", td1[0], td1[1], td2[0], td2[1]);
    printf("   %d \n  %d \n  %d \n %d\n", fspair, scpair, trpair, ftpair);
    printf(" -----\n ");
    // Transfer all integers int arrays!
    

    return 0;
}
