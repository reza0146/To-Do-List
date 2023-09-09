#include <string>
#include <iostream>
#include "task.hpp"

Task::Task(std::string new_desc, bool new_state) : description_(new_desc), state_complete_(new_state) {}
Task::~Task() {}

void Task::ToggleState() {
    state_complete_ = !state_complete_;
}


std::string Task::get_description() {
    return description_; 
}

bool Task::get_state() {
    return state_complete_;
}


void Task::PrintInfo() {
    std::cout << description_ << "\n";
    std::cout << state_complete_ << "\n";
}
