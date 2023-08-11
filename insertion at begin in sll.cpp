#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
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
    for (int i = 3; i >= 1; i--) {
        insertAtBeginning(&head, i);
    }

    printf("Original linked list:\n");
    displayList(head);

    // Insert a value at the beginning
    int valueToInsert = 5;
    insertAtBeginning(&head, valueToInsert);

    printf("Linked list after insertion:\n");
    displayList(head);

   
    return 0;
}
