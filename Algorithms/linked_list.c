#include<stdio.h>
#include<stdlib.h>

typedef struct intNode{
    int num;
    struct intNode *next;
}intNode;

intNode *createNew(){
    intNode *node = (intNode *)calloc(1,sizeof(intNode));
    node->num = 0;
    node->next = NULL;
    return node;
}

intNode *insertHead(intNode *head, intNode *insert){
    insert->next = head;
    return insert;
}

void printAll(intNode *head){
    intNode *p = head;
    while(p!=NULL){
        printf("%d\n",p->num);
        p = p->next;
    }
}

void deleteAll(intNode *head){
    intNode *p = head;
    intNode *q = NULL;
    while (p!=NULL){
        q = p->next;
        free(p);
        p = q;
    }
}

intNode *findNode(int number, intNode *head){
    intNode *p = head;
    while(p!= NULL){
        if (p->num == number){
            printf("Found\n");
            return p;
        }
        p = p->next;
    }
    return NULL;
}

void insertTail(intNode *head, intNode *insert){
    if(head != NULL){
        intNode *p = head;
        intNode *q = p;
        while(p != NULL){
            q = p;
            p = p->next;
        }
        q->next = insert;
        insert->next = NULL;
    }
    else{
        printf("Your list is empty\n");
    }
}


int main(){
    int choice=0;
    intNode *head=NULL;
    intNode *new;
    int number;
    while(choice!=4){
        printf("1 - Add\n");
        printf("2 - Print\n");
        printf("3 - Update\n");
        printf("4 - Exit\n");
        scanf("%d",&choice);
        getchar();
        if (choice == 1){
            new = createNew();
            printf("Enter number: ");
            scanf("%d",&number);
            getchar();
            new->num = number;
            int a;
            printf("Insert head (1) or tail (2)\n");
            scanf("%d",&a);
            getchar();
            if(a == 1)
                head = insertHead(head,new);
            else if(a == 2)
                insertTail(head,new);
        }
        if(choice == 2){
            printAll(head);
        }
        if (choice == 3){
            printf("Enter number to find: \n");
            scanf("%d",&number);
            getchar();
            intNode *p = findNode(number,head);
            if (p!= NULL){
                printf("Update number: \n");
                scanf("%d",&number);
                getchar();
                p->num = number;
            }
            else{
                printf("Not found\n");
            }
        }
    }
    deleteAll(head);
    return 0;
}