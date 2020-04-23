
#ifndef SAM_TACPG_MAP_I_MAP_ITEM_HPP_INCLUDED
#define SAM_TACPG_MAP_I_MAP_ITEM_HPP_INCLUDED

#include <string>

namespace sam {
	namespace tacpg {
		namespace map {
			class IMapItem {
			public:
				enum class Allegiance {
					enemy,
					friendly,
					neutral,
				};
				enum class Type {
					alien,
					collectible,
					human,
					impassable,
				};

				IMapItem();
				virtual ~IMapItem() {};

				Allegiance getAllegiance() const;
				std::string const & getCellDisplayName() const;
				Type getType() const;
				virtual void onCollect(IMapItem & other) = 0;
				virtual void onDeath() = 0;
				virtual void onImpact(IMapItem & other) = 0;
				virtual void onMapMove() = 0;
				void setAllegiance(Allegiance allegiance);
				void setCellDisplayName(std::string name);
				void setType(Type type);
			private:
				Allegiance allegiance;
				std::string cellDisplayName;
				Type type;
			};
		}
	}
}
#endif // INCLUDE_GUARD
