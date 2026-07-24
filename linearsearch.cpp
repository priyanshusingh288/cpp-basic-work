#include<iostream>
using namespace std;

int linear_search(int data[],int size,int target);

int main(){
    int data[] = {4,3,7,5,2,45,66,7,8,87,90};
    int size = sizeof(data)/sizeof(data[0]);
    cout<<"4,3,7,5,2,45,66,7,8,87,90 : "<<'\n';
    int target;
    cin>>target;
    
    int result = linear_search(data, size, target);
    
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
}
int linear_search(int data[],int size,int target){
    for(int i =0 ; i < size; i++){
        if(data[i] == target){
         return i;
        }
        
    }return -1;
}