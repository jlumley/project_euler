#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node {
    int val;
    struct Node *next;
}node_t;

void push(node_t **, int);
void printList(node_t * node);

int main (int argc, const char *argv[]) {
    FILE *filePointer;
    char buff[100];
    filePointer = fopen("p13_data", "r");
    node_t *list = NULL;

    // read the first line in the file
    fscanf(filePointer, "%s\n", buff);
    int len = strlen(buff)-2;
    while (len >= 0) {
        //printf("%d\n", buff[len]-'0');
        push(&list, buff[len]-'0');
        len--;
    }
    printList(list);

    while (!feof(filePointer)){
        fscanf(filePointer, "%s\n", buff);
        //printf("%s\n", buff);
    }
    return 0;
}

void push(node_t ** head, int val) {
    node_t *new_node = (node_t*) malloc(sizeof(node_t));
    new_node->val = val;
    new_node->next = (* head);
    (* head) = new_node;
}

void printList(node_t *node) {
    while (node != NULL) {
        printf("%d\n", node->val);
        node = node->next;
    }
}
