
#include <string>
#include <vector>

#ifndef TASK_H
#define TASK_H

class Task {
  public:
  Task() {}
    Task(std::string task) : task_(task) {}

    void addTask(const Task& task);
    void updateTask(const Task& task);
    void deleteTask(const Task& task);
// focus on these features for now 


  private:
    std::vector<Task> tasks_;
    int id_;
    std::string task_;
    bool todo_ = true;
    bool inprogress_ = false;
    bool done_ = false;
    std::string createdAt_;
    std::string updatedAt_;
// May need to update these variables, specifically the bool variables

};
#endif