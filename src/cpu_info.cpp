#include "cpu_info.h"

namespace nes
{
    const int8_t Op::ADC = 0;
    const int8_t Op::AND = 1;
    const int8_t Op::ASL = 2;
    const int8_t Op::BCC = 3;
    const int8_t Op::BCS = 4;
    const int8_t Op::BEQ = 5;
    const int8_t Op::BIT = 6;
    const int8_t Op::BMI = 7;
    const int8_t Op::BNE = 8;
    const int8_t Op::BPL = 9;
    const int8_t Op::BRK = 10;
    const int8_t Op::BVC = 11;
    const int8_t Op::BVS = 12;
    const int8_t Op::CLC = 13;
    const int8_t Op::CLD = 14;
    const int8_t Op::CLI = 15;
    const int8_t Op::CLV = 16;
    const int8_t Op::CMP = 17;
    const int8_t Op::CPX = 18;
    const int8_t Op::CPY = 19;
    const int8_t Op::DEC = 20;
    const int8_t Op::DEX = 21;
    const int8_t Op::DEY = 22;
    const int8_t Op::EOR = 23;
    const int8_t Op::INC = 24;
    const int8_t Op::INX = 25;
    const int8_t Op::INY = 26;
    const int8_t Op::JMP = 27;
    const int8_t Op::JSR = 28;
    const int8_t Op::LDA = 29;
    const int8_t Op::LDX = 30;
    const int8_t Op::LDY = 31;
    const int8_t Op::LSR = 32;
    const int8_t Op::NOP = 33;
    const int8_t Op::ORA = 34;
    const int8_t Op::PHA = 35;
    const int8_t Op::PHP = 36;
    const int8_t Op::PLA = 37;
    const int8_t Op::PLP = 38;
    const int8_t Op::ROL = 39;
    const int8_t Op::ROR = 40;
    const int8_t Op::RTI = 41;
    const int8_t Op::RTS = 42;
    const int8_t Op::SBC = 43;
    const int8_t Op::SEC = 44;
    const int8_t Op::SED = 45;
    const int8_t Op::SEI = 46;
    const int8_t Op::STA = 47;
    const int8_t Op::STX = 48;
    const int8_t Op::STY = 49;
    const int8_t Op::TAX = 50;
    const int8_t Op::TAY = 51;
    const int8_t Op::TSX = 52;
    const int8_t Op::TXA = 53;
    const int8_t Op::TXS = 54;
    const int8_t Op::TYA = 55;
    const int8_t Op::DUMMY = 56;

    string Op::name(int8_t type)
    {
        switch (type)
        {
        case Op::ADC: return "ADC";
        case Op::AND: return "AND";
        case Op::ASL: return "ASL";
        case Op::BCC: return "BCC";
        case Op::BCS: return "BCS";
        case Op::BEQ: return "BEQ";
        case Op::BIT: return "BIT";
        case Op::BMI: return "BMI";
        case Op::BNE: return "BNE";
        case Op::BPL: return "BPL";
        case Op::BRK: return "BRK";
        case Op::BVC: return "BVC";
        case Op::BVS: return "BVS";
        case Op::CLC: return "CLC";
        case Op::CLD: return "CLD";
        case Op::CLI: return "CLI";
        case Op::CLV: return "CLV";
        case Op::CMP: return "CMP";
        case Op::CPX: return "CPX";
        case Op::CPY: return "CPY";
        case Op::DEC: return "DEC";
        case Op::DEX: return "DEX";
        case Op::DEY: return "DEY";
        case Op::EOR: return "EOR";
        case Op::INC: return "INC";
        case Op::INX: return "INX";
        case Op::INY: return "INY";
        case Op::JMP: return "JMP";
        case Op::JSR: return "JSR";
        case Op::LDA: return "LDA";
        case Op::LDX: return "LDX";
        case Op::LDY: return "LDY";
        case Op::LSR: return "LSR";
        case Op::NOP: return "NOP";
        case Op::ORA: return "ORA";
        case Op::PHA: return "PHA";
        case Op::PHP: return "PHP";
        case Op::PLA: return "PLA";
        case Op::PLP: return "PLP";
        case Op::ROL: return "ROL";
        case Op::ROR: return "ROR";
        case Op::RTI: return "RTI";
        case Op::RTS: return "RTS";
        case Op::SBC: return "SBC";
        case Op::SEC: return "SEC";
        case Op::SED: return "SED";
        case Op::SEI: return "SEI";
        case Op::STA: return "STA";
        case Op::STX: return "STX";
        case Op::STY: return "STY";
        case Op::TAX: return "TAX";
        case Op::TAY: return "TAY";
        case Op::TSX: return "TSX";
        case Op::TXA: return "TXA";
        case Op::TXS: return "TXS";
        case Op::TYA: return "TYA";
        case Op::DUMMY: return "DUMMY";
        }
        return "unknown";
    }

