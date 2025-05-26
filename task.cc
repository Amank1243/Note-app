#include "task.h"
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

void Task::addTask(const Task& task) {
    json j;
    j["description"] = std::string(task);
    std::ofstream file("tasks.json");
    file << j.dump(2);
    file.close();
}
void Task::updateTask(const Task& task) {}

void Task::deleteTask(const Task& task){}