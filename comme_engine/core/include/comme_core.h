#pragma once

namespace Comme {
	namespace Core {
		class CommeCore {
		public:
			static void start();
			static void stop();
		private:
			static CommeCore * _instance;
			CommeCore() {}
		};
	}
}