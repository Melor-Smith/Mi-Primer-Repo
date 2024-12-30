#ifndef CONVERTER_H
#define CONVERTER_H

#include <string>

class Converter {
public:
    static void convert_pdf_to_word(const std::string& input, const std::string& output);
    static void convert_word_to_pdf(const std::string& input, const std::string& output);
    static void convert_ppt_to_pdf(const std::string& input, const std::string& output);
};

#endif
