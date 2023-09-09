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
    

    // Task my_task1("Wash the Dishes", false);
    // Task my_task2("Take out the garbage", false);
    // Task my_task3("Call mom", false);
    // std::vector<Task> task_list = {my_task1, my_task2, my_task3};

    // TaskList my_task_list(task_list);
    // std::cout << my_task_list.print_list();




    // // This does not work, probably because the vector saved inside my_task_list is a copy of the individual tasks.
    // // my_task1.toggleState();
    // // my_task1.print_info();
    // // std::cout << my_task_list.print_list();

    // my_task_list.toggleStateByIdx(1);
    // std::cout << my_task_list.print_list();

    // std::cout << task_list[1].get_state();

    // Task my_task4("Paint wall" , true);
    // my_task_list.add_end_list(my_task4);
    // std::cout << my_task_list.print_list();





    // my_task1.print_info();
    // my_task1.toggleState();
    // my_task1.print_info();
    



}
