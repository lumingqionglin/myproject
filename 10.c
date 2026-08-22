#include<stdio.h>
#include<stdlib.h>
typedef struct LinkNode{
    int num;
    struct LinkNode* next;
} Node;
Node*create(int n){
    Node*head=NULL,*tail=NULL;
    for(int i=0;i<n;i++){
        Node*p=(Node*)malloc(sizeof(Node));
        if(p==NULL){
            exit(1);
        }
        p->num=i+1;
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
void move(Node*head,int m,int n,int a){
    Node*p=head,*q=head;
    if(m+n>=a){
        while(p->num!=m){
            p=p->next;
        }
        if(p==head){
            head=head->next;
            p->next=NULL;
            while(q->next!=NULL){
                q=q->next;
            }
            q->next=p;
        }else{
            while(q->next==p){
                q=q->next;
            }
            q->next=p->next;
            p->next=NULL;
            while(q->next!=NULL){
                q=q->next;
            }
            q->next=p;
        }
    }else if(m+n<=1){
        while(p->num!=m){
            p=p->next;
        }
        if(p==head){
            return;
        }   
        while(q->next!=p){
            q=q->next;
        }
        q->next=p->next;
        p->next=head;
        head=p;
    }else{
        if(n>0){
            while(p->num!=m){
                p=p->next;
            }
            q=p;
            if(p==head){
                head=head->next;
                for(int i=0;i<n;i++){
                    q=q->next;
                }
                p->next=q->next;
                q->next=p;
            }
        }else if(n==0){
            return;
        }else if(n<0){
            while(p->num!=m){
                p=p->next;
            }
            while(q->next!=p){
                q=q->next;
            }
            q->next=p->next;
            q=head;
            for(int i=0;i<m+n-2;i++){
                q=q->next;
            }
            p->next=q->next;
            q->next=p;
        }
    }
}
void print(Node*head,int n){
    Node*p=head;
    for(int i=0;i<n;i++){
        printf("%d ",p->num);
        p=p->next;
    }
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    Node*head=create(n);
    for(int i=0;i<m;i++){
        int p,q;
        scanf(" %d%d",&p,&q);
        move(head,p,q,n);
    }
    print(head,n);
    return 0;
}