# 🧪 C++ Unit Test Generator with Ollama

This project is a C++ unit test generator tool that uses **Ollama** with LLMs like `llama3` to automatically generate and refine unit tests for C++ projects using **Google Test (GTest)**.  
It supports YAML-based instruction rules, test coverage improvement, and seamless build + test workflows.


---

Also I have used ollama and created python file in the keploy repo 
-[Keploy/orgChart/Api](https://github.com/DevanshBajpai09/orgChartApi)
to run ollama and also to run the code and generate test quickly

---

---

## ✨ Features

- 📥 Reads your C++ source code
- 🧠 Uses LLM (`llama3`) via **Ollama** to generate initial tests
- 🔁 Refines tests iteratively via YAML-driven prompts
- 🧪 Builds and runs tests with **Google Test**
- 📊 Supports test coverage tools like `gcov` or `gcovr`

---

## 🔧 Setup Instructions

### 1️⃣ Install Dependencies

Make sure you have the following installed:

- [CMake](https://cmake.org/)
- [MinGW](https://www.mingw-w64.org/) or another C++ compiler
- [Ollama](https://ollama.com/)
- Python 3

### 2️⃣ Clone this Repository

```bash
git clone https://github.com/DevanshBajpai09/Unit-generator.git
cd Unit-generator
```

### 🤖 Generate Unit Tests with Ollama
✅ 1. Ensure Ollama is Running
```bash
ollama run llama3

```

✅ 2. Run the Python Script

```bash
python generate_tests.py
```

This will:

Read src/main.cpp

Read test generation rules from generate_tests.yaml

Send both as a prompt to llama3 via Ollama

Write the generated tests to tests/test_main.cpp

### ⚒️ Build and Run Tests

```bash
mkdir -p build
cd build
cmake ..
mingw32-make       # or just `make` on Linux/macOS
./unit_tests.exe   # run tests (on Windows)
```

### 📄 Sample generate_tests.yaml
```bash
test_rules:
  task: "Generate unit tests for the provided C++ file"
  language: "C++"
  framework: "gtest"
  avoid_duplicates: true
  include_headers: true
  coverage_target: 90%
  format_style: clean
  rules:
    - Use TEST() macros
    - Write test for each public function

```
