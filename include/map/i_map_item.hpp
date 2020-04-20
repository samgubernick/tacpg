
#ifndef SAM_TACPG_MAP_I_MAP_ITEM_HPP_INCLUDED
#define SAM_TACPG_MAP_I_MAP_ITEM_HPP_INCLUDED

namespace sam {
	namespace tacpg {
		namespace map {
			class IMapItem {
				enum class ItemType {
					collectible,
					impassable,
				};

				virtual ~IMapItem() {};

				virtual void onCollect(IMapItem & other) = 0;
				virtual void onDeath() = 0;
				virtual void onImpact(IMapItem & other) = 0;
				virtual void onMapMove() = 0;
			};
		}
	}
}
#endif // INCLUDE_GUARD
