// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

double pown(double value, uint16_t n) {
    double w = value;
    for (uint16_t i = 1; i < n; i++) {
        w *= value;
    }
    return w;
}

uint64_t fact(uint16_t n) {
    uint16_t f = 1;
    for (uint16_t i = 2; i <= n; i++) {
        f *= i;
    }
    return f;
}

double calcItem(double x, uint16_t n) {
    return double(pown(x, n) / fact(n));
}

double expn(double x, uint16_t count) {
    double ex = 1;
    for (uint16_t i = 1; i <= count; i++) {
        ex += double(pown(x, i) / fact(i));
    }
    return ex;
}

double sinn(double x, uint16_t count) {
    double sin = x;
    for (uint16_t i = 2; i < count; i++) {
        sin += pown(-1, i - 1) * (double(pown(x, 2 * i - 1) / fact(2 * i - 1)));
    }
    return sin;
}

double cosn(double x, uint16_t count) {
    double cos = 1;
    for (uint16_t i = 2; i < count; i++) {
        cos += pown(-1, i - 1) * (double(pown(x, 2 * i - 2) / fact(2 * i - 2)));
    }
    return cos;
}
