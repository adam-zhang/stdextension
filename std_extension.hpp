#include <string>
#include <cctype>
#include <algorithm>

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
    auto j = source.size() - 1;
    for(auto i = pattern.size() - 1; i >= 0; --i, --j)
        if (source[j] != pattern[i])    
            return false;
    return true;
}

template<typename ContainerA, typename ContainerB>
bool copy(ContainerA& containerA, ContainerB& containerB)
{
	copy(containerA.begin(), containerA.end(), containerB.begin());
}

template<typename CharT = char>
std::basic_string<CharT> tolower(const std::basic_string<CharT>& source)
{
	auto s(source);
	transform(source.begin(), source.end(), s.begin(), [](CharT c)
			{
				return tolower(c);
			});
	return s;
}

template<typename CharT = char>
std::basic_string<CharT> toupper(const std::basic_string<CharT>& source)
{
	auto s(source);
	transform(source.begin(), sources.end(), s.begin(), [](CharT c)
			{
				return toupper(c);
			});
}

//template<>
//std::basic_string<wchar_t> tolower<wchar_t>(const std::basic_string<wchar_t> source)
//{
//	auto s(sources);
//	transform(sources.begin(), sources.end(), s.begin(), [](wchar_t c)
//			{
//				return towlower(c);
//			});
//}


template<typename CharT = char>
inline bool icompare(const std::basic_string<CharT>& source1, 
		const std::basic_string<CharT>& source2)
{
	auto s1 = tolower(source1);
	auto s2 = tolower(source1);
	return s1 == s2;
}
