//
// Created by Stefan Barbu on 11/25/26.
//

#ifndef LABYRINTH_OF_HORRORS_RANDOM_GENERATOR_H
#define LABYRINTH_OF_HORRORS_RANDOM_GENERATOR_H

#include <random>

class RandomGenerator {
private:
    std::random_device randomDevice;
    std::mt19937 generator;
    std::uniform_int_distribution<int> binaryChoiceIntDistribution;
    std::uniform_int_distribution<int> zeroTenIntDistribution;
public:
    explicit RandomGenerator() : randomDevice(), generator(randomDevice()), binaryChoiceIntDistribution(0,2), zeroTenIntDistribution(0, 9) {}
    const int generateRandomZeroTenChoice();
    const int generateRandomBinaryChoice();
    const int generateRandom(const int& min, const int& max);
};

#endif //LABYRINTH_OF_HORRORS_RANDOM_GENERATOR_H
