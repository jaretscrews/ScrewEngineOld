#include "ScrewInput.h"

namespace ScrewEngine
{
    ScrewInput::ScrewInput() :
        event(),
        shouldExit(false)
    {
    }

    ScrewInput::~ScrewInput()
    {
    }

    void ScrewInput::Update(uint32_t)
    {
        while( SDL_PollEvent( &event ) ){
            switch( event.type ){
            case SDL_QUIT:
                shouldExit = true;
                break;

            case SDL_KEYDOWN:
                break;

            case SDL_KEYUP:
                break;

            default:
                break;
            }
        }
    }

    bool ScrewInput::ShouldExit()
    {
        return shouldExit;
    }
}