#pragma once

#include "ScrewBaseCompnent.h"

class SDL_Renderer;
class SDL_Window;

namespace ScrewEngine
{
    class ScrewRenderer : public ScrewBaseCompnent
    {
    public:
        ScrewRenderer();
        ~ScrewRenderer();

        void Init(SDL_Window*);

        void Update(uint32_t deltaTime) override;
    private:
        void PaintFrame();
        SDL_Renderer* renderer;
    };
}