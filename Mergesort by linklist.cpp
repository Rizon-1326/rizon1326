#include <stdio.h>
#include <stdlib.h>

/* Link list node */
struct Node {
    int data;
    struct Node* next;
};

/* function prototypes */
struct Node* SortedMerge(struct Node* a, struct Node* b);
void middle(struct Node* source,
                    struct Node** frontRef, struct Node** backRef);

/* sorts the linked list by changing links */
void MergeSort(struct Node** headRef){
    struct Node* head = *headRef;
    struct Node* a;
    struct Node* b;

    /* Base case -- length 0 or 1 */
    if ((head == NULL) || (head->next == NULL)) {
        return;
    }

    middle(head, &a, &b);

    MergeSort(&a);
    MergeSort(&b);

    *headRef = SortedMerge(a, b);
}

struct Node* SortedMerge(struct Node* a, struct Node* b)
{
    struct Node* result = NULL;

    /* Base cases */
    if (a == NULL)
        return (b);
    else if (b == NULL)
        return (a);

    if (a->data <= b->data) {
        result = a;
        result->next = SortedMerge(a->next, b);
    }
    else {
        result = b;
        result->next = SortedMerge(a, b->next);
    }
    return (result);
}

/* This function splits the list from the middle */
/* After splitting Original list converts into two list 
   first list -> head to the node previous of middle and second list -> middle to end */

void middle(struct Node* source,
                    struct Node** frontRef, struct Node** backRef)
{
    struct Node* fast;
    struct Node* slow;
    slow = source;
    fast = source->next;

    /* Advance 'fast' two nodes, and advance 'slow' one node */
    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
    }

    /* 'slow' is before the midpoint in the list, so split it in two
    at that point. */
    *frontRef = source;
    *backRef = slow->next;
    slow->next = NULL;
}

/* Function to print linked list */
void printList(struct Node* node){
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

/* Function to insert a node at the beginning of the list */
void push(struct Node** head_ref, int new_data){
    /* allocate node */
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    /* assign the data */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head pointer to point to the new node */
    (*head_ref) = new_node;
}

int main(){
    
    struct Node* res = NULL;
    struct Node* a = NULL;

    /* Let's create a new linked lists */
   /* a: 8->9->5->3->2 */
    push(&a, 2);
    push(&a, 3);
    push(&a, 5);
    push(&a, 9);
    push(&a, 8);
    
    printf("Linked List before sorting: \n");
    printList(a);
    printf("\n");
    /* Sort the Linked List */
    MergeSort(&a);
    printf("Linked List after Sorting: \n");
    printList(a);

    getchar();
    return 0;
}
</stdlib.h></stdio.h>
