#include <iostream>
#include <vector>
#include <string>
using namespace std;

class ToDoList {
private:
    vector<string> tasks;
public:
    void addTask(const string& task) {
        tasks.push_back(task);
        cout << "Task added: " << task << endl;
    }

    void removeTask(int index) {
        if (index < 1 || index > tasks.size()) {
            cout << "Invalid index." << endl;
            return;
        }
        cout << "Task removed: " << tasks[index - 1] << endl;
        tasks.erase(tasks.begin() + index - 1);
    }

    void showTasks() {
        if (tasks.empty()) {
            cout << "No tasks available." << endl;
            return;
        }
        cout << "To-Do List:" << endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
    }
};

int main() {
    ToDoList todo;
    int choice;
    string task;
    
    while (true) {
        cout << "\nOptions:\n1. Add Task\n2. Remove Task\n3. Show Tasks\n4. Exit\nEnter choice: ";
        cin >> choice;
        cin.ignore();
        
        switch (choice) {
            case 1:
                cout << "Enter task: ";
                getline(cin, task);
                todo.addTask(task);
                break;
            case 2:
                int index;
                cout << "Enter task index to remove: ";
                cin >> index;
                todo.removeTask(index);
                break;
            case 3:
                todo.showTasks();
                break;
            case 4:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }
}
