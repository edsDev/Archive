#include "ssm_basic.h"
#include "ssm_vm.h"

int main()
{
	uint8_t test[] = {
		43, 114, 0, 0, 0, 0, 24, 3, 28, 22, 3, 3, 42, 25, 0, 21, 3, 28, 29, 43, 6, 0, 0, 0,
		24, 3, 27, 21, 3, 29, 43, 6, 0, 0, 0, 24, 3, 2, 29, 44, 26, 21, 29, 44, 0, 22, 3,
		24, 3, 3, 42, 3, 0, 21, 29, 44, 36, 8, 0, 21, 28, 24, 1, 32, 25, 1, 4, 0, 32, 24,
		3, 22, 3, 3, 28, 42, 27, 0, 24, 1, 35, 25, 1, 4, 0, 35, 2, 25, 1, 4, 0, 35, 24, 1,
		32, 25, 1, 4, 0, 32, 21, 3, 40, 225, 255, 26, 25, 1, 4, 0, 35, 29, 44, 0,
		22, 10, 29, 43, 45, 0, 0, 0, 24, 3, 26, 44
	};
	auto module = SSMModule(test, 0);
	auto vm = SSMVirtualMachine::Create(module);
	vm->Run();

	return 0;
}