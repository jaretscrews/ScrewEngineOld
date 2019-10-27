#pragma once

#include "SDL.h"

class SDL_Renderer;
class SDL_Window;

namespace ScrewEngine
{
    class ScrewRenderer
    {
    public:
        ScrewRenderer();
        ~ScrewRenderer();

        void Init(SDL_Window*);

        void PaintFrame();
    private:
        SDL_Renderer* renderer;
    };
}