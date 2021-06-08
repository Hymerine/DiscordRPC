#include <iostream>
#include "Discord.h"

Discord* g_Discord;

int main()
{
    g_Discord->Initialize(); //Here we initialize the rpc
    g_Discord->Update(); //And here we update them
    std::cout << "Hello World!\n";
    system("PAUSE");
}

