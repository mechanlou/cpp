#include <cstdint>

struct Data;

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}