    Op::Op() :
        inst_value_(-1),
        addr_(-1),
        size_(-1),
        cycles_(-1)
    {

    }
    Op::Op(int8_t inst_value, int8_t addr, int8_t size, int8_t cycles) :
        inst_value_(inst_value),
        addr_(addr),
        size_(size),
        cycles_(cycles)
    {
        
    }
    Op::~Op()
    {

    }
    
    int8_t Op::inst_value() const
    {
        return inst_value_;
    }
    int8_t Op::addr() const
    {
        return addr_;
    }
    int8_t Op::size() const
    {
        return size_;
    }
    int8_t Op::cycles() const
    {
        return cycles_;
    }

    const int8_t Addr::ZP = 0;
    const int8_t Addr::REL = 1;
    const int8_t Addr::IMP = 2;
    const int8_t Addr::ABS = 3;
    const int8_t Addr::ACC = 4;
    const int8_t Addr::IMM = 5;
    const int8_t Addr::ZPX = 6;
    const int8_t Addr::ZPY = 7;
    const int8_t Addr::ABSX = 8;
    const int8_t Addr::ABSY = 9;
    const int8_t Addr::PREIDXIND = 10;
    const int8_t Addr::POSTIDXIND = 11;
    const int8_t Addr::INDABS = 12;

    string Addr::name(int8_t type)
    {
        switch (type)
        {
            case Addr::ZP:            return "Zero Page           ";
            case Addr::REL:           return "Relative            ";
            case Addr::IMP:           return "Implied             ";
            case Addr::ABS:           return "Absolute            ";
            case Addr::ACC:           return "Accumulator         ";
            case Addr::IMM:           return "Immediate           ";
            case Addr::ZPX:           return "Zero Page,X         ";
            case Addr::ZPY:           return "Zero Page,Y         ";
            case Addr::ABSX:          return "Absolute,X          ";
            case Addr::ABSY:          return "Absolute,Y          ";
            case Addr::PREIDXIND:     return "Preindexed Indirect ";
            case Addr::POSTIDXIND:    return "Postindexed Indirect";
            case Addr::INDABS:        return "Indirect Absolute   ";
        }
        return "unknown";
    }

    CPUInfo::CPUInfo()
    {

    }
    CPUInfo::~CPUInfo()
    {

    }

    const Op &CPUInfo::op(int8_t index) const
    {
        return ops_[index];
    }
    
