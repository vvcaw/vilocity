# ViLocity

# Development
## Dependencies
This project builds with `cmake >= 3.15` and uses `vcpkg` for dependency management.

## Building
```bash
mkdir build && cd build
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 -DCMAKE_TOOLCHAIN_FILE=/home/vvcaw/dev/vcpkg/scripts/buildsystems/vcpkg.cmake ..
make
```
