//
//  main.c
//  LinkList
//
//  Created by Saurabh Verma on 12/11/14.
//  Copyright (c) 2014 Saurabh Verma. All rights reserved.
//

#include <stdio.h>

//new linklist node
struct ListNode {
    int data;
    struct ListNode *next;
    
};

//get length of linklist
int listLength(struct ListNode *head){
    struct ListNode *current = head;
    int count = 0;
    while (current!=NULL) {
        count++;
        current=current->next;
    }
    return count;
}


//insert a element in link list
void Insertelement(struct ListNode **head,int data,int position){
    int k=1;
    struct ListNode *p,*q,*newNode;
    newNode=(struct ListNode *)malloc(sizeof(struct ListNode));
    if (!newNode) {
        printf("Memory Error");
    }
    newNode->data=data;
    p=*head;
    
    //inserting at the biinning
    if (position==1) {
        newNode->next=p;
        *head=newNode;
    }
    else{
        //traverse the list untill the positon where to want inest
        while (p!=NULL && k<position) {
            k++;
            q=p;
            p=p->next;
        }
        q->next=newNode;
        newNode->next=p;
    }
}

//deleting the intermidiate node in linklist
void DeleteNodeFromLinkedList(struct ListNode **head,int position){
    
}



int main(int argc, const char * argv[]) {
    printf("Hello, World!\n");
    return 0;
}
