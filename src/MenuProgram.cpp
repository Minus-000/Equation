#include <MenuProgram.h>

void MenuProgram::run()
{
    // in menu
    // nhap choice
    // thuc hien task
    // choice = 0 thi end
    bool running = true;
    while (running)
    {
        printMenu();
        int choice = getChoice();
        doTask(choice);
        if (choice == EXIT) running = false;
    }
}

int MenuProgram::getChoice()
{
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    return choice;
}
