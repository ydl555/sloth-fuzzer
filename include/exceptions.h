#ifndef FUZZER_EXCEPTIONS_H
#define FUZZER_EXCEPTIONS_H

#include <stdexcept>

class invalid_field_size : public std::exception {
public:
    const char *what() const throw() {
        return "invalid field size";
    }
};

#endif // FUZZER_EXCEPTIONS_H