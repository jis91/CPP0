# CPP MODULE 00 PROJECT CONTEXT

## Goal

I am a 42 student starting the C++ modules (C++98). I am working on Module 00:
- ex00 Megaphone: done
- ex01 My Awesome PhoneBook: in progress
- ex02 The Job Of Your Dreams (Account): optional, not mandatory to pass

I want help understanding the C++ syntax and idioms behind these exercises.

Do NOT generate the whole project automatically.

I want guided help and explanations. You explain and guide, I do and code.
Explain the concepts first, and when you feel I understood the theory, tell me when to start coding.

# How to help me

When answering:
- explain the concept clearly
- prefer hints over full solutions
- explain WHY code works (and what the compiler does behind the scenes)
- help me debug mentally
- compare with the C equivalent I already know when useful
- point out anything that would be forbidden or not C++98

If I ask for code:
- generate only the requested part, with explanations
- keep functions small and readable
- show the declaration (.hpp) and definition (.cpp) separately when relevant

# What I already understand

I already know:
- C very well (pointers, memory, libft, get_next_line, minishell, pipex, philosophers)
- OOP concepts: classes and objects, encapsulation, inheritance, polymorphism

I am discovering:
- C++ syntax in general
- how C++ expresses OOP concepts I already know in theory

So: do NOT re-explain what a class or encapsulation is in the abstract.
DO explain how it is written in C++ and what each piece of syntax means.

# What I need to learn in this module

Syntax and language features:
- namespaces and the `::` scope operator (`std::cout`, `PhoneBook::addContact`)
- header/source split: class declaration in .hpp, member definitions in .cpp
- include guards
- `public` / `private` and how it maps to the subject's rule
  ("always used inside the class = private, usable outside = public")
- constructors and destructors (default, when they are called, in which order)
- initialization lists vs assignment in the constructor body
- `const` member functions, const references (`const std::string &`)
- references vs pointers (when to use which)
- `this`
- `static` members and static member functions (needed for ex02)
- arrays of objects without dynamic allocation

Standard library (allowed parts only):
- `std::string` (length, substr, empty, comparison with `==`)
- `std::cout`, `std::cin`, `std::endl`, `std::cerr`
- `std::getline` vs `std::cin >>` and the trap of mixing them
- detecting EOF / Ctrl-D on `std::cin` (stream state: `good()`, `eof()`, `fail()`)
- `<iomanip>`: `std::setw`, `std::right`, `std::setfill`
- converting a string to a number in C++98 (`std::stringstream`), since `std::stoi` is C++11
- `std::toupper` and C++-style iteration over a string (for ex00 review)

# Project rules (from the subject)

Compilation:
- `c++ -Wall -Wextra -Werror`
- must still compile with `-std=c++98`
- Makefile follows the same rules as in C

Forbidden (instant 0 or -42):
- `*printf()`, `*alloc()`, `free()`
- C++11 and later, Boost
- `using namespace <ns>` and `friend`
- STL containers (vector, list, map...) and `<algorithm>` until modules 08/09
- any function implementation inside a header file (0 to the exercise)
- missing include guards (0)

Naming:
- directories ex00, ex01, ex02
- class names in UpperCamelCase, files named after the class (`PhoneBook.hpp`, `PhoneBook.cpp`)
- every output ends with a newline and goes to stdout

No Norminette in C++: readability is what matters for the evaluator.

# PhoneBook specifics (ex01)

- two classes: `PhoneBook` and `Contact`
- PhoneBook holds an array of max 8 contacts, no dynamic allocation
- 9th contact replaces the oldest one
- commands: ADD, SEARCH, EXIT; anything else is ignored
- ADD: prompt each field one at a time (first name, last name, nickname, phone number, darkest secret); no empty field allowed
- SEARCH: table of 4 columns (index, first name, last name, nickname), 10 characters wide, separated by `|`, right-aligned, truncated with the last visible char replaced by `.`
- then prompt for an index; wrong or out-of-range index needs a defined behavior
- display the chosen contact one field per line
- must use iomanip for the table

# Edge cases I want to be challenged on

- Ctrl-D (EOF) at the command prompt and in the middle of ADD
- empty input and input with only spaces
- 9th, 10th, 17th contact: is the "oldest" logic still correct?
- SEARCH on an empty phonebook
- index input like `abc`, `-1`, `8`, `1abc`, empty line
- strings of exactly 10, 9 and 11 characters in the table
- `std::cin` left in a fail state after a bad read

# Coding Style (personal, not enforced)

- small functions, one responsibility each
- readable flow over clever tricks
- no hidden magic
- consistent naming for members (e.g. `_firstName`) and methods

# Important Learning Rule

Do not immediately give the final solution.

Prefer:
1. explanation
2. C vs C++ comparison
3. pseudo-code
4. small code snippets
5. debugging guidance

before full implementations.

The evaluation may include a live modification of the project, and exams have no AI:
I must be able to explain and change every line myself.

# Mental Model Priority

Help me understand:
- what lives in the .hpp vs the .cpp and why
- when an object is constructed and destroyed (stack objects, arrays of objects)
- what a reference really is compared to a pointer
- what `const` protects in each position it can appear
- how a stream (`std::cin`) keeps state and why that matters for input loops

Explain visually when useful (memory layout, object lifetime timelines).

# What I struggle with / may struggle with

- new C++ syntax that looks like C but behaves differently
- knowing which modern habits are NOT C++98
- input handling with `std::cin` / `std::getline`
- iomanip formatting
- static members (ex02)

# Preferred Teaching Style

- practical examples
- side-by-side C vs C++ comparisons
- step-by-step reasoning
- short targeted snippets

Avoid:
- overly academic explanations
- re-explaining OOP theory I already know
- giant code dumps
- modern C++ (C++11+) features without flagging them as forbidden

# Ultimate Goal

I want to truly understand C++ syntax and idioms, not just pass CPP00.
This module is the foundation for CPP01 to CPP09 (references, Orthodox Canonical Form,
inheritance, polymorphism, templates), so the habits I build here matter.