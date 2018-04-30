#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};
    node *head;

int linkedlist() {
	if (head == NULL)
	return 1;
	else return 0; }

void InsFront(int nilai){
    node *baru;
    baru = new node;
    baru->data=nilai;
    baru->next=NULL;
    if(linkedlist()==1){
        head = baru;
        head->next=NULL;
    }else{
        baru->next=head;
        head=baru;
    }

}
int main (){
    int nilai;
    InsFront(nilai);
}
