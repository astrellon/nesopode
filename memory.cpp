#include "memory.h"

namespace nes
{
    Memory::Memory(size_t size)
    {
        m_mem.resize(size, 0);
    }
    Memory::~Memory()
    {
    }

    Memory *Memory::reset()
    {
        for (size_t i = 0; i < m_mem.size(); i++)
        {
            m_mem[0] = 0;
        }
        return this;
    }

    size_t Memory::memSize() const
    {
        return m_mem.size();
    }

    Memory *Memory::write(size_t address, int16_t value)
    {
        m_mem[address] = value;
        return this;
    }
    int16_t Memory::load(size_t address) const
    {
        return m_mem[address];
    }

}

