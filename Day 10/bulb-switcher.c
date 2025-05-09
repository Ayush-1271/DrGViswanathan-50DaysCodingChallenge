int bulbSwitch(int n) {
    return sqrt(n);
}

/**
Each bulb i is toggled on every round where the round number is a divisor of i.
For example:

Bulb 12 is toggled in rounds 1, 2, 3, 4, 6, 12.

Divisors of 12: 1,2,3,4,6,12 → Total 6 times → Even → Bulb ends up off.

- A bulb is toggled an odd number of times if and only if it has an odd number of divisors.

- Normally, divisors come in pairs. For example, 12 has pairs: (1, 12), (2, 6), (3, 4).

- But if a number is a perfect square, like 9, it has one unpaired divisor: (3, 3).

This results in an odd count of divisors.

The only bulbs that remain on are the ones that are at perfect square positions (1, 4, 9, 16, ...).
**/
