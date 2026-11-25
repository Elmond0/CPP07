*This project has been created as part of the 42 curriculum by elmondo.*

# <img align="middle" height="115" src="https://raw.githubusercontent.com/ayogun/42-project-badges/main/badges/numbered_cpps/CPP07.png" alt="CPP07 badge"/> <picture><source media="(prefers-color-scheme: dark)" srcset="https://readme-typing-svg.demolab.com/?font=Fira+Code&weight=600&size=55&pause=1000&color=58A6FF&vCenter=true&width=400&height=80&lines=CPP07"><source media="(prefers-color-scheme: light)" srcset="https://readme-typing-svg.demolab.com/?font=Fira+Code&weight=600&size=55&pause=1000&color=0366D6&vCenter=true&width=400&height=80&lines=CPP07"><img align="middle" src="https://readme-typing-svg.demolab.com/?font=Fira+Code&weight=600&size=55&pause=1000&color=0366D6&vCenter=true&width=400&height=80&lines=CPP07" alt="CPP07"/></picture>

[![Common Core](https://img.shields.io/badge/-Common%20Core-24292e?style=flat&logo=data:image/svg%2Bxml;base64,PHN2ZyByb2xlPSJpbWciIHZpZXdCb3g9IjAgMCAyNCAzNCIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIj48dGl0bGU+NDI8L3RpdGxlPjxkZXNjPkxvZ28gNDIgY29uIHBhZGRpbmcgaW5mZXJpb3JlOiBHaXRIdWIgcmltdW92ZSBnbGkgYXR0cmlidXRpIHN0eWxlIGRhbCBtYXJrZG93biwgcXVpbmRpIGlsIG1hcmdpbmUgY2hlIGFsbGluZWEgbCdpY29uYSBhbCB0ZXN0byBkZWwgdGl0b2xvIGUnIGluY29ycG9yYXRvIG5lbCB2aWV3Qm94LiBJbCBnbGlmbyBvY2N1cGEgeSAzLjU3NC0yMC40MjYgZSBzb3R0byByZXN0YW5vIDEzLjU3NCB1bml0YScgdnVvdGU6IHJlc28gYSA0MnB4IGNvbiBhbGlnbj1taWRkbGUsIGlsIGdsaWZvIHN0YSB+MnB4IHNvcHJhIGxhIGJhc2VsaW5lIGRlbCB0aXRvbG8uIFBlciBhbHphcmxvIGFuY29yYSBzZXJ2b25vICsxIHVuaXRhJyBkaSB2aWV3Qm94IG9nbmkgKzEuMnB4IGRpIGhlaWdodCAoY2lyY2EgKzAuNnB4IGRpIHNvbGxldmFtZW50bywgYSBwYXJpdGEnIGRpIGRpbWVuc2lvbmUgZGVsIGdsaWZvKS48L2Rlc2M+PHN0eWxlPnBhdGh7ZmlsbDojMDAwMDAwfSBAbWVkaWEgKHByZWZlcnMtY29sb3Itc2NoZW1lOmRhcmspe3BhdGh7ZmlsbDojRkZGRkZGfX08L3N0eWxlPjxwYXRoIGQ9Ik0xOS41ODEgMTYuODUxSDI0di00LjQzOVpNMjQgMy41NzRoLTQuNDE5djQuNDJsLTQuNDE5IDQuNDE4djQuNDRoNC40MTl2LTQuNDRMMjQgNy45OTNabS00LjQxOSAwaC00LjQxOXY0LjQyem0tNi4zMjQgOC44MzhINC40MTlsOC44MzgtOC44MzhIOC44MzhMMCAxMi40MTJ2My41OTVoOC44Mzh2NC40MTloNC40MTl6Ii8+PC9zdmc+Cg==)](https://profile.intra.42.fr/users/elmondo)
![Language](https://img.shields.io/badge/language-C%2B%2B98-blue)
![Flags](https://img.shields.io/badge/flags--Wall%20--Wextra%20--Werror-passing-brightgreen)
![Valgrind](https://img.shields.io/badge/valgrind-no%20leaks-brightgreen)

> C++ templates: function templates and class templates.

---

## 📖 Description

`CPP07` is Module 07 of the 42 **C++ modules**. Every exercise is written in **C++98** and compiled with `c++ -Wall -Wextra -Werror -std=c++98`.

What this module covers:

- Function templates (`swap`, `min`, `max`)
- Calling a function template on any array type (`iter`)
- Class templates with dynamic storage (`Array<T>`)
- Splitting template implementation into a `.tpp` file included from the header
- Bounds checking with exceptions

---

## 🗂️ Exercises

| Directory | Exercise | Executable | Description |
|:---------:|----------|:----------:|-------------|
| `ex00` | Start with a few functions | `FewFunctions` | `swap`, `min` and `max` function templates. |
| `ex01` | Iter | `Iter` | `iter(array, length, func)` applies a function to every element of any array. |
| `ex02` | Array | `Array` | `Array<T>`: deep copy, `operator[]` with out-of-range exception, `size()`. |

---

## ⚙️ Compilation & Usage

Each exercise is independent and has its own `Makefile`:

```bash
make        # build the executable
make clean  # remove object files
make fclean # remove object files and the executable
make re     # fclean + make
```

**`ex00` — Start with a few functions**
```bash
cd ex00 && make
./FewFunctions
```

**`ex01` — Iter**
```bash
cd ex01 && make
./Iter
```

**`ex02` — Array**
```bash
cd ex02 && make
./Array
```

---

## 📁 Project Structure

```
CPP07/
├── ex00/
│   ├── main.cpp
│   ├── whatever.hpp
│   └── Makefile
├── ex01/
│   ├── iter.hpp
│   ├── main.cpp
│   └── Makefile
└── ex02/
    ├── Array.hpp
    ├── Array.tpp
    ├── main.cpp
    └── Makefile
```

---

## 📚 Resources

- [Templates — cppreference](https://en.cppreference.com/w/cpp/language/templates)
- [Learn C++ — templates](https://www.learncpp.com/cpp-tutorial/function-templates/)
- `man 3 cout`, [GNU Make manual](https://www.gnu.org/software/make/manual/make.html)
- [Valgrind](https://valgrind.org/) — memory error and leak detector used for testing

---

## 🎯 Key Takeaways

- Writing **generic code** without sacrificing type safety.
- Organising template code in headers and `.tpp` files.
- Implementing a container with **deep copy** and **bounds checking**.
