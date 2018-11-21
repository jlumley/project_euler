#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node {
    int val;
    struct Node *next;
}node_t;

void push(node_t **, int);
void printList(node_t *);
int get(node_t *, int);
void set(node_t *, int, int);
void add(node_t **, node_t *);
int countList(node_t *);

int main (int argc, const char *argv[]) {
    FILE *filePointer;
    char buff[100];
    filePointer = fopen("p13_data", "r");
    node_t *list = NULL;

    // read the first line in the file
    fscanf(filePointer, "%s\n", buff);
    int len = strlen(buff)-1;
    while (len >= 0) {
        push(&list, buff[len]-'0');
        len--;
    }

    int x =0;
    while (!feof(filePointer) && x < 100){
        node_t *list2 = NULL;
        fscanf(filePointer, "%s\n", buff);
        int len = strlen(buff)-1;
        while (len >= 0) {
            push(&list2, buff[len]-'0');
            len--;
        }
        add(&list, list2);
        x++;
    }

    printList(list);
    printf("\ndigit count: %d\n", countList(list));
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
        printf("%d", node->val);
        node = node->next;
    }
    printf("\n");
}

int countList(node_t *node) {
    int count = 0;
    while (node != NULL) {
        count ++;
        node = node->next;
    }
    return count;
}

int get(node_t *node, int index){
    int i = 0;
    while (node != NULL) {
        if (i == index){
            return node->val;
        }
        i++;
        node = node->next;
    }
    return 0;
}
void set(node_t *node, int index, int value) {
    int i = 0;
    while (node != NULL) {
        if (i == index){
            node->val = value;
        }
        i++;
        node = node->next;
    }
}
void add(node_t **list1, node_t *list2) {
    int carryOver = 0;
    for (int i=1; i <= countList(list2); i++) {
        int i1 = countList(*list1)-i;
        int i2 = countList(list2)-i;
        set(*list1, i1, get(*list1, i1)+carryOver);
        carryOver = 0;
        int x = get(*list1, i1)+get(list2, i2);
        //printf("%d ", i1);
        if (x >= 10) {
            x -= 10;
            carryOver = 1;
        }
        set(*list1, i1, x);
    }
    if (carryOver == 1) {
        int i1 = countList(*list1)-countList(list2)-1;
        if (i1 >= 0) {
            set(*list1, i1, get(*list1, i1)+1);
        } else {
            push(list1, 1);
        }
    }
}
