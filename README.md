# Useful functions for debug print

> Generally for use in competitive programming

# Usage

Include `debug.h`:

    #include "debug.h"

And just call `dbg` function with variables which you want to print:

    dbg(var1, var2, ...);

And you will get nice colored output! (See gallery and examples sections below)

## Supported types:

* primitives (int, char and so on)
* strings
* vectors
* pairs
* sets
* maps
* all nested combinations of above types are supported too!

# Examples

1. Simple

        int foo = 1;
        int bar = 2;
        string str = "abc";
        char ch = '#';
        dbg(foo, bar, str, ch);

2. Vector

        vector<int> simpleVector = {1, 2, 3};
        dbg(simpleVector);

3. Map

        map<int, int> simpleMap = {{1, 10},
                                   {2, 20}};
        dbg(simpleMap);

4. Pair 

        pair<int, int> simplePair = {1, 2};
        dbg(simplePair);

5. Inner vector

        vector<vector<int>> innerVector = {{1, 2, 3},
                                           {4, 5, 6}};
        dbg(innerVector);

# Gallery

[![][1]][1]


  [1]: screenshot.png