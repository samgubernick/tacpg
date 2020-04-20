
#ifndef SAM_TACPG_CHARACTER_STATS_HPP_INCLUDED
#define SAM_TACPG_CHARACTER_STATS_HPP_INCLUDED

#include <string>

namespace sam {
	namespace tacpg {
		namespace character {
			class Stats {
			public:
				Stats();

				void changeHealth(double amount);
				void changeTimeUnits(double amount);
				double getHealth();
				double getTimeUnits();
				void setHealth(double health);
				void setTimeUnits(double timeUnits);
			private:
				double health;
				double timeUnits;
			};
		}
	}
}
#endif // INCLUDE_GUARD
