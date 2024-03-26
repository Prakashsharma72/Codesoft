#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct TodoItem {
    string task;
    bool completed;

    TodoItem(const string& t) : task(t), completed(false) {}
};

// Manage the todo list
class TodoList {
private:
    vector<TodoItem> items;

public:
    // Add a new task 
    void addTask(const string& task) {
        items.push_back(TodoItem(task));
        cout << "Task added: " << task << endl;
    }

    // Mark a task completed
    void markAsCompleted(int index) {
        if (index >= 0 && index < items.size()) {
            items[index].completed = true;
            cout << "Task completed: " << items[index].task << endl;
        } else {
            cout << "Invalid index!" << endl;
        }
    }

    // Print all tasks in the list
    void printTasks() {
        if (items.empty()) {
            cout << "Todo list is empty." << endl;
        } else {
            cout << "Todo List:" << endl;
            for (size_t i = 0; i < items.size(); ++i) {
                cout << i + 1 << ". ";
                if (items[i].completed)
                    cout << "[X] ";
                else
                    cout << "[ ] ";
                cout << items[i].task << endl;
            }
        }
    }
};

int main() {
    TodoList todoList;
    int choice;

    do {
        cout << "\nTodo List Menu:\n";
        cout << "1. Add Task\n";
        cout << "2. Mark Task as Completed\n";
        cout << "3. Print Tasks\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string task;
                cout << "Enter task: ";
                cin.ignore();
                getline(cin, task);
                todoList.addTask(task);
                break;
            }
            case 2: {
                int index;
                cout << "Enter task index to mark as completed: ";
                cin >> index;
                todoList.markAsCompleted(index - 1);
                break;
            }
            case 3:
                todoList.printTasks();
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }
    } while (choice != 4);

    return 0;
}
