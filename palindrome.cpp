#include<iostream>
using namespace std;

bool palindrome(string str){
    int left = 0;
    int right = str.length()-1;

    while(left<right){
        if(str[left] != str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main(){
    cout<<"enter the text to ckeck palii: ";
    string text;
    cin>>text;
    if(palindrome(text)){
        cout<<text<<" is a palindrome:";

    }
    else{
      cout<<text<<" is not a palindrome";
       return 0;
    }

}