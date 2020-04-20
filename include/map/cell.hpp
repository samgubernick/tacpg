
#ifndef SAM_TACPG_MAP_CELL_HPP_INCLUDED
#define SAM_TACPG_MAP_CELL_HPP_INCLUDED

#include <vector>

namespace sam {
	namespace tacpg {
		namespace map {
			class IMapItem;
			class Cell {
			public:
				enum class Ground {
					air,
					cement,
					dirt,
					floor,
					grass,
					puddle,
					road,
					roof,
					space,
					wall,
					water,
				};

				Cell();

				void attemptToAdd(IMapItem & item);
				Ground getGroundType();
				std::vector<IMapItem *> & getItems();
				void remove(IMapItem & item);
			private:
				Ground ground;
				std::vector<IMapItem *> items;
			};
		}
	}
}
#endif // INCLUDE_GUARD
