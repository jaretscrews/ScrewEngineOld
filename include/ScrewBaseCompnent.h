#pragma once

#include <stdint.h>

namespace ScrewEngine
{
    class ScrewBaseCompnent
    {
    public:
        virtual void Update(uint32_t deltaTime) = 0;
    };
}