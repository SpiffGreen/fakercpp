# FakerCpp Library Contributor Guidelines

## Introduction

Thank you for your interest in contributing to the FakerCpp library! This document provides guidelines for contributors, including information about the project structure, header files, and how to add new source files. Please read and follow these guidelines to ensure a smooth and effective contribution process.

## Project Structure

FakerCpp follows a specific project structure to maintain organization and clarity. Contributors should be aware of this structure when working on the project:

### Project Root Directory

- **CMakeLists.txt**: The CMake build configuration file for the project.

### `include` Directory

- **fakerutil.h**: The public header file containing utility functions.
- **fakercpp.h**: The public header file defining namespaces and their functions.

### `src` Directory

- **fakercpp.cpp**: The main source file containing library initialization.
- **person.cpp**: The source file for the Person class implementation.
- **util.cpp**: The source file for utility functions.
- **location.cpp**: The source file for location-related functions.

## Contributing to Source Files

When adding or modifying source files, please follow these guidelines:

1. **New Source Files**: If you intend to add a new source file, make sure to update the `CMakeLists.txt` to include it in the build process. Use the existing `add_library` command as a template, adding the new source file to the list.

   Example:
   ```cmake
   add_library(fakercpp src/fakercpp.cpp src/person.cpp src/util.cpp src/location.cpp src/new_file.cpp)
   ```

2. **Existing Source Files**: If you are modifying existing source files, ensure that your changes align with the existing codebase and adhere to the established coding style.

## Coding Style

To maintain consistency and readability, please adhere to the following coding style guidelines:

- Use meaningful variable and function names.
- Follow C++ best practices and conventions.
- Add comments and documentation to explain complex or non-obvious code sections.

## Testing

Before submitting a pull request, ensure that your changes do not introduce regressions and that they pass the existing tests. If applicable, add new test cases to cover your changes.

## Documentation

If your contribution involves changes to public interfaces, make sure to update the documentation in `fakercpp.h` to reflect the changes. Maintain clear and concise documentation for any new or modified functions.

## Pull Request Guidelines

When submitting a pull request, please follow these guidelines:

1. Provide a clear and concise description of the changes.
2. Ensure that your code adheres to the coding style and conventions.
3. Test your changes to avoid regressions.
4. Reference any relevant issues or tasks in the pull request description.

## Conclusion

Your contributions are highly valued and will help improve FakerCpp. By following these guidelines, you'll ensure that your contributions integrate seamlessly with the project, making it easier for others to understand and maintain.

Thank you for your commitment to the FakerCpp library!