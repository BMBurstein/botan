/*************************************************
* CTR Mode Header File                           *
* (C) 1999-2007 Jack Lloyd                       *
*************************************************/

#ifndef BOTAN_COUNTER_MODE_H_
#define BOTAN_COUNTER_MODE_H_

#include <botan/modebase.h>
#include <botan/modebase.h>

namespace Botan {

/*************************************************
* CTR-BE Mode                                    *
*************************************************/
class BOTAN_DLL CTR_BE : public BlockCipherMode
   {
   public:
      CTR_BE(BlockCipher*);
      CTR_BE(BlockCipher*, const SymmetricKey&, const InitializationVector&);
   private:
      void write(const byte[], u32bit);
      void increment_counter();
   };

}

#endif
