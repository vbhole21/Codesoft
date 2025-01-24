#include <iostream>
#include <vector>
#include <string>

class ToDoList {
private:
    struct Task {
        std::string description;
        bool isComplete;

        Task(const std::string& desc) : description(desc), isComplete(false) {}
    };

    std::vector<Task> tasks;

public:
    void addTask(const std::string& task) {
        tasks.emplace_back(task);
    }

    void displayTasks() const {
        if (tasks.empty()) {
            std::cout << "No tasks in the list." << std::endl;
            return;
        }
        std::cout << "To-Do List:" << std::endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            std::cout << i + 1 << ". " << tasks[i].description 
                      << (tasks[i].isComplete ? " [Complete]" : "") << std::endl;
        }
    }

    void removeTask(int index) {
        if (index < 1 || index > tasks.size()) {
            std::cout << "Invalid task number." << std::endl;
            return;
        }
        tasks.erase(tasks.begin() + index - 1);
    }

    void markTaskComplete(int index) {
        if (index < 1 || index > tasks.size()) {
            std::cout << "Invalid task number." << std::endl;
            return;
        }
        tasks[index - 1].isComplete = true;
    }
};

int main() {
    ToDoList todo;
    int choice;
    std::string task;
    int taskNumber;

    while (true) {
        std::cout << "1. Add Task\n2. Display Tasks\n3. Remove Task\n4. Mark Task Complete\n5. Exit\nEnter your choice: ";
        std::cin >> choice;
        std::cin.ignore(); // Ignore newline character left in the buffer

        switch (choice) {
            case 1:
                std::cout << "Enter task: ";
                std::getline(std::cin, task);
                todo.addTask(task);
                break;
            case 2:
                todo.displayTasks();
                break;
            case 3:
                std::cout << "Enter task number to remove: ";
                std::cin >> taskNumber;
                todo.removeTask(taskNumber);
                break;
            case 4:
                std::cout << "Enter task number to mark as complete: ";
                std::cin >> taskNumber;
                todo.markTaskComplete(taskNumber);
                break;
            case 5:
                return 0;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }
}
