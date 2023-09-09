#include <iostream>
#include <string>

void PrintMainMenu() {
    std::cout << "============ Menu ============\n" 
    << "What do you want to do with your todo list?" << "\n" 
    << "1. Add item" << "\n"
    << "2. Remove item" << "\n"
    << "3. Show the to do list" << "\n"
    << "4. Mark a task complete/incomplete" << "\n"
    << "5. Exit" << "\n"
    << "==============================\n";
}

void PrintAddMenu() {
    std::cout << "Enter task description: " << "\n";
}

void PrintRemoveMenu() {
    std::cout << "Enter the index of the Task you want to remove from the list:\n";
}

void PrintToggleMenu() {
    std::cout << "Enter the index of the Task you want to mark complete/incomplete:\n";
}

std::string BoolToString(bool const &b) {
    return b ? "1" : "0";
}