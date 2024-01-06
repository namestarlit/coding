#!/usr/bin/env python3
"""using asyncio and random modules to execute async functions"""
import asyncio
import random


# ANSI colours
c = (
        "\033[0m",  # End of color
        "\033[36m", # Cyan
        "\033[91m",  # Red
        "\033[35m", # Mangeta
        )

async def makerandom(idx: int, threshold: int = 6) -> int:
    """makes a random number"""
    print(f"{c[idx + 1]} Initiated makerandom({idx}).")

    i = random.randint(0, 10)
    while i <= threshold:
        print(f"{c[idx + 1]} makerandom({idx}) == {i} too low; retrying.")
        await asyncio.sleep(idx + 1)
        i = random.randint(0, 10)
    print(f"{c[idx + 1]} --> Finished: makerandom({idx}) == {i} {c[0]}");
    return i

async def main():
    """main function"""
    res = await asyncio.gather(*(makerandom(i, 10 -i - 1) for i in range(3)))
    return res


if __name__ == "__main__":
    random.seed(444)
    r1, r2, r3 = asyncio.run(main())
    print()
    print(f"r1: {r1}, r2: {r2}, r3: {r3}")
