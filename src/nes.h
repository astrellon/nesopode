#pragma once

#include <memory>
using std::unique_ptr;

namespace nes
{
    class CPU;
    class Memory;

    class NES
    {
    public:

        NES();
        ~NES();

        CPU *cpu() const;
        Memory *cpu_mem() const;
        Memory *ppu_mem() const;
        Memory *spr_mem() const;
        
    private:

        unique_ptr<Memory> cpu_mem_;
        unique_ptr<Memory> ppu_mem_;
        unique_ptr<Memory> spr_mem_;

        unique_ptr<CPU> cpu_;

        bool running_;
    };
}

