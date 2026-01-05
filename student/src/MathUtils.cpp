/**
 * @file MathUtils.h
 * @brief Utility math functions (structured C++ foundation).
 */
namespace MathUtils {

/**
 * @brief Clamp x to the inclusive range [minVal, maxVal].
 */
float Clamp(float x, float minVal, float maxVal);

/**
 * @brief Linearly map x from [inMin, inMax] to [outMin, outMax].
 *
 * @note For now, assumes inMax != inMin.
 */
float Map(float x, float inMin, float inMax, float outMin, float outMax);

}