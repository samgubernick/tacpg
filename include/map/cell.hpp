
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
				Ground getGroundType() const;
				std::vector<IMapItem *> & getItems();
				std::vector<IMapItem *> const & getItems() const;
				void remove(IMapItem & item);
				void setGroundType(Ground type);
			private:
				Ground groundType;
				std::vector<IMapItem *> items;
			};
		}
	}
}
#endif // INCLUDE_GUARD
