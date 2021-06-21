#include<iostream>
using namespace std;

void binarySearch(int arr[], int size,int val){
	int mid = size/2;
	int pos=-1;
    if(arr[mid]==val){
    	pos=mid;
	}
	else{
		if(val<arr[mid]){
			for(int i=0; i<mid;i++){
				if(arr[i]==val){
				  pos=i;
				}
			}
		}
		else{
			for(int i=mid+1;i<size;i++){
				if(arr[i]==val){
					pos=i;
				}
			}
		}
	}
	 if(pos==-1){
	 	cout<<"unsuccessful search"<<endl;
	 }
	 else{
	 	cout<<"element found at position "<<pos<<endl;
	 }
}

int main(){
	int marks[]={10,20,30,40,50,60,70,80,90,100};
	int size = sizeof(marks)/sizeof(marks[0]);
	binarySearch(marks,size,100);
	return 0;
}
