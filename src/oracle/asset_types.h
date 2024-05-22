// Copyright (c) 2024, Sispop StableCoin Protocol
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#pragma once
#include <string>
#include <vector>

namespace oracle
{

  const std::vector<std::string> ASSET_TYPES = {"SISPOP", "SISPOPUSD", "SISPOPRSV"};

  class asset_type_counts
  {

  public:
    // Fields
    uint64_t SISPOP;
    uint64_t SISPOPUSD;
    uint64_t SISPOPRSV;

    asset_type_counts() noexcept
        : SISPOP(0), SISPOPUSD(0), SISPOPRSV(0)
    {
    }

    uint64_t operator[](const std::string asset_type) const noexcept
    {
      if (asset_type == "SISPOP")
      {
        return SISPOP;
      }
      else if (asset_type == "SISPOPUSD")
      {
        return SISPOPUSD;
      }
      else if (asset_type == "SISPOPRSV")
      {
        return SISPOPRSV;
      }

      return 0;
    }

    void add(const std::string asset_type, const uint64_t val)
    {
      if (asset_type == "SISPOP")
      {
        SISPOP += val;
      }
      else if (asset_type == "SISPOPUSD")
      {
        SISPOPUSD += val;
      }
      else if (asset_type == "SISPOPRSV")
      {
        SISPOPRSV += val;
      }
    }
  };
}