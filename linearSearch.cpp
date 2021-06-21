#include<iostream>
using namespace std;

void search(int arr[], int size,int val){
	int i=0,pos=-1;
	while(i<size){
		if(arr[i]==val){
			pos=i;
			cout<<"Position of searched value is: "<<pos<<endl;
		}
		i++;
	}
	if(pos==-1){
		cout<<"unsuccessful sarch"<<endl;
	}
}

int main(){
	int arr[]={10,30,50,20,60,100};
	int size = sizeof(arr)/sizeof(arr[0]);
	search(arr,size,200);
	return 0;
}
