#pragma once

#include "ScrewBaseCompnent.h"
#include "SDL.h"

namespace ScrewEngine
{
    class ScrewInput : public ScrewBaseCompnent
    {
    public:
        ScrewInput();
        ~ScrewInput();

        void Tick() override;
        bool ShouldExit();
    private:
        SDL_Event event;
        bool shouldExit;
    };
}