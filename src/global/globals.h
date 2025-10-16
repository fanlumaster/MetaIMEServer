#pragma once
#include <string>
#include <unordered_set>
#include <windows.h>

namespace GlobalIme
{
inline std::wstring AppName = L"MetasequoiaImeTsf";
inline std::wstring ServerName = L"MetasequoiaImeTsf";
inline std::unordered_set<WCHAR> PUNC_SET = {
    L'`', //
    L'!', //
    L'@', //
    L'#', //
    L'$', //
    L'%', //
    L'^', //
    L'&', //
    L'*', //
    L'(', //
    L')', //
    // L'-',  //
    L'_', //
    // L'=',  //
    // L'+',  //
    L'[',  //
    L']',  //
    L'\\', //
    L';',  //
    L':',  //
    L'\'', //
    L'"',  //
    L',',  //
    L'<',  //
    L'.',  //
    L'>',  //
    L'?'   //
};

//
// 给造词使用
//
inline std::string preedit_during_creating_word = "";
inline std::string pinyin_for_creating_word = "";
inline std::string word_for_creating_word = "";
inline bool is_during_creating_word = false;
} // namespace GlobalIme

namespace CandidateUi
{
inline std::string NumHanSeparator = " "; // Number and Hanzi separator
} // namespace CandidateUi

namespace Global
{
inline LONG INVALID_Y = -100000;
inline int MarginTop = 0;
} // namespace Global