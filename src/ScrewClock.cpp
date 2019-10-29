#include "SDL.h"
#include "ScrewClock.h"

#include <iostream>

namespace ScrewEngine
{
    ScrewClock::ScrewClock() :
        lastTime(0),
        deltaTime(0),
        frameCount(0),
        frameTimes()
    {
    }

    ScrewClock::~ScrewClock()
    {
    }

    void ScrewClock::Update(uint32_t deltaTime)
    {
        uint32_t framesPerSecond = 0;
        uint32_t frameIndex = ++frameCount % FRAME_VALUES;
        uint8_t count = 0;

        frameTimes[frameIndex] = deltaTime;
        for(const auto& time : frameTimes)
        {
            framesPerSecond += time;
        }
        if (frameCount < FRAME_VALUES)
            count = frameCount;
        else
            count = FRAME_VALUES;
        framesPerSecond /= count;
        framesPerSecond = 1000.f / framesPerSecond;
        std::cout << framesPerSecond << std::endl;
    }

    uint32_t ScrewClock::Tick()
    {
        auto tickTime = SDL_GetTicks();
        deltaTime = tickTime - lastTime;
        lastTime = tickTime;
        return deltaTime;
    }
}