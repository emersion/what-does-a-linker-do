# what-does-a-linker-do

A collection of small examples demonstrating various linker features.

* Aliases: define multiple symbols with the same address
* Dynamic export control: provide a strict list of exported dynamic symbols
* Dynamic relocation: link at load-time a symbol from a shared library
* Encapsulation script: mark symbols local or global with a script
* Interposition: wrap function calls to a shared library with a cutstom function
* Introspection: guess the type of a pointer
* Load time substitution: replace a shared library with another one at load-time
* Memory layout script: change the executable memory layout with a script
* Merge sections
* Multiple weak definitions: link with multiple definitions of the same symbol
* Optional weak definition: allow missing symbols
* Run path: specify shared libraries paths directly in the executable
* Static relocation: link at compile-time a symbol from a static library
* String suffix merge: optimization when multiple strings have the same suffix
* Versioning: build a shared library with versionned symbols
* Visibility archive: set symbol visibility when building an archive
* Visibility attributes: make symbols local or global with attributes

# License

MIT
