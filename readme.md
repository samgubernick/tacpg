# tacpg
Tactical Action Command Prompt Game

(C++17)

I'm building this game to focus on the primary strategy elements of X-Com. As a turn-based game,
I'm excluding textures and rendering and instead using the command prompt to handle player actions.
The interface is streamlined so that the command prompt handles and displays all menus,
environment interactions, other turn events, and character biographies.

std::cin sends player input to an input class that forwards it to the current menu, which then
processes it and displays the result using std::cout.