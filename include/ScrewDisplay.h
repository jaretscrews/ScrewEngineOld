#pragma once

#include "ScrewRenderer.h"
#include "ScrewBaseCompnent.h"

class SDL_Window;

namespace ScrewEngine
{
    class ScrewDisplay : public ScrewBaseCompnent
    {
    public:
        ScrewDisplay();
        ~ScrewDisplay();

        void Tick() override;
    private:
        SDL_Window* window;

        ScrewRenderer renderer;
    };
}