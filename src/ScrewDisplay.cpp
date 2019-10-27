#include "SDL2/SDL.h"
#include "ScrewDisplay.h"

namespace ScrewEngine
{
    ScrewDisplay::ScrewDisplay(std::string name, uint16_t width, uint16_t height) :
        window(nullptr),
        windowName(name),
        windowWidth(width),
        windowHeight(height),
        renderer()
    {
        SDL_Init(SDL_INIT_VIDEO);

        window = SDL_CreateWindow(
            windowName.c_str(),
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED,
            windowWidth,
            windowHeight,
            0
        );

        renderer.Init(window);
    }

    ScrewDisplay::~ScrewDisplay()
    {
        SDL_DestroyWindow(window);
    }

    void ScrewDisplay::Update(uint32_t deltaTime)
    {
        renderer.Update(deltaTime);
    }
}