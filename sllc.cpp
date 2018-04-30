#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;
struct node{
	int data;
	node *next;
	};
	node *head = NULL;
	node *posisi;
	int option = 0;
int init(int nilai){
	node *baru;
	baru = new node;
	baru->data = nilai;
	baru->next = NULL;
	if (head == NULL){
		head = baru;
		head->next = NULL;
	}
	else{
		baru->next = head;
		head = baru;
	}
	return 0;
}

void tambah_depan(){
	node *baru;
	baru = new node;
	cout<<"Masukkan data : ";
	cin>>baru->data;
	baru->next=NULL;
	if (head==NULL){
		head = baru;
	head->next = NULL;
}
	else {
		baru->next = head;
		head = baru;
	}
}
void tambah_tengaht()
{
node *baru, *bantu;
  int posisi_sisip;
  if(head != NULL)
  {
    cout<<"Akan disisip setelah Data Ke ? : ";
    cin>>posisi_sisip;
    baru =new node;
   bantu=head;
     
    for(int i=1;i<posisi_sisip-1;i++) {
      if(bantu->next != NULL)
        bantu=bantu->next;
      else
        break; 
    }
  cout << "Masukkan data : ";
  cin >> baru->data;
  baru->next=bantu->next;
  bantu->next=baru;
  }
  else
  {
    cout<<"Belum ada data !! silahkan isi data dulu....";
  }
} 
void tambah_belakang(){
	node *temp, *temp2;
        temp = new node;
	cout<<"Masukkan data";
	cin>>temp->data;
	temp->next=NULL;
	if (head==NULL){
		head = temp;
		posisi = head;
	}
	else{
		temp2=head;
		while(temp2->next!=NULL){
			temp2=temp2->next;
		}
		temp2->next = temp;
	}
}
void hapus_depan(){
	node *temp1,*temp2;
	if(head==NULL)
		cout<<"List kosong !"<<endl;
	else {
	temp1=head;
		if(temp1->next==NULL){
			delete temp1;
	head=NULL;
		}
		else {
		while(temp1->next!=NULL){
		temp2 = temp1;
		temp1=temp1->next;
	}
		delete temp1;
		temp2->next=NULL;
		}
	}
		
			
			
			
			
			
