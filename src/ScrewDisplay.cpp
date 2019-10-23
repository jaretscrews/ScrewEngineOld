#include "SDL2/SDL.h"
#include "ScrewDisplay.h"

namespace ScrewEngine
{
    ScrewDisplay::ScrewDisplay() :
        window(nullptr),
        renderer()
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

        renderer.Init(window);
    }

    ScrewDisplay::~ScrewDisplay()
    {
        SDL_DestroyWindow(window);
    }

    void ScrewDisplay::Tick()
    {
        renderer.PaintFrame();
    }
}