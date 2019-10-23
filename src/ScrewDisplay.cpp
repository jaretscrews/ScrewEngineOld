#include "SDL2/SDL.h"
#include "ScrewDisplay.h"

namespace ScrewEngine
{
    ScrewDisplay::ScrewDisplay() :
        window(nullptr)
    {
        SDL_Init(SDL_INIT_VIDEO);

        window = SDL_CreateWindow(
            "SDL2Test",
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED,
            480,
            480,
            0
        );
    }

    ScrewDisplay::~ScrewDisplay()
    {
        SDL_DestroyWindow(window);
    }

    SDL_Window* ScrewDisplay::GetWindow()
    {
        return window;
    }
}