
#ifndef SAM_TACPG_MAP_SIZE_HPP_INCLUDED
#define SAM_TACPG_MAP_SIZE_HPP_INCLUDED

namespace sam {
	namespace tacpg {
		namespace map {
			struct Size {
				size_t height;
				size_t width;

				Size()
					: height(0)
					, width(0) {

				}

				Size(size_t width, size_t height) {
					this->width = width;
					this->height = height;
				}
			};
		}
	}
}
#endif // INCLUDE_GUARD
