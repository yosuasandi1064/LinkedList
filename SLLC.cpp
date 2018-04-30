/*Muhammad Rifki Setiawan - 1717051004
  Muhammad Rama Wicaksono - 1717051062
  Yosua Sandi Susanto     - 1717051064
  Lofanny Wahyu Dandi     - 1757051010
  */
#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};
node *head, *tail;

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
    cout<<"\n Data "<<nilai<<" dimasukkan ke dalam list \n";
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
    cout<<"\n Data "<<nilai<<" dimasukkan ke dalam list \n";
}

void Display(){
    node *baru=new node;
    baru=head;
    if (isEmpty()==0){
        cout<<"\n Data yang ada dalam list \n\n";
    while(baru!=NULL){
        cout<<baru->data<<" ";
        baru=baru->next;
        }
    }
    cout<<endl<<endl;
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

void InsertPos(int letak, int nilai){
    node *before=new node;
    node *after=new node;
    node *baru=new node;
    after=head;
    for(int i=1;i<letak;i++)
    {
      before=after;
      after=after->next;
    }
    baru->data=nilai;
    before->next=baru;
    baru->next=after;

    cout<<"\n\n Data "<<nilai<<" dimasukkan ke dalam list \n";
}

int main (){
    cout<<"LINKED LIST\n\n";
    cout<<"1. Insert Depan\n";
    cout<<"2. Insert Belakang\n";
    cout<<"3. Hapus Depan\n";
    cout<<"4. Hapus Belakang\n";
    cout<<"5. Insert Sesuai letak\n";
    menu:
    int pil;
    int nilai, letak;
    cout<<"Masukkan Pilihan = ";cin>>pil;
    switch (pil){
        case 1 : cout<<"Masukkan data = ";
                 cin>>nilai;
                 InsFront(nilai);
                 Display();
                 goto menu;
        case 2 : cout<<"Masukkan data = ";
                 cin>>nilai;
                 InsBack(nilai);
                 Display();
                 goto menu;
        case 3 : DelFront();
                 cout<<"\nBerhasil di hapus.\n";
                 Display();
                 goto menu;
        case 4 : DelBack();
                 cout<<"\nBerhasil di hapus.\n";
                 Display();
                 goto menu;
        case 5 : cout<<"Masukkan Letak = ";cin>>letak;
                 cout<<"Masukkan Nilai = ";cin>>nilai;
                 InsertPos(letak,nilai);
                 Display();
                 goto menu;
    }
    return 0;
}
