#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node* prev;
    int data;
    struct node* next;
};

int value() {
    int val;
    printf("\nEnter the value you want to insert: ");
    scanf("%d",&val);
    return val;
}

// Add at beginning
void addatbegining(struct node** q) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value();
    newnode->next = *q;
    if(*q!=NULL)
        (*q)->prev=newnode;
    newnode->prev=NULL;
    *q = newnode;
}

// Add at end
void addattheend(struct node** q) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    
    newnode->data = value();
    newnode->next = NULL;

    if (*q == NULL) {
        *q = newnode;
        newnode->prev=NULL;
    } else {
        struct node* r = *q;
        while (r->next != NULL)
            r = r->next;
        r->next = newnode;
        newnode->prev=r;
        
    }
}

// Display list
void display(struct node *q) {
    if (q == NULL) {
        printf("\nList is empty.\n");
        return;
    }
    printf("\nLinked List:\n");
    while (q != NULL) {
        printf("%d\t", q->data);
        q = q->next;
    }
}

// Delete at beginning
void deleteatbeginning(struct node** q) {
    if (*q == NULL) {
        printf("\nList is empty. Cannot delete.\n");
        return;
    }
    struct node* temp = *q;
    *q = (*q)->next;
    if(*q!=NULL)
    
    (*q)->prev=NULL;
    printf("\nDeleted element: %d\n", temp->data);
    free(temp);
}

// Delete at end
void deleteattheend(struct node** q) {
    if (*q == NULL) {
        printf("\nList is empty. Cannot delete.\n");
        return;
    }
    struct node* temp = *q;
    struct node* prevs = NULL;

    while (temp->next != NULL) {
        prevs = temp;
        temp = temp->next;
    }

    if (prevs == NULL) {
        // Only one node in list
        *q = NULL;
    } else {
        prevs->next = NULL;
    }

    printf("\nDeleted element: %d\n", temp->data);
    free(temp);
}

// Delete specific value
    void deletevalue(struct node** q) {
    if (*q == NULL) {
        printf("\nList is empty. Cannot delete.\n");
        return;
    }
    int val;
    printf("\nEnter the value to delete: ");
    scanf("%d",&val);

    struct node* temp = *q;

    while (temp != NULL && temp->data != val)
        temp = temp->next;

    if (temp == NULL) {
        printf("\nValue %d not found in the list.\n", val);
        return;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        *q = temp->next; // deleting first node

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    printf("\nDeleted element: %d\n", temp->data);
    free(temp);
}

int main() {
    int choice;
    struct node* p = NULL;

    while (1) {
        printf("\nEnter your choice:\n");
        printf("1: Display\n2: Add at beginning\n3: Add at the end\n");
        printf("4: Delete at beginning\n5: Delete at end\n6: Delete specific value\n7: Exit\nChoice: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1: display(p); break;
            case 2: addatbegining(&p); break;
            case 3: addattheend(&p); break;
            case 4: deleteatbeginning(&p); break;
            case 5: deleteattheend(&p); break;
            case 6: deletevalue(&p); break;
            case 7: exit(0);
            default: printf("\nInvalid choice! Try again.\n");
        }
    }

    return 0;
}