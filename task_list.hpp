#include <string>
#include <iostream>
#include <vector>



class TaskList {

    std::vector<Task> list_;


public:
    TaskList(std::vector<Task> new_list);
    ~TaskList();

    std::string PrintList();
    void AddEndList(Task new_task);
    void RemoveEndList();
    void ToggleStateByIndex(int idx);
    void RemoveTaskByIndex(int idx);

};

