//
// Created by Stefan Barbu on 11/25/26.
//

#include "../include/random_generator.h"

const int RandomGenerator::generateRandomZeroTenChoice() {
    return zeroTenIntDistribution(generator);
}

const int RandomGenerator::generateRandomBinaryChoice() {
    return binaryChoiceIntDistribution(generator);
}

const int RandomGenerator::generateRandom(const int &min, const int &max) {
    std::uniform_int_distribution<int> tmpDistribution(min, max);
    return tmpDistribution(generator);
}
