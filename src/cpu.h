#pragma once

#include <cstdint>

namespace nes
{
    class Memory;
    class NES;

    class CPU
    {
    public:

        typedef struct
        {
            int16_t acc;
            int16_t x;
            int16_t y;
            int16_t status;
            int16_t pc;
            int16_t sp;

            void init();
        } Registers;

        typedef struct
        {
            bool carry;
            bool zero;
            bool interrupt;
            bool decimal;
            bool brk;
            bool notused;
            bool overflow;
            bool sign;

            void init();
        } Flags;

        CPU(NES *nes);
        ~CPU();

    private:

        NES *nes_;
        Memory *mem_;
        Registers regs_;
        Flags flags_;

        bool irq_requested_;
        int32_t irq_type_;

        int32_t cycles_to_halt_;
        bool running_;
        bool crash_;
    };
}

