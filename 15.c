#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int flight_number;
    int time;
    struct Node*next;
}Node;
Node*create_list(int n);
void add_time(Node*head,int delta);
int main(){
    int n;
    scanf("%d",&n);
    Node*head=NULL;
    head=create_list(n);
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        int delta;
        scanf("%d",&delta);
        add_time(head,delta);
        Node*p=head;
        while(p!=NULL){
            printf("%d:%d ",p->flight_number,p->time);
            p=p->next;
        }
        printf("\n");
    }
    Node*p=head;
    do{
        free(head);
        p=p->next;
        head=p;
    }while(p!=NULL);
    return 0;
}
Node*create_list(int n){
    Node*head=NULL,*tail=NULL;
    for(int i=0;i<n;i++){
        Node*p=(Node*)malloc(sizeof(Node));
        if(p==NULL){
            exit(1);
        }
        p->next=NULL;
        scanf(" %d%d",&p->flight_number,&p->time);
        if(head==NULL){
            head=p;
            tail=p;
        }else{
            tail->next=p;
            tail=p;
        }
    }
    return head;
}
void add_time(Node*head,int delta){
    Node*p=head;
    while(p!=NULL){
        p->time+=delta;
        p=p->next;
    }
}