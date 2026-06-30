# linc

> A lightweight C library for working with linear algebra.

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](./LICENSE.md)
[![C Standard](https://img.shields.io/badge/C-C99%2FC11-orange.svg)]()
[![Status](https://img.shields.io/badge/status-in%20development-yellow.svg)]()

## Overview

**linc** is a C library that provides a clean API for fundamental linear algebra operations. Its objective is to allow the user to operate in the most direct way possible, without so much effort.

> **Note:** this library is under active development. APIs may change

## Getting Started

### Requirements

- GCC or Clang
- C99 or later
- Make

### Building

```bash
git clone https://github.com/anna141-dev/linc.git
cd linc

make # (compile)

## or...
make lib # (to use as a lib)

## or...
make run # (to use the pre-defined tests on src/main.c)
```

## Documentation

Documentation is generated with [Doxygen](https://www.doxygen.nl/index.html).

```bash
doxygen Doxyfile
```

Output will be in docs/. Open docs/index.html in your browser.

### Including in your project

On the same directory you cloned linc and executed `make lib`,  make your program.

Example:

```
linc/
└── ...

your-project/
└── ...
```

Don't forget to include linc.h:

```c
#include "linc.h"
```

Link against the compiled library:

```bash
gcc -Wall -Wextra -Iinclude -I ../linc/include your_program -o your_program -L../linc/output -llinc
```

> linc.h is a single file that includes all of the library's header files.

## Usage

See the `*.c` files in /tests/

## API Reference

- MatrixI is for matrices that store `int`
- MatrixF is for matrices that store `float`
- MatrixD is for matrices that store `double`

> Documentation with doxygen will be uploaded to a website soon.

## Project Structure

> This section will likely be removed or moved to a separate file if the project starts to get too big.

```
linc/
├── src/
│   ├── int_mat.c
│   ├── mat_utils.c
├── include/
│   ├── types.h
│   ├── int_mat.h
│   ├── mat_utils.h
│   ├── linc.h
├── tests/
│   ├── main.c
│   ├── mat_test.c
│   ├── test_helpers.h
├── output/
│   └── test_runner (after running make)
├── Makefile
├── LICENSE.md
└── README.md
```

## Contributing

Contributions are welcome. Feel free to open issues or pull requests.
Please follow the [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html) (even though it's c) for all contributions.

## License

This project is licensed under the [MIT License](./LICENSE.md).
