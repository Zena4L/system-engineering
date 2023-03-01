# Introduction

The key to effective use of C++ is the definition and use of user-defined types. This chapter introduces the three most primitive variants of the notion of a user-defined type:
• A struct (a structure) is a sequence of elements (called members) of arbitrary types.
• A union is a struct that holds the value of just one of its elements at any one time.
• An enum (an enumeration) is a type with a set of named constants (called enumerators).
• enum class (a scoped enumeration) is an enum where the enumerators are within the scope
of the enumeration and no implicit conversions to other types are provided.
Variants of these kinds of simple types have existed since the earliest days of C++. They are pri- marily focused on the representation of data and are the backbone of most C-style programming. The notion of a struct as described here is a simple form of a class 