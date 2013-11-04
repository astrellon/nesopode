#pragma once

#include <cstdint>

#include <string>
#include <array>
using std::string;
using std::array;

namespace nes
{
    class Op
    {
    public:
        Op();
        Op(int8_t inst_value, int8_t addr, int8_t size, int8_t cycles);
        ~Op();

        int8_t inst_value() const;
        int8_t addr() const;
        int8_t size() const;
        int8_t cycles() const;

        static const int8_t ADC;
        static const int8_t AND;
        static const int8_t ASL;
        static const int8_t BCC;
        static const int8_t BCS;
        static const int8_t BEQ;
        static const int8_t BIT;
        static const int8_t BMI;
        static const int8_t BNE;
        static const int8_t BPL;
        static const int8_t BRK;
        static const int8_t BVC;
        static const int8_t BVS;
        static const int8_t CLC;
        static const int8_t CLD;
        static const int8_t CLI;
        static const int8_t CLV;
        static const int8_t CMP;
        static const int8_t CPX;
        static const int8_t CPY;
        static const int8_t DEC;
        static const int8_t DEX;
        static const int8_t DEY;
        static const int8_t EOR;
        static const int8_t INC;
        static const int8_t INX;
        static const int8_t INY;
        static const int8_t JMP;
        static const int8_t JSR;
        static const int8_t LDA;
        static const int8_t LDX;
        static const int8_t LDY;
        static const int8_t LSR;
        static const int8_t NOP;
        static const int8_t ORA;
        static const int8_t PHA;
        static const int8_t PHP;
        static const int8_t PLA;
        static const int8_t PLP;
        static const int8_t ROL;
        static const int8_t ROR;
        static const int8_t RTI;
        static const int8_t RTS;
        static const int8_t SBC;
        static const int8_t SEC;
        static const int8_t SED;
        static const int8_t SEI;
        static const int8_t STA;
        static const int8_t STX;
        static const int8_t STY;
        static const int8_t TAX;
        static const int8_t TAY;
        static const int8_t TSX;
        static const int8_t TXA;
        static const int8_t TXS;
        static const int8_t TYA;
        static const int8_t DUMMY;

        static string name(int8_t type);

    private:
        int8_t inst_value_;
        int8_t addr_;
        int8_t size_;
        int8_t cycles_;
    };

    class Addr
    {
    public:
        static const int8_t ZP;
        static const int8_t REL;
        static const int8_t IMP;
        static const int8_t ABS;
        static const int8_t ACC;
        static const int8_t IMM;
        static const int8_t ZPX;
        static const int8_t ZPY;
        static const int8_t ABSX;
        static const int8_t ABSY;
        static const int8_t PREIDXIND;
        static const int8_t POSTIDXIND;
        static const int8_t INDABS;

        static string name(int8_t type);
    };


    class CPUInfo
    {
    public:
        CPUInfo();
        ~CPUInfo();

        const Op &op(int8_t index) const;

        CPUInfo *createOps();

    private:

        Op ops_[256];
    };
}

