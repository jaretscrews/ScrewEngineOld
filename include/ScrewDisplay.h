#pragma once

class SDL_Window;

namespace ScrewEngine
{
    class ScrewDisplay
    {
    public:
        ScrewDisplay();
        ~ScrewDisplay();
        SDL_Window* GetWindow();  
    private:
        SDL_Window* window;
    };
}