#include "SDL.h" 
#undef main

#include "ScrewDisplay.h"
#include "ScrewInput.h"
#include "ScrewClock.h"

using namespace ScrewEngine;

int main(void)
{
    ScrewDisplay display("Screw Engine", 640, 480);
    ScrewInput input;
    ScrewClock clock;
    for(;;)
    {
        auto deltaTime = clock.Tick();
        display.Update(deltaTime);
        input.Update(deltaTime);
        clock.Update(deltaTime);
        if(input.ShouldExit())
            break;
        SDL_Delay(20);
    }

    SDL_Quit();

    return 0;
}