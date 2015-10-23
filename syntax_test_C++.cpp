// SYNTAX TEST "C++14.sublime-syntax"

// This is a line comment
// <- comment.line

/* This is a block comment */
// <- comment.block

int main(int argc, char* argv[])
{
    return 0;
    // <- keyword.control
}

void strings()
{
    char str1[] = "abc";
    //            ^ punctuation.definition.string.begin
    //             ^ string.quoted.double
    //                ^ punctuation.definition.string.end

    char str2[] = u8"abc";
    //            ^ punctuation.definition.string.begin

    char16_t str3[] = u"abc";
    //                ^ punctuation.definition.string.begin

    char32_t str4[] = U"abc";
    //                ^ punctuation.definition.string.begin

    wchar_t str5[] = L"abc";
    //               ^ punctuation.definition.string.begin

    char str6[] = "\n|\r|\0|\x41";
    //             ^ constant.character.escape
    //                ^ constant.character.escape
    //                   ^ constant.character.escape
    //                      ^ constant.character.escape

    char rawStr1[] = R"("This is a raw string")";
    //               ^ punctuation.definition.string.begin
    //                  ^ string.quoted.double
    //                                        ^ punctuation.definition.string.end

    char rawStr2[] = R"A*!34( )" )A*!34";
    //               ^ punctuation.definition.string.begin
    //                        ^ string.quoted.double
    //                           ^ punctuation.definition.string.end
}

void storage()
// <- storage.type
{
    bool b;
    // <- storage.type

    char ch;
    // <- storage.type

    char16_t ch16;
    // <- storage.type

    char32_t ch32;
    // <- storage.type

    wchar_t wch;
    // <- storage.type

    unsigned int ui;
    // <- storage.type
    //       ^ storage.type

    signed long l;
    // <- storage.type
    //     ^ storage.type

    short s;
    // <- storage.type

    auto a = 2;
    // <- storage.type

    decltype(s) dt;
    // <- storage.type

    float f;
    // <- storage.type

    double d;
    // <- storage.type
}

int keywords(int x)
{
    static_assert(x >= 0);
    // <- keyword.control

    if (x < 5)
    // <- keyword.control
    {}
    else
    // <- keyword.control
    {}

    switch (x)
    // <- keyword.control
    {
    case 1:
    // <- keyword.control
        break;
        // <- keyword.control
    default:
    // <- keyword.control
        break;
        // <- keyword.control
    }

    int y = 0;
    do
    // <- keyword.control
    {
        ++y;
        if (y == 3)
            continue;
            // <- keyword.control
    } while (y < x);
    //^ keyword.control

    goto label;
    // <- keyword.control

label:

    try
    // <- keyword.control
    {
        throw std::string("xyz");
        // <- keyword.control
    }
    catch (...)
    // <- keyword.control
    {
    }

    int* ptr = new int(2);
    //         ^ keyword.control

    delete ptr;
    // <- keyword.control

    return 123;
    // <- keyword.control
}

void castKeywords()
{
    const_cast<int>(2.0);
    // <- keyword.operator.cast

    dynamic_cast<int>(2.0);
    // <- keyword.operator.cast

    reinterpret_cast<int>(2.0);
    // <- keyword.operator.cast

    static_cast<int>(2.0);
    // <- keyword.operator.cast

}

void languageConstants()
{
    bool t = true;
    //       ^ constant.language

    bool f = false;
    //       ^ constant.language

    int* p = nullptr;
    //       ^ constant.language

    char ch[] = __func__;
    //          ^ constant.language
}

void supportConstants()
{
    std::cout << __FILE__ << '\n';
    //           ^ support.constant

    std::cout << __FUNCTION__ << '\n';
    //           ^ support.constant

    std::cout << __LINE__ << '\n';
    //           ^ support.constant

}
