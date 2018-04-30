#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};
    node *head;

int isEmpty() {
	if (head == NULL)
	return 1;
	else return 0;
}

void InsFront(int nilai){
    node *baru;
    baru = new node;
    baru->data=nilai;
    baru->next=NULL;
    if(isEmpty()==1){
        head = baru;
        head->next=NULL;
    }else{
        baru->next=head;
        head=baru;
    }
}

void InsBack(int nilai){
    node *baru, *bantu;
    baru=new node;
    baru->data=nilai;
    baru->next=NULL;
    if(isEmpty()==1){
        head=baru;
        head->next=NULL;
    }else{
        bantu=head;
        while(bantu->next!=NULL){
            bantu=bantu->next;
        }
        bantu->next=baru;
    }
    cout<<"\n\n Data dimasukkan ke dalam list \n\n";
}

void Display(){
    node *baru=new node;
    baru=head;
    if (isEmpty()==0){
        cout<<"\n\n Data yang ada dalam list \n\n";
    while(baru!=NULL){
        cout<<baru->data<<" ";
        baru=baru->next;
    	}
    }
}

void DelFront()
  {
    node *baru=new node;
    baru=head;
    head=head->next;
    delete baru;
  }

void DelBack(){
    node *after=new node;
    node *before=new node;
    after=head;
    while(after->next!=NULL)
    {
      before=after;
      after=after->next;
    }
    tail=before;
    before->next=NULL;
    delete after;
}
