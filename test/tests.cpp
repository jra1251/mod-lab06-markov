// Copyright 2024 Shelnov Yuriy
#include <gtest/gtest.h>

#include "Texthen.h"
TEST(task1, test1) {
    TextGenerator Tg = TextGenerator ("test.txt", NPREF);
    int result = Tg.getPrefixSize();
    EXPECT_EQ(2, result);
}

TEST(task2, test2) {
    TextGenerator Tg = TextGenerator ("test.txt", NPREF);
    std::deque<std::string> newPrefixes {"rock", "spewed"};
    std::string newSuffix = Tg.getSuffix(newPrefixes);
    EXPECT_EQ("forth", newSuffix);
}

TEST(task3, test3) {
    TextGenerator  Tg = TextGenerator ("test.txt", NPREF);
    std::deque<std::string> newPrefixes {"corpses", "buried"};
    std::string newSuffix = Tg.getSuffix(newPrefixes);
    EXPECT_EQ("for", newSuffix);
}

TEST(task4, test4) {
    TextGenerator Tg = TextGenerator ("test.txt", NPREF);
    std::deque<std::string> newPrefixes {"things", "worth"};
    std::string newSuffix = Tg.getSuffix(newPrefixes);
    EXPECT_TRUE(newSuffix == "dying" || newSuffix == "living");
}

TEST(task5, test5) {
    TextGenerator Tg = TextGenerator ("test.txt", NPREF);
    std::string text = Tg.getText(MAXGEN);
    int counter = 0;
    for (int i = 0; i < text.size(); i++) {
        if (text[i] == ' ') counter++;
    }
    EXPECT_LE(counter, MAXGEN + 1);
}
