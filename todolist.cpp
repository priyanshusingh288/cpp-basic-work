#include<iostream>
#include<vector>
#include<limits>
#include<string>

using namespace std;

class Todolist{
    private:
    vector<string> tasks;
    
    public:
    void add(const string& task){
        tasks.push_back(task);
        cout<<"Task has been succesfully added: "<<endl;
    }

    void update(int index, const string& newTask) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index] = newTask;
            cout << "Task updated successfully!" << endl;
        } else {
            cout << "Invalid task number!" << endl;
        }
    }


    void display() const{
        if(tasks.empty()){
            cout<<" TO DO LIST IS EMPTY  : "<<endl;
            return;
        }
        cout<<"======Your To Do List========"<<endl;
        for(size_t i =0 ; i < tasks.size() ; i++){
            cout<<i+1<<" . "<<tasks[i]<<endl;
        }
        cout<<"=================================="<<endl;

    }

    void deleteTask(int index){
        if (index >= 0 && index < tasks.size()) {
            tasks.erase(tasks.begin() + index);
            cout << "Task deleted successfully!" << endl;
        } else {
            cout << "Invalid task number!" << endl;
        }
    }
    

    int getSize() const {
        return tasks.size();
    }

};

void clearInput() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main(){
    Todolist mytodo;
    int choice;
    string task_description;
    int index;

    while(true){
        cout << "\n=== To-Do List Menu ===" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. Update Task" << endl;
        cout << "3. Delete Task" << endl;
        cout << "4. View Tasks" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        
        if(!(cin >> choice)){
            clearInput();
            cout<<"-- INVALID CHOICE/INVALID INPUT-- :("<<endl;
            continue;
        }
        clearInput();

        switch(choice){

            case 1:
            cout<<"enter task description: ";
            getline(cin,task_description);
            if(!task_description.empty()){
                mytodo.add(task_description);
            }
            else{
                cout<<"task cant be filled empty: "<<endl;
            }
            break;

            case 2:
            mytodo.display();
            cout<<"enter the task to update: ";
            if(cin>>index){
                clearInput();
                cout<<"enter the new task: ";
                mytodo.update(index-1,task_description);
            }
            else{
                cout<<"invalid input :"<<'\n';
            }
            break;

            case 3:
            mytodo.display();
            cout<<"enter the task to delete: "<<endl;
            if(cin>>index){
                clearInput();
                mytodo.deleteTask(index-1);

            }else{
                cout<<"invalid input : "<<'\n';
            }
            break;

            case 4:
            mytodo.display();
            break;

            case 5:
              cout<<"closing the program byee!!"<<endl;
              return 0;
            break;

            default:
            cout<<"invalid choice : "<<endl;

        }
    }
    return 0;
}
