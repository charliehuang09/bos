#pragma once

#include <stdint.h>

#include "cuda.h"

namespace frc971::apriltag {

// Decimates, and thresholds an image on the provided
// stream.
void CudaDecimate(
    const uint8_t *gray_image, uint8_t *decimated_image,
    uint8_t *unfiltered_minmax_image, uint8_t *minmax_image,
    uint8_t *thresholded_image, size_t width, size_t height,
    size_t min_white_black_diff, CudaStream *stream);

// thresholds an image on the provided
// stream.
void CudaNoDecimate(
    const uint8_t *gray_image, uint8_t *decimated_image,
    uint8_t *unfiltered_minmax_image, uint8_t *minmax_image,
    uint8_t *thresholded_image, size_t width, size_t height,
    size_t min_white_black_diff, CudaStream *stream);

// Converts to grayscale, decimates, and thresholds an image on the provided
// stream.
void CudaToGreyscaleAndDecimate(
    const uint8_t *color_image, uint8_t *gray_image, uint8_t *decimated_image,
    uint8_t *unfiltered_minmax_image, uint8_t *minmax_image,
    uint8_t *thresholded_image, size_t width, size_t height,
    size_t min_white_black_diff, CudaStream *stream);

}  // namespace frc971::apriltag