    CPUInfo *CPUInfo::createOps()
    {
        // ADC:
        ops_[0x69] = Op(Op::ADC, Addr::IMM, 2, 2);
        ops_[0x65] = Op(Op::ADC, Addr::ZP, 2, 3);
        ops_[0x75] = Op(Op::ADC, Addr::ZPX, 2, 4);
        ops_[0x6D] = Op(Op::ADC, Addr::ABS, 3, 4);
        ops_[0x7D] = Op(Op::ADC, Addr::ABSX, 3, 4);
        ops_[0x79] = Op(Op::ADC, Addr::ABSY, 3, 4);
        ops_[0x61] = Op(Op::ADC, Addr::PREIDXIND, 2, 6);
        ops_[0x71] = Op(Op::ADC, Addr::POSTIDXIND, 2, 5);

        // AND:
        ops_[0x29] = Op(Op::AND, Addr::IMM, 2, 2);
        ops_[0x25] = Op(Op::AND, Addr::ZP, 2, 3);
        ops_[0x35] = Op(Op::AND, Addr::ZPX, 2, 4);
        ops_[0x2D] = Op(Op::AND, Addr::ABS, 3, 4);
        ops_[0x3D] = Op(Op::AND, Addr::ABSX, 3, 4);
        ops_[0x39] = Op(Op::AND, Addr::ABSY, 3, 4);
        ops_[0x21] = Op(Op::AND, Addr::PREIDXIND, 2, 6);
        ops_[0x31] = Op(Op::AND, Addr::POSTIDXIND, 2, 5);

        // ASL:
        ops_[0x0A] = Op(Op::ASL, Addr::ACC, 1, 2);
        ops_[0x06] = Op(Op::ASL, Addr::ZP, 2, 5);
        ops_[0x16] = Op(Op::ASL, Addr::ZPX, 2, 6);
        ops_[0x0E] = Op(Op::ASL, Addr::ABS, 3, 6);
        ops_[0x1E] = Op(Op::ASL, Addr::ABSX, 3, 7);

        // BCC:
        ops_[0x90] = Op(Op::BCC, Addr::REL, 2, 2);

        // BCS:
        ops_[0xB0] = Op(Op::BCS, Addr::REL, 2, 2);

        // BEQ:
        ops_[0xF0] = Op(Op::BEQ, Addr::REL, 2, 2);

        // BIT:
        ops_[0x24] = Op(Op::BIT, Addr::ZP, 2, 3);
        ops_[0x2C] = Op(Op::BIT, Addr::ABS, 3, 4);

        // BMI:
        ops_[0x30] = Op(Op::BMI, Addr::REL, 2, 2);

        // BNE:
        ops_[0xD0] = Op(Op::BNE, Addr::REL, 2, 2);

        // BPL:
        ops_[0x10] = Op(Op::BPL, Addr::REL, 2, 2);

        // BRK:
        ops_[0x00] = Op(Op::BRK, Addr::IMP, 1, 7);

        // BVC:
        ops_[0x50] = Op(Op::BVC, Addr::REL, 2, 2);

        // BVS:
        ops_[0x70] = Op(Op::BVS, Addr::REL, 2, 2);

        // CLC:
        ops_[0x18] = Op(Op::CLC, Addr::IMP, 1, 2);

        // CLD:
        ops_[0xD8] = Op(Op::CLD, Addr::IMP, 1, 2);

        // CLI:
        ops_[0x58] = Op(Op::CLI, Addr::IMP, 1, 2);

        // CLV:
        ops_[0xB8] = Op(Op::CLV, Addr::IMP, 1, 2);

        // CMP:
        ops_[0xC9] = Op(Op::CMP, Addr::IMM, 2, 2);
        ops_[0xC5] = Op(Op::CMP, Addr::ZP, 2, 3);
        ops_[0xD5] = Op(Op::CMP, Addr::ZPX, 2, 4);
        ops_[0xCD] = Op(Op::CMP, Addr::ABS, 3, 4);
        ops_[0xDD] = Op(Op::CMP, Addr::ABSX, 3, 4);
        ops_[0xD9] = Op(Op::CMP, Addr::ABSY, 3, 4);
        ops_[0xC1] = Op(Op::CMP, Addr::PREIDXIND, 2, 6);
        ops_[0xD1] = Op(Op::CMP, Addr::POSTIDXIND, 2, 5);

        // CPX:
        ops_[0xE0] = Op(Op::CPX, Addr::IMM, 2, 2);
        ops_[0xE4] = Op(Op::CPX, Addr::ZP, 2, 3);
        ops_[0xEC] = Op(Op::CPX, Addr::ABS, 3, 4);

        // CPY:
        ops_[0xC0] = Op(Op::CPY, Addr::IMM, 2, 2);
        ops_[0xC4] = Op(Op::CPY, Addr::ZP, 2, 3);
        ops_[0xCC] = Op(Op::CPY, Addr::ABS, 3, 4);

        // DEC:
        ops_[0xC6] = Op(Op::DEC, Addr::ZP, 2, 5);
        ops_[0xD6] = Op(Op::DEC, Addr::ZPX, 2, 6);
        ops_[0xCE] = Op(Op::DEC, Addr::ABS, 3, 6);
        ops_[0xDE] = Op(Op::DEC, Addr::ABSX, 3, 7);

        // DEX:
        ops_[0xCA] = Op(Op::DEX, Addr::IMP, 1, 2);

        // DEY:
        ops_[0x88] = Op(Op::DEY, Addr::IMP, 1, 2);

        // EOR:
        ops_[0x49] = Op(Op::EOR, Addr::IMM, 2, 2);
        ops_[0x45] = Op(Op::EOR, Addr::ZP, 2, 3);
        ops_[0x55] = Op(Op::EOR, Addr::ZPX, 2, 4);
        ops_[0x4D] = Op(Op::EOR, Addr::ABS, 3, 4);
        ops_[0x5D] = Op(Op::EOR, Addr::ABSX, 3, 4);
        ops_[0x59] = Op(Op::EOR, Addr::ABSY, 3, 4);
        ops_[0x41] = Op(Op::EOR, Addr::PREIDXIND, 2, 6);
        ops_[0x51] = Op(Op::EOR, Addr::POSTIDXIND, 2, 5);

        // INC:
        ops_[0xE6] = Op(Op::INC, Addr::ZP, 2, 5);
        ops_[0xF6] = Op(Op::INC, Addr::ZPX, 2, 6);
        ops_[0xEE] = Op(Op::INC, Addr::ABS, 3, 6);
        ops_[0xFE] = Op(Op::INC, Addr::ABSX, 3, 7);

        // INX:
        ops_[0xE8] = Op(Op::INX, Addr::IMP, 1, 2);

        // INY:
        ops_[0xC8] = Op(Op::INY, Addr::IMP, 1, 2);

        // JMP:
        ops_[0x4C] = Op(Op::JMP, Addr::ABS, 3, 3);
        ops_[0x6C] = Op(Op::JMP, Addr::INDABS, 3, 5);

        // JSR:
        ops_[0x20] = Op(Op::JSR, Addr::ABS, 3, 6);

        // LDA:
        ops_[0xA9] = Op(Op::LDA, Addr::IMM, 2, 2);
        ops_[0xA5] = Op(Op::LDA, Addr::ZP, 2, 3);
        ops_[0xB5] = Op(Op::LDA, Addr::ZPX, 2, 4);
        ops_[0xAD] = Op(Op::LDA, Addr::ABS, 3, 4);
        ops_[0xBD] = Op(Op::LDA, Addr::ABSX, 3, 4);
        ops_[0xB9] = Op(Op::LDA, Addr::ABSY, 3, 4);
        ops_[0xA1] = Op(Op::LDA, Addr::PREIDXIND, 2, 6);
        ops_[0xB1] = Op(Op::LDA, Addr::POSTIDXIND, 2, 5);

        // LDX:
        ops_[0xA2] = Op(Op::LDX, Addr::IMM, 2, 2);
        ops_[0xA6] = Op(Op::LDX, Addr::ZP, 2, 3);
        ops_[0xB6] = Op(Op::LDX, Addr::ZPY, 2, 4);
        ops_[0xAE] = Op(Op::LDX, Addr::ABS, 3, 4);
        ops_[0xBE] = Op(Op::LDX, Addr::ABSY, 3, 4);

        // LDY:
        ops_[0xA0] = Op(Op::LDY, Addr::IMM, 2, 2);
        ops_[0xA4] = Op(Op::LDY, Addr::ZP, 2, 3);
        ops_[0xB4] = Op(Op::LDY, Addr::ZPX, 2, 4);
        ops_[0xAC] = Op(Op::LDY, Addr::ABS, 3, 4);
        ops_[0xBC] = Op(Op::LDY, Addr::ABSX, 3, 4);

        // LSR:
        ops_[0x4A] = Op(Op::LSR, Addr::ACC, 1, 2);
        ops_[0x46] = Op(Op::LSR, Addr::ZP, 2, 5);
        ops_[0x56] = Op(Op::LSR, Addr::ZPX, 2, 6);
        ops_[0x4E] = Op(Op::LSR, Addr::ABS, 3, 6);
        ops_[0x5E] = Op(Op::LSR, Addr::ABSX, 3, 7);

        // NOP:
        ops_[0xEA] = Op(Op::NOP, Addr::IMP, 1, 2);

        // ORA:
        ops_[0x09] = Op(Op::ORA, Addr::IMM, 2, 2);
        ops_[0x05] = Op(Op::ORA, Addr::ZP, 2, 3);
        ops_[0x15] = Op(Op::ORA, Addr::ZPX, 2, 4);
        ops_[0x0D] = Op(Op::ORA, Addr::ABS, 3, 4);
        ops_[0x1D] = Op(Op::ORA, Addr::ABSX, 3, 4);
        ops_[0x19] = Op(Op::ORA, Addr::ABSY, 3, 4);
        ops_[0x01] = Op(Op::ORA, Addr::PREIDXIND, 2, 6);
        ops_[0x11] = Op(Op::ORA, Addr::POSTIDXIND, 2, 5);

        // PHA:
        ops_[0x48] = Op(Op::PHA, Addr::IMP, 1, 3);

        // PHP:
        ops_[0x08] = Op(Op::PHP, Addr::IMP, 1, 3);

        // PLA:
        ops_[0x68] = Op(Op::PLA, Addr::IMP, 1, 4);

        // PLP:
        ops_[0x28] = Op(Op::PLP, Addr::IMP, 1, 4);

        // ROL:
        ops_[0x2A] = Op(Op::ROL, Addr::ACC, 1, 2);
        ops_[0x26] = Op(Op::ROL, Addr::ZP, 2, 5);
        ops_[0x36] = Op(Op::ROL, Addr::ZPX, 2, 6);
        ops_[0x2E] = Op(Op::ROL, Addr::ABS, 3, 6);
        ops_[0x3E] = Op(Op::ROL, Addr::ABSX, 3, 7);

        // ROR:
        ops_[0x6A] = Op(Op::ROR, Addr::ACC, 1, 2);
        ops_[0x66] = Op(Op::ROR, Addr::ZP, 2, 5);
        ops_[0x76] = Op(Op::ROR, Addr::ZPX, 2, 6);
        ops_[0x6E] = Op(Op::ROR, Addr::ABS, 3, 6);
        ops_[0x7E] = Op(Op::ROR, Addr::ABSX, 3, 7);

        // RTI:
        ops_[0x40] = Op(Op::RTI, Addr::IMP, 1, 6);

        // RTS:
        ops_[0x60] = Op(Op::RTS, Addr::IMP, 1, 6);

        // SBC:
        ops_[0xE9] = Op(Op::SBC, Addr::IMM, 2, 2);
        ops_[0xE5] = Op(Op::SBC, Addr::ZP, 2, 3);
        ops_[0xF5] = Op(Op::SBC, Addr::ZPX, 2, 4);
        ops_[0xED] = Op(Op::SBC, Addr::ABS, 3, 4);
        ops_[0xFD] = Op(Op::SBC, Addr::ABSX, 3, 4);
        ops_[0xF9] = Op(Op::SBC, Addr::ABSY, 3, 4);
        ops_[0xE1] = Op(Op::SBC, Addr::PREIDXIND, 2, 6);
        ops_[0xF1] = Op(Op::SBC, Addr::POSTIDXIND, 2, 5);

        // SEC:
        ops_[0x38] = Op(Op::SEC, Addr::IMP, 1, 2);

        // SED:
        ops_[0xF8] = Op(Op::SED, Addr::IMP, 1, 2);

        // SEI:
        ops_[0x78] = Op(Op::SEI, Addr::IMP, 1, 2);

        // STA:
        ops_[0x85] = Op(Op::STA, Addr::ZP, 2, 3);
        ops_[0x95] = Op(Op::STA, Addr::ZPX, 2, 4);
        ops_[0x8D] = Op(Op::STA, Addr::ABS, 3, 4);
        ops_[0x9D] = Op(Op::STA, Addr::ABSX, 3, 5);
        ops_[0x99] = Op(Op::STA, Addr::ABSY, 3, 5);
        ops_[0x81] = Op(Op::STA, Addr::PREIDXIND, 2, 6);
        ops_[0x91] = Op(Op::STA, Addr::POSTIDXIND, 2, 6);

        // STX:
        ops_[0x86] = Op(Op::STX, Addr::ZP, 2, 3);
        ops_[0x96] = Op(Op::STX, Addr::ZPY, 2, 4);
        ops_[0x8E] = Op(Op::STX, Addr::ABS, 3, 4);

        // STY:
        ops_[0x84] = Op(Op::STY, Addr::ZP, 2, 3);
        ops_[0x94] = Op(Op::STY, Addr::ZPX, 2, 4);
        ops_[0x8C] = Op(Op::STY, Addr::ABS, 3, 4);

        // TAX:
        ops_[0xAA] = Op(Op::TAX, Addr::IMP, 1, 2);

        // TAY:
        ops_[0xA8] = Op(Op::TAY, Addr::IMP, 1, 2);

        // TSX:
        ops_[0xBA] = Op(Op::TSX, Addr::IMP, 1, 2);

        // TXA:
        ops_[0x8A] = Op(Op::TXA, Addr::IMP, 1, 2);

        // TXS:
        ops_[0x9A] = Op(Op::TXS, Addr::IMP, 1, 2);

        // TYA:
        ops_[0x98] = Op(Op::TYA, Addr::IMP, 1, 2);

        return this;
    }
}

