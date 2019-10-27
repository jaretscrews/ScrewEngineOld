#pragma once

#include "ScrewBaseCompnent.h"
#include "SDL2/SDL.h"

namespace ScrewEngine
{
    class ScrewInput : public ScrewBaseCompnent
    {
    public:
        ScrewInput();
        ~ScrewInput();

        void Update(uint32_t deltaTime) override;
        bool ShouldExit();
    private:
        SDL_Event event;
        bool shouldExit;
    };
}