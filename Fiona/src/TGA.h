#pragma once

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Base.h"
#include "Image.h"

namespace Fiona {

    struct TGA
    {
        uint8_t m_IdLength;
        uint8_t m_ColormapType;
        uint8_t m_ImageType;
        uint16_t m_ColormapOrigin;
        uint16_t m_ColormapLength;
        uint8_t m_ColormapDepth;
        uint16_t m_XOrigin;
        uint16_t m_YOrigin;
        uint16_t m_Width;
        uint16_t m_Height;
        uint8_t m_PixelDepth;
        uint8_t m_Descriptor;
    };

}
