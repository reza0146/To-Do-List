#include <string>
#include <iostream>
#include <vector>
#include "task.hpp"
#include "task_list.hpp"
#include "misc.hpp"


TaskList::TaskList(std::vector<Task> new_list) {
    list_ = new_list;
};
TaskList::~TaskList() {};

std::string TaskList::PrintList() { 
    std::string list_str = "";

    for (int i = 0; i < list_.size(); i++) {

        list_str = list_str + BoolToString(list_[i].get_state()) + " " + list_[i].get_description() + "\n";

    }

    return list_str;
}

void TaskList::AddEndList(Task new_task) {
    list_.push_back(new_task);
}


void TaskList::RemoveEndList() {
    list_.pop_back();
}


void TaskList::ToggleStateByIndex(int idx) {
    list_[idx].ToggleState();
}

void TaskList::RemoveTaskByIndex(int idx) {
    list_.erase(list_.begin()+idx);
}




