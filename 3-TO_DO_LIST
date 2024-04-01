// <<---TO DO LIST CODE--->>

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Task // Created the structure named Task--->
{
    string Description;
    bool Done;
};

class To_do // Class is created to perform the opeartions of the program--->
{
private:
    vector<Task> task_list; // Vector is used to store the Tasks which are added into the list--->
    int operation;

public:
    // Constructor--->
    To_do();

    // Basic Functions Declaration--->
    void newTask();
    void addTask(const string &Description);
    void taskComp(size_t index);
    void removeTask(size_t index);
    void viewTask();

    // Perform funtion to perform the basic functions--->
    void perform();
};

To_do::To_do() // definiion for that construtor which will only print some guidence-->
{
    cout << "Operations are:-" << endl;
    cout << "1. Add Task" << endl;
    cout << "2. View task_list" << endl;
    cout << "3. Mark the Task as completed" << endl;
    cout << "4. Delete the task" << endl;
    cout << "5. Exit" << endl;
}

void To_do::newTask() // The newTask Function which uses the addTask function to add the new task--->
{
    string taskDescription;
    cout << "Enter the task Content which you have to add into the Task_list: ";
    cin.ignore();
    getline(cin, taskDescription);
    addTask(taskDescription); // addTask function call..
}

void To_do::addTask(const string &Description) // Defined the add task fuction --->
{
    Task T;
    T.Description = Description;
    T.Done = false;
    task_list.push_back(T);
    cout << "Your Task added successfully!" << endl;
}

void To_do::taskComp(size_t index) // To mark the task as Completed--->
{
    if (index > 0 && index <= task_list.size())
    {
        task_list[index - 1].Done = true;
        cout << "Task marked as completed!!!" << endl;
    }
    else
        cout << "Invalid index no." << endl;
}

void To_do::removeTask(size_t index) // To remove the task from the list --->
{
    if (index > 0 && index <= task_list.size())
    {
        task_list.erase(task_list.begin() + index - 1);
        cout << "Task removed successfully!\n";
    }
    else
        cout << "Invalid task index.\n";
}

void To_do::viewTask() // viewTask function to show the task_list--->
{
    if (task_list.empty()) // if there is no task into the list then...
    {
        cout << "No Tasks added!!!";
    }
    else
    {
        cout << "----------Your task_list----------" << endl;
        for (int i = 0; i < task_list.size(); i++)
        {
            cout << i + 1 << ". ";
            cout << (task_list[i].Done ? "[Completed] " : "[Pending] ");
            cout << task_list[i].Description << endl;
        }
    }
}

void To_do::perform()  // Perform function to perform all the function --->
{
    size_t taskIndex;
    do
    {
        cout << "Enter the operation you want to perform:-";
        cin >> operation;
        switch (operation)
        {
        case 1:
            newTask();
            break;
        case 2:
            viewTask();
            break;
        case 3:
            cout << "Enter the index of the task to mark as completed: ";
            cin >> taskIndex;
            taskComp(taskIndex);
            break;
        case 4:
            cout << "Enter the index of the task to remove that task: ";
            cin >> taskIndex;
            removeTask(taskIndex);
            break;
        case 5:
            exit(1);
            break;
        default:
            cout << "Invalid choice!!!" << endl;
            exit(1);
            break;
        }
    } while (operation <= 6);
}

int main()  // Main function--->
{

    cout << "--------------Create Your To-Do List--------------" << endl;

    To_do obj;
    obj.perform();  // Perform function called by the object of To_do class-->
    return 0;
}
