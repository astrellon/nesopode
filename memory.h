#pragma once

#include <cstdint>
#include <vector>

using std::vector;
using std::size_t;

namespace nes
{
    class Memory
    {
    public:
        Memory(size_t size);
        ~Memory();

        Memory *reset();

        size_t memSize() const;

        Memory *write(size_t address, int16_t value);
        int16_t load(size_t address) const;

    private:
        vector<int16_t> m_mem;
    };
}

