
#ifndef SAM_TACPG_CHARACTER_MAIN_HPP_INCLUDED
#define SAM_TACPG_CHARACTER_MAIN_HPP_INCLUDED

#include "character/bio.hpp"
#include "character/main.hpp"
#include "character/stats.hpp"
#include "map/i_map_item.hpp"

namespace sam {
	namespace tacpg {
		namespace character {
			class Main {
			public:
				Main();

				Bio & getBio();
				Stats & getStats();
				void move(double angle);

				void onCollect(map::IMapItem & other);
				void onDeath();
				void onImpact(map::IMapItem & other);
				void onMapMove();
			private:
				Bio bio;
				Stats stats;
			};
		}
	}
}
#endif // INCLUDE_GUARD
