# c-plus-plus

A small collection of C++ example programs and practice exercises by **Agnik Roy**.

> **Purpose:** This repository collects beginner-to-intermediate C++ programs and snippets you can compile, run, and learn from. It's organized to help you practice language fundamentals, typical algorithms, and small utilities.

---

## 📂 Repository structure

```
.cidea/         (IDE settings - ignore)
basics/         (C++ source files grouped by topic)
.gitignore
README.md       (this file)
```

> If you add more folders (algorithms, data-structures, projects), update this section.

---

## ✅ What you'll find

* Simple C++ programs demonstrating syntax, I/O, control flow, functions, and small algorithms.
* Files under `basics/` are intended to be small, self-contained examples for learning and quick testing.

---

## 🛠 Build & run (Linux / macOS / WSL)

Compile a single file with `g++` (or `clang++`):

```bash
# compile
g++ -std=c++17 -O2 -Wall path/to/file.cpp -o bin/program

# run
./bin/program
```

Example:

```bash
g++ -std=c++17 basics/example.cpp -o bin/example
./bin/example
```

Windows (MinGW / MSYS2):

```powershell
g++ -std=c++17 basics\example.cpp -o bin\example.exe
.\bin\example.exe
```

> Tip: Create a `bin/` folder to store compiled executables and add a simple `Makefile` if you want repeatable builds.

---

## 🧪 Recommended workflow

1. Pick a file in `basics/`.
2. Read the code and any comments.
3. Compile and run with test inputs.
4. Modify the code: add edge-case handling, optimize, or rewrite using another approach.
5. Commit changes with a clear message and push.

---

## ✍️ How to contribute

Contributions are welcome. Keep it simple:

1. Fork the repository.
2. Add or improve examples under an appropriate folder (e.g., `algorithms/`, `data-structures/`).
3. Use descriptive filenames and include a short comment at the top explaining purpose and complexity.
4. Open a pull request with a concise description of what you changed and why.

Guidelines:

* Keep examples focused and small (<300 lines if possible).
* Prefer clear variable names and brief comments.
* Add sample input/output in comments when relevant.

---

## 🧾 Licensing

This repository currently has **no explicit license**. If you want others to reuse your code, add a license (MIT is a common choice for small code collections).

To add MIT, create a `LICENSE` file with the standard text and optionally add a `LICENSE` badge to this README.

---

## 👀 Improvements I recommend (do these now)

* Add a short description for each file inside `basics/` (one-line at the top of the file).
* Add a `Makefile` or small build script to speed up testing.
* Add a `CONTRIBUTING.md` and `ISSUE_TEMPLATE.md` if you want outside contributors.
* Add a license (MIT) so people can use your code without legal friction.

---

## 📬 Contact / Author

**Agnik Roy** — put your preferred contact (email or GitHub profile) here.

---

If you want, I can:

* generate a `Makefile` for the project;
* add an MIT license file;
* create a CONTRIBUTING guide and issue/PR templates;
* or expand the README with a table listing every file and its purpose (automatically generated).

Tell me which of the above to do and I’ll add it directly.
