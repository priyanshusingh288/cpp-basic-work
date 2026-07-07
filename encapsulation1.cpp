#include<iostream>
#include<string>
using namespace std;

class cat{
    private:
    string petname;

    public:
    string getpetname()
    {
        return petname;
    }
    void setname(string newname){
        petname = newname;
    }
};
int main(){
    cat name;
    name.setname("tom");

    cout<<"name = "<<name.getpetname();

    return 0;
}