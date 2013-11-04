#include "cpu.h"

#include "nes.h"
#include "memory.h"

namespace nes
{
    void CPU::Registers::init()
    {
        acc = x = y = status = pc = sp = 0;
    }
    void CPU::Flags::init()
    {
        carry = zero = decimal = overflow = sign = false;
        interrupt = brk = notused = true;
    }

    CPU::CPU(NES *nes) :
        nes_(nes),
        mem_(nes->cpu_mem()),
        irq_requested_(false),
        irq_type_(0),
        cycles_to_halt_(0),
        running_(false),
        crash_(false)
    {
        regs_.init();
        flags_.init();
    }
    CPU::~CPU()
    {

    }

}

