#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int flight_number;
    int time;
    struct Node*next;
}Node;
Node*creat_list(int n){
    Node*head=NULL,*tail=NULL;
    for(int i=0;i<n;i++){
        Node*p=(Node*)malloc(sizeof(Node));
        if(p==NULL){
            exit(1);
        }
        scanf("%d%d",&p->flight_number,&p->time);
        p->next=NULL;
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
int main(){
    int n=0;
    scanf("%d",&n);
    Node*head=NULL;
    head=creat_list(n);
    int m=0;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        int delta=0;
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
    while(head!=NULL){
        head=p->next;
        free(p);
        p=head;
    }
    return 0;
}
