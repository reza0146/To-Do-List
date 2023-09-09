#include <iostream>
#include <string>
#include <vector>
#include "task.hpp"
#include "task_list.hpp"
#include "misc.hpp"

int main() {

    int flag = 0;
    TaskList my_task_list({});
    
    int response;
    std::string descp;
    int modification_index;

    while (flag == 0)
    {
        

        PrintMainMenu(); 
        std::cin >> response;

        switch (response) {
            case 1: {
                PrintAddMenu();

                std::cin.ignore();
                std::getline(std::cin, descp, '\n');

                Task my_task(descp);
                my_task_list.AddEndList(my_task);

            }
            break;
            case 2: 
                PrintRemoveMenu();
                std::cin.ignore();
                std::cin >> modification_index;
                my_task_list.RemoveTaskByIndex(modification_index);
                break;
            case 3:
                std::cout << my_task_list.PrintList();
                break;
            case 4: 
                PrintToggleMenu();
                std::cin.ignore();
                std::cin >> modification_index;
                my_task_list.ToggleStateByIndex(modification_index);
                break;
            case 5:
                flag = 1;
                break;
            default:
                std::cout << "Error!\n";
                flag = 1;
                break;
        } 
    }
    
}
