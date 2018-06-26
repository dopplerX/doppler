// Copyright (c) 2011-2018 The Cryptonote developers
// Copyright (c) 2014-2018 XDN developers
// Copyright (c) 2016-2018 BXC developers
// Copyright (c) 2017-2018 Doppler developers
// Copyright (c) 2018-2019 Doppler developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "IWallet.h"

namespace CryptoNote {

struct DepositInfo {
  Deposit deposit;
  uint32_t outputInTransaction;
};

}
