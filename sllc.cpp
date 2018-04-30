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
