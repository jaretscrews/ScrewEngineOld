#include "ScrewRenderer.h"
#include "SDL2/SDL.h"
#include <stdexcept>

namespace ScrewEngine
{
    ScrewRenderer::ScrewRenderer() :
        renderer(nullptr)
    {
    }

    ScrewRenderer::~ScrewRenderer()
    {
        SDL_DestroyRenderer(renderer);
    }

    void ScrewRenderer::Init(SDL_Window* window)
    {
        renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
        if(renderer == NULL)
            throw std::runtime_error("Couldn't initialize renderer");
    }

    void ScrewRenderer::PaintFrame()
    {
        SDL_SetRenderDrawColor(renderer, 0, 255, 0, SDL_ALPHA_OPAQUE);
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);
    }
}