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

    void ScrewInput::Tick()
    {
        while( SDL_PollEvent( &event ) ){
            /* We are only worried about SDL_KEYDOWN and SDL_KEYUP events */
            switch( event.type ){
            case SDL_QUIT:
                shouldExit = true;
                break;
                
            case SDL_KEYDOWN:
                printf( "Key press detected\n" );
                break;

            case SDL_KEYUP:
                printf( "Key release detected\n" );
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