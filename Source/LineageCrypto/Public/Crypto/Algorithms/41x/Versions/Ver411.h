#ifndef H_VER411
#define H_VER411

#include "Crypto/Algorithms/Base/Algorithm.h"
#include "Crypto/Algorithms/41x/Shared/Ver41xParams.h"
#include "Crypto/Algorithms/41x/Duplex/Ver41xEncDuplex.h"
#include "Crypto/Algorithms/41x/Duplex/Ver41xDecDuplex.h"

using namespace::std;

class Ver411 : public Algorithm, public Ver41xParams
{
public:
	Ver411()
	{
		version = VER_411;

		modulus = {
			0x8c, 0x9d, 0x5d, 0xa8, 0x7b, 0x30, 0xf5, 0xd7,
			0xcd, 0x9d, 0xc8, 0x8c, 0x74, 0x6e, 0xaa, 0xc5,
			0xbb, 0x18, 0x02, 0x67, 0xfa, 0x11, 0x73, 0x73,
			0x58, 0xc4, 0xc9, 0x5d, 0x9a, 0xdf, 0x59, 0xdd,
			0x37, 0x68, 0x9f, 0x9b, 0xef, 0xb2, 0x51, 0x50,
			0x87, 0x59, 0x55, 0x5d, 0x6f, 0xe0, 0xec, 0xa8,
			0x7b, 0xeb, 0xe0, 0xa1, 0x07, 0x12, 0xcf, 0x0e,
			0xc2, 0x45, 0xaf, 0x84, 0xcd, 0x22, 0xeb, 0x4c,
			0xb6, 0x75, 0xe9, 0x8e, 0xaf, 0x57, 0x99, 0xfc,
			0xa6, 0x2a, 0x20, 0xa2, 0xba, 0xa4, 0x80, 0x1d,
			0x5d, 0x70, 0x71, 0x8d, 0xcd, 0x43, 0x28, 0x3b,
			0x84, 0x28, 0xf1, 0x38, 0x7a, 0xec, 0x66, 0x00,
			0xf9, 0x37, 0xbf, 0xc7, 0xbb, 0x72, 0x40, 0x4d,
			0x18, 0x7d, 0x3a, 0x9c, 0x43, 0x8f, 0x1f, 0xfc,
			0xe9, 0xce, 0x36, 0x5d, 0xcc, 0xf7, 0x54, 0x23,
			0x2f, 0xf6, 0xde, 0xf0, 0x38, 0xa4, 0x13, 0x85
		};

		exponent = 0x1d;

		duplex = {
			StreamFactory::Make<Ver41xEncDuplex>(*this),
			StreamFactory::Make<Ver41xDecDuplex>(*this)
		};
	}
};

#endif // H_VER411
