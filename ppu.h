#pragma once

namespace nes
{
    class NES;
    class Memory;

    class PPU
    {
    public:
        PPU(NES *nes);
        ~PPU();

    private:
        NES *nes_;
        Memory *ppu_mem_;
        Memory *spr_mem_;

        bool show_spr_0hit_;
        bool show_sound_buffer_;
        bool clip_tv_column_;
        bool clip_tv_row_;


    };
}

