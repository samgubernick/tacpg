
#ifndef SAM_TACPG_MAP_MAIN_HPP_INCLUDED
#define SAM_TACPG_MAP_MAIN_HPP_INCLUDED

#include "map/cell.hpp"

#include <vector>

namespace sam {
	namespace tacpg {
		namespace map {
			class Main {
			public:
				enum class Size {
					small,
					medium,
					large,
				};

				Main();

				void clear();
				void setSize(Size size);
			private:
				std::vector<Cell> cells;
				size_t getSize(Size size);
			};
		}
	}
}
#endif // INCLUDE_GUARD
