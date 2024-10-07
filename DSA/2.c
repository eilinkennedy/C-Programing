#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
} *head = NULL;

void insertFront() {
    int item;
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    
    if (temp == NULL) {
        printf("MEMORY ALLOCATION FAILED.\n");
        return;
    }

    printf("Enter the data to be inserted: ");
    scanf("%d", &item);
    temp->data = item;
    temp->link = head;
    head = temp;
    printf("%d INSERTED AT FRONT.\n", item);
}

void insertRandom() {
    int item, key;
    struct Node* temp;
    struct Node* ptr1, *ptr2;

    if (head == NULL) {
        insertFront();
        return;
    }

    printf("Enter the data to be inserted: ");
    scanf("%d", &item);
    printf("Enter the key value: ");
    scanf("%d", &key);

    temp = (struct Node*)malloc(sizeof(struct Node));
    if (temp == NULL) {
        printf("MEMORY ALLOCATION FAILED.\n");
        return;
    }
    
    temp->data = item;
    
    ptr1 = head;
    // Special case if the key is at the head
    if (ptr1->data == key) {
        temp->link = head;
        head = temp;
        return;
    }
    
    while (ptr1 != NULL && ptr1->data != key) {
        ptr2 = ptr1;
        ptr1 = ptr1->link;
    }

    if (ptr1 != NULL) {
        temp->link = ptr1;
        ptr2->link = temp;
        printf("%d INSERTED AFTER %d.\n", item, key);
    } else {
        printf("Key %d not found, inserting at end.\n", key);
        ptr2->link = temp;
        temp->link = NULL;
    }
}

void insertEnd() {
    int item;
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    
    if (temp == NULL) {
        printf("MEMORY ALLOCATION FAILED.\n");
        return;
    }

    printf("Enter the data to be inserted: ");
    scanf("%d", &item);
    
    temp->data = item;
    temp->link = NULL;

    if (head == NULL) {
        head = temp;
    } else {
        struct Node* ptr = head;
        while (ptr->link != NULL) {
            ptr = ptr->link;
        }
        ptr->link = temp;
    }
}

void deleteFront() {
    if (head == NULL) {
        printf("LINKED LIST IS EMPTY.\n");
        return;
    }

    struct Node* temp = head;
    head = head->link;
    free(temp);
    printf("Node deleted from front.\n");
}

void deleteEnd() {
    if (head == NULL) {
        printf("LINKED LIST IS EMPTY.\n");
        return;
    }

    struct Node* ptr1 = head;
    struct Node* ptr2 = NULL;

    while (ptr1->link != NULL) {
        ptr2 = ptr1;
        ptr1 = ptr1->link;
    }

    if (ptr2 == NULL) {
        head = NULL;  // Only one node case
    } else {
        ptr2->link = NULL;
    }
    free(ptr1);
    printf("Node deleted from end.\n");
}

void Traverse() {
    struct Node* ptr = head;
    if (head == NULL) {
        printf("LINKED LIST IS EMPTY.\n");
        return;
    }

    printf("List is: ");
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}

int main() {
    int choice = 0;

    while (choice != 8) {
        printf("****** LINKED LIST OPERATIONS ******\n");
        printf("1. INSERTION AT FRONT\n");
        printf("2. INSERTION AT RANDOM POSITION\n");
        printf("3. INSERTION AT END\n");
        printf("4. DELETION FROM FRONT\n");
        printf("5. DELETION FROM RANDOM POSITION\n"); // Unimplemented
        printf("6. DELETION FROM END\n");
        printf("7. TRAVERSE / DISPLAY LIST\n");
        printf("8. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insertFront(); break;
            case 2: insertRandom(); break;
            case 3: insertEnd(); break;
            case 4: deleteFront(); break;
            case 5: printf("Functionality not implemented.\n"); break;
            case 6: deleteEnd(); break;
            case 7: Traverse(); break;
            case 8: printf("Exiting\n"); break;
            default: printf("INVALID CHOICE\n");
        }
    }

    return 0;
}

