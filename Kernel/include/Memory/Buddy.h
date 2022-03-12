#include <Memory/Memory.h>
#define IS_POWER_OF_2(x) (!((x)&((x)-1)))
#define 

namespace Memory {
    // Manage 4 gigabytes memory, depth 20
    // Manage 256 megabytes memory, depth 16
    // Manage
    typedef struct BuddyNode {
        uint64_t    size;
        uint8_t*    freeList;
    } __attribute__((packed)) buddy_node_t;

    void InitBuddy(MemoryInfo memInfo);
    MemoryBlock BuddyAllocateBlock(size_t size);
    uint64_t BuddyAllocateMemory(size_t size);
    void BuddyFreeBlock(MemoryBlock block);
    void BuddyForceFreeBlock(MemoryBlock block);
    void BuddyMarkRangeFree(uint64_t base, size_t size);
    void BuddyMarkRangeUsed(uint64_t base, size_t size);
    void BuddyMarkPageFree(uint64_t base);
    void BuddyMarkPageUsed(uint64_t base);
}