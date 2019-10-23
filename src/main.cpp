#include "SDL2/SDL.h" 

#include "ScrewDisplay.h"

using namespace ScrewEngine;

int main(void)
{
    ScrewDisplay display;
    
    SDL_Renderer *renderer = SDL_CreateRenderer(display.GetWindow(), -1, SDL_RENDERER_SOFTWARE);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);

    SDL_Delay(3000);

    SDL_Quit();

    return 0;
}