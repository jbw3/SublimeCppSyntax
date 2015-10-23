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

    char rawStr1[] = R"("This is a raw string")";
    //               ^ punctuation.definition.string.begin
    //                  ^ string.quoted.double
    //                                        ^ punctuation.definition.string.end
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
