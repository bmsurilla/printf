*This project has been created as part of the 42 curriculum by bsurilla.*

# ft_printf

## Description

The goal of this project is to recreate a simplified version of the standard C `printf()` function from the C standard library.

The custom implementation, `ft_printf`, handles formatted output using a variadic function and supports a limited set of conversion specifiers.

The supported conversions are:

- `%c` — prints a single character  
- `%s` — prints a string  
- `%p` — prints a pointer in hexadecimal format  
- `%d` — prints a decimal integer  
- `%i` — prints an integer  
- `%u` — prints an unsigned decimal integer  
- `%x` — prints a number in lowercase hexadecimal format  
- `%X` — prints a number in uppercase hexadecimal format  
- `%%` — prints a percent sign  

The project focuses on:
- understanding variadic functions (`va_list`, `va_arg`, `va_start`, `va_end`)
- implementing formatted output handling
- managing type conversions manually
- writing low-level output using `write()`

---

## Instructions

### Compilation

To compile the library:

```bash
make