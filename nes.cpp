#include "nes.h"

#include "cpu.h"
#include "memory.h"

namespace nes
{
    NES::NES() :
        running_(false)
    {
        cpu_mem_ = unique_ptr<Memory>(new Memory(0x10000));
        ppu_mem_ = unique_ptr<Memory>(new Memory(0x8000));
        spr_mem_ = unique_ptr<Memory>(new Memory(0x100));

        cpu_ = unique_ptr<CPU>(new CPU(this));
    }
    NES::~NES()
    {

    }

    CPU *NES::cpu() const
    {
        return cpu_.get();
    }
    Memory *NES::cpu_mem() const
    {
        return cpu_mem_.get();
    }
    Memory *NES::ppu_mem() const
    {
        return ppu_mem_.get();
    }
    Memory *NES::spr_mem() const
    {
        return spr_mem_.get();
    }

}

