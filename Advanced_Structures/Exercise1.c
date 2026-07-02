#include <stdio.h>
#include <stdlib.h>

typedef struct element{
    int val;
    struct element*next;
} LLElement;
LLElement*createNode(int x);
LLElement*createList(FILE*fp);

void deleteNode(LLElement*a1);
LLElement*deleteElements(LLElement*head);

void printList(LLElement*head);

int main()
{
    FILE*fp;
    LLElement* head;
    fp=fopen("askisi3.dat","rb");

    head=createList(fp);

    printf("Create list \n");
    printList(head);

    head=deleteElements(head);

    printf("after deletion List\n");
    printList(head);


}
LLElement* createNode(int x){
    LLElement *a;
    a=(LLElement*)malloc(sizeof(LLElement));
    a->val=x;
    a->next=NULL;
    return a;
}
LLElement* createList(FILE*fp){
    LLElement *head=NULL,*p=NULL;
    int x;
    while(feof(fp)==0){
            fread(&x,sizeof(int),1,fp);

        if(head==NULL){
                head=createNode(x);
        p=head;
        }
        else{
                p->next=createNode(x);
                p=p->next;
        }
    }
    return head;
}
void deleteNode(LLElement*a1){
    LLElement *p;


    p=a1->next;
    a1->next=p->next;
    free(p);
}

 LLElement*deleteElements(LLElement*head){
    LLElement *prev,*p;
    p=prev=head;
    while(p!=NULL){
            if(p->val<0){

                    if(p==head){
                            head=head->next;
                    free(p);
                    p=prev=head;

                    }

                    else{
                            deleteNode(prev);
                    p=prev->next;

                    }
    }
                    else{
                            prev=p;
                    p=p->next;
                    }
            }
            return head;
    }

void printList(LLElement*head){
    while (head!=NULL){
            printf("%d ",head->val);
    head=head->next;
    }
    printf("\n");
}
