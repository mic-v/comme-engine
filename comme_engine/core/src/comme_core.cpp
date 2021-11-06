#include <comme_core.h>

using namespace Comme;
using namespace Core;

static void CommeCore::start()
{
	_instance = new CommeCore();
}

static void CommeCore::stop()
{
	delete _instance;
}
