namespace Memory
{
    uintptr_t Allocate(size_t size);
    uintptr_t AllocatePages(size_t amount);
    void FreePages(uintptr_t addr);
}