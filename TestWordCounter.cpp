#include <gtest/gtest.h>
#include "WordCounter.h"

int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(WordCounter, CreatesVectorOfWords)
{
    auto text = std::string("Bebezinho bonitinho bebebol");
    auto words = WordCounter::separateIntoWords(text);
    ASSERT_EQ(words.size(), 3);
    // ASSERT_EQ(words.at(1), "bonitinho");
}





//TODO: eliminates non-unique words
//TODO: converts to lower case
//TODO: eliminates non-alphanum characters


//? map?