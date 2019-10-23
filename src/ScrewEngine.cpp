#include "SDL2/SDL.h" 

#include "ScrewDisplay.h"

using namespace ScrewEngine;

int main(void)
{
    ScrewDisplay display;
    
    display.Tick();
    
    SDL_Delay(3000);

    SDL_Quit();

    return 0;
}