/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <ABI38_0_0React/components/view/ConcreteViewShadowNode.h>
#include <ABI38_0_0React/components/view/ViewProps.h>

namespace ABI38_0_0facebook {
namespace ABI38_0_0React {

extern const char ViewComponentName[];

/*
 * `ShadowNode` for <View> component.
 */
class ViewShadowNode final : public ConcreteViewShadowNode<
                                 ViewComponentName,
                                 ViewProps,
                                 ViewEventEmitter> {
 public:
  using ConcreteViewShadowNode::ConcreteViewShadowNode;

  bool isLayoutOnly() const;
};

} // namespace ABI38_0_0React
} // namespace ABI38_0_0facebook
