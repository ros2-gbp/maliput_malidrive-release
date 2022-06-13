// BSD 3-Clause License
//
// Copyright (c) 2022, Woven Planet. All rights reserved.
// Copyright (c) 2019-2022, Toyota Research Institute. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// * Redistributions of source code must retain the above copyright notice, this
//   list of conditions and the following disclaimer.
//
// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
//
// * Neither the name of the copyright holder nor the names of its
//   contributors may be used to endorse or promote products derived from
//   this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#pragma once

#include <functional>

#include <maliput/api/rules/discrete_value_rule.h>
#include <maliput/api/rules/rule.h>

namespace malidrive {

namespace builder {
namespace rules {

/// @returns a maliput::api::rules::Rule::TypeId initialized with
/// "Vehicle Exclusive Rule Type".
maliput::api::rules::Rule::TypeId VehicleExclusiveRuleTypeId();

/// @returns a maliput::api::rules::Rule::TypeId initialized with
/// "Vehicle Usage Rule Type".
maliput::api::rules::Rule::TypeId VehicleUsageRuleTypeId();

/// Defines keys used in api::rules::Rule::RelatedRules on Malidrive.
struct RelatedRulesKeys {
  static constexpr const char* kVehicleMotorization = "Vehicle Motorization";
};

/// Holds speed information obtained from the XODR.
struct XodrSpeedProperties {
  /// Max speed in meters per second.
  double max{};
  /// Start position (s-coordinate) relative to the XODR Track frame.
  double s_start{};
  /// End position (s-coordinate) relative to the XODR Track frame.
  double s_end{};
};

}  // namespace rules
}  // namespace builder
}  // namespace malidrive
