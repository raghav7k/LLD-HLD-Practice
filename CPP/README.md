# C++ LLD Sandbox

## Build & Run

### Option A: CMake

```bash
cmake -S . -B build
cmake --build build
./build/lld_cpp
```

### Option B: Make (no CMake needed)

```bash
make run
```

## Structure

- `src/` implementation
- `include/` headers
