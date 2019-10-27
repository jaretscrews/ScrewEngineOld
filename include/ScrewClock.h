#pragma once

#include "ScrewBaseCompnent.h"
#include <array>

namespace ScrewEngine
{
    static constexpr uint8_t FRAME_VALUES = 200;
    class ScrewClock : public ScrewBaseCompnent
    {
    public:
        ScrewClock();
        ~ScrewClock();
        void Update(uint32_t deltaTime) override;
        uint32_t Tick();
    private:
        uint32_t lastTime;
        uint32_t deltaTime;
        uint32_t frameCount;
        std::array<uint32_t, FRAME_VALUES> frameTimes; 
    };
}