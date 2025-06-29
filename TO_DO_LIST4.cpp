#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> list;
    int ch;
    string item;
    int n;

    while (true) {
        cout << "\nTo-Do List Menu:\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Delete Task\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> ch;

        cin.ignore(); 

        switch (ch) {
            case 1:
                cout << "Enter task: ";
                getline(cin, item);
                list.push_back(item);
                cout << "Task added.\n";
                break;

            case 2:
                if (list.empty()) {
                    cout << "No tasks.\n";
                } else {
                    cout << "\nTasks:\n";
                    for (int i = 0; i < list.size(); ++i) {
                        cout << i + 1 << ". " << list[i] << endl;
                    }
                }
                break;

            case 3:
                if (list.empty()) {
                    cout << "No tasks to delete.\n";
                } else {
                    cout << "Enter task number to delete: ";
                    cin >> n;
                    if (n >= 1 && n <= list.size()) {
                        list.erase(list.begin() + n - 1);
                        cout << "Task deleted.\n";
                    } else {
                        cout << "Invalid number.\n";
                    }
                }
                break;

            case 4:
                cout << "Exit.\n";
                return 0;

            default:
                cout << "Invalid choice.\n";
        }
    }

    return 0;
}