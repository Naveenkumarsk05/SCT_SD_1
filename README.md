# Temperature Converter

A C++ console application that converts temperatures between Celsius, Fahrenheit, and Kelvin scales with an intuitive menu-driven interface.

## Features

- Convert between Celsius, Fahrenheit, and Kelvin
- Real-time conversion with precise calculations
- Input validation and error handling
- Clean, user-friendly interface
- Cross-platform compatibility

## Build Instructions

### Linux / macOS
```bash
g++ -std=c++17 -o temp_converter main.cpp
./temp_converter
```

### Windows (MinGW)
```bash
g++ -std=c++17 -o temp_converter.exe main.cpp
temp_converter.exe
```

### Using Make (if Makefile provided)
```bash
make
./temp_converter
```

## Usage

1. Run the program
2. Select conversion type from the menu (1-7)
3. Enter temperature value
4. View converted result
5. Choose option 8 to exit

## Conversion Formulas

- Celsius to Fahrenheit: `(C × 9/5) + 32`
- Celsius to Kelvin: `C + 273.15`
- Fahrenheit to Celsius: `(F - 32) × 5/9`
- Fahrenheit to Kelvin: `(F - 32) × 5/9 + 273.15`
- Kelvin to Celsius: `K - 273.15`
- Kelvin to Fahrenheit: `(K - 273.15) × 9/5 + 32`

## Project Structure

```
temperature-converter/
├── main.cpp          # Main source code
├── README.md         # Project documentation
├── Makefile          # Build automation (optional)
└── .github/workflows/
    └── c-cpp.yml     # CI/CD configuration
```

## Author

Naveen Kumar S K

## License

MIT License
