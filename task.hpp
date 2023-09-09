#include <string>


class Task {
    
    std::string description_;
    bool state_complete_;

public:
    Task(std::string new_desc, bool new_state = false);
    ~Task();

    std::string get_description();
    bool get_state();
    void ToggleState();
    void PrintInfo();

};