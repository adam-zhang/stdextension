#include <string>

template<typename CharT>
bool begin_with(const std::basic_string<CharT>& source, const std::basic_string<CharT>& pattern)
{
    if (source.size() < pattern.size())
        return false;
    for(auto i = 0; i != pattern.size(); ++i)
        if (pattern[i] != source[i])
            return false;
    return true;
}

template<typename CharT>
bool end_with(const std::basic_string<CharT>& source, const std::basic_string<CharT>& pattern)
{
    if (source.size() < pattern.size())
        return false;
    auto j = source.size() - 1
    for(auto i = pattern.size() - 1; i >= 0; --i, --j)
        if (source[j] != pattern[i])    
            return false;
    return true;
}
