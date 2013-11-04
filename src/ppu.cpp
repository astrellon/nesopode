#include "ppu.h"

#include "nes.h"
#include "memory.h"

namespace nes
{
    PPU::PPU(NES *nes) :
        nes_(nes),
        ppu_mem_(nes->ppu_mem()),
        spr_mem_(nes->spr_mem()),
        show_spr_0hit_(false),
        show_sound_buffer_(false),
        clip_tv_column_(true),
        clip_tv_row_(false)
    {
        
    }
    PPU::~PPU()
    {

    }
}

