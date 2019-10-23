#pragma once

#include "ScrewRenderer.h"

class SDL_Window;

namespace ScrewEngine
{
    class ScrewDisplay
    {
    public:
        ScrewDisplay();
        ~ScrewDisplay();

        void Tick();
    private:
        SDL_Window* window;

        ScrewRenderer renderer;
    };
}