#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtMiddle(struct Node** head, int data, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (position <= 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node* current = *head;
    for (int i = 1; i < position && current != NULL; i++) {
        current = current->next;
    }

    if (current == NULL) {
        printf("Position out of bounds.\n");
        free(newNode);
        return;
    }

    newNode->next = current->next;
    current->next = newNode;
}

void displayList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    // Create a sample linked list
    for (int i = 1; i <= 10; i++) {
        insertAtMiddle(&head, i, i - 1); // Insert at middle position i-1
    }

    printf("Original linked list:\n");
    displayList(head);

    // Insert a value at the middle
    int valueToInsert = 23;
    int middlePosition = 3;
    insertAtMiddle(&head, valueToInsert, middlePosition);

    printf("Linked list after insertion:\n");
    displayList(head);

    // Free memory (cleanup)
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
