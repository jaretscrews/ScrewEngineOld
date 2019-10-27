#include "SDL.h" 
#undef main

#include "ScrewDisplay.h"
#include "ScrewInput.h"

using namespace ScrewEngine;

int main(void)
{
    ScrewDisplay display;
    ScrewInput input;
    
    for(;;)
    {
        display.Tick();
        input.Tick();
        if(input.ShouldExit())
            break;
    }

    SDL_Quit();

    return 0;
}