
#ifndef SAM_TACPG_MAP_MAIN_HPP_INCLUDED
#define SAM_TACPG_MAP_MAIN_HPP_INCLUDED

#include "map/cell.hpp"
#include "map/preset_size.hpp"
#include "map/size.hpp"

#include <vector>

namespace sam {
	namespace tacpg {
		namespace map {
			class Main {
			public:
				Main();

				void clear();
				Cell & getCell(size_t index);
				Cell const & getCell(size_t index) const;
				size_t getCellCount() const;
				std::vector<Cell> & getCells();
				std::vector<Cell> const & getCells() const;
				Size const & getSize() const;
				void setHeight(size_t height);
				Size getSize(PresetSize size) const;
				void setSize(PresetSize size);
				void setSize(Size & size);
				void setWidth(size_t width);
			private:
				std::vector<Cell> cells;
				Size size;

				void setSize(size_t size);
			};
		}
	}
}
#endif // INCLUDE_GUARD
