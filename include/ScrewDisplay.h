#pragma once

#include "ScrewRenderer.h"
#include "ScrewBaseCompnent.h"

#include <string>

class SDL_Window;

namespace ScrewEngine
{
    class ScrewDisplay : public ScrewBaseCompnent
    {
    public:
        ScrewDisplay(std::string name, uint16_t width, uint16_t height);
        ~ScrewDisplay();

        // Delete unwanted constructors
        ScrewDisplay() = delete;

        void Update(uint32_t deltaTime) override;
    private:
        SDL_Window* window;
        std::string windowName;
        uint16_t windowWidth;
        uint16_t windowHeight;
        ScrewRenderer renderer;
    };
}