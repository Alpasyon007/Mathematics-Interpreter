# CMake Bulid File
#
# CMake Version
cmake_minimum_required(VERSION 3.10)

# Compiler Settings
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set Variables
set(SOURCE_DIR src)

# Set the project name
project(MathsInterpreter)

# Add the executable
add_executable(
	MathsInterpreter
		${SOURCE_DIR}/main.cpp
		${SOURCE_DIR}/Lexer/Lexer.cpp
		${SOURCE_DIR}/Lexer/Lexer.h
		${SOURCE_DIR}/Token/Token.cpp
		${SOURCE_DIR}/Token/Token.h
		${SOURCE_DIR}/Parser/Parser.cpp
		${SOURCE_DIR}/Parser/Parser.h
		${SOURCE_DIR}/Operation/Operation.cpp
		${SOURCE_DIR}/Operation/Operation.h
		${SOURCE_DIR}/Debug/Debug.cpp
)

# Include target directories
target_include_directories(
	MathsInterpreter
	PRIVATE
		${SOURCE_DIR}/Lexer
		${SOURCE_DIR}/Token
		${SOURCE_DIR}/Parser
		${SOURCE_DIR}/Operation
		${SOURCE_DIR}/Debug
)