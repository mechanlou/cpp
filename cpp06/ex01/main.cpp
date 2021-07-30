#include <iostream>
#include <string>

struct Data
{
	std::string	value;
};


uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

int main(void)
{
	Data		data;
	Data		*new_data;
	uintptr_t	raw;

	data.value = "Bonjour. Je suis un test.";
	std::cout << "value: " << data.value << std::endl;
	std::cout << "pointer: " << &data << std::endl;

	raw = serialize(&data);
	new_data = deserialize(raw);
	std::cout << "new value: " << new_data->value << std::endl;
	std::cout << "new pointer: " << new_data << std::endl;
	return (0);
}