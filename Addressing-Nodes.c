#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

int main()
{
    // Init
    Node *newNode_001 = malloc(sizeof(Node));
    Node *newNode_002 = malloc(sizeof(Node));
    // Assigning vars
    newNode_001->value = 5858;
    newNode_001->next = newNode_002;
    newNode_002->value = 5282;
    newNode_002->next = NULL;
    // See if the node selected is conneted to any node.
    isConnected(newNode_001);
    return 0;
}

int isConnected(Node *nodeArg) {
    if(nodeArg->next == NULL) {
        printf(" The node is not connected to another node!");
    } else {
        printf(" The node is connected to another node!");
    }
}
