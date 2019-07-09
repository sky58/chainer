#pragma once

#include <tuple>

#include <absl/types/optional.h>

#include "chainerx/array.h"
#include "chainerx/dtype.h"

namespace chainerx {

Array Dot(const Array& a, const Array& b, absl::optional<Dtype> out_dtype = absl::nullopt);

std::tuple<Array, Array, Array> SVD(const Array& a, bool full_matrices, bool compute_uv);

Array PseudoInverse(const Array& a, float rcond);

}  // namespace chainerx
