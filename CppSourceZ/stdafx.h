/*
stdafx.h : 標準のシステム インクルード ファイルのインクルード ファイル、または
参照回数が多く、かつあまり変更されない、プロジェクト専用のインクルード ファイル
を記述します。
*/

// TODO: プログラムに必要な追加ヘッダー参照開始 ↓

#pragma once

#include "targetver.h"	

#include <cstddef>
#include <limits>
#include <climits>
#include <cfloat>
#include <cstdint>
#include <cstdlib>
#include <new>
#include <typeinfo>
#include <exception>
#include <initializer_list>
// 
#include <stdexcept>
#include <cassert>
#include <cerrno>
#include <system_error>
#include <string>

#if __has_include(<string_view>)
#include <string_view>
#endif

#include <array>
#include <deque>
#include <forward_list>
#include <list>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <iterator>
#include <algorithm>
#include <random>
#include <numeric>
#include <cmath>
#include <iosfwd>
#include <iostream>
#include <ios>
#include <streambuf>
#include <istream>
#include <ostream>
#include <iomanip>
#include <sstream>
#include <fstream>

#if __has_include(<filesystem>)
#include <filesystem>
#endif

#include <cstdio>
#include <regex>

using namespace std;

/* Win32で推奨されないライブラリ
#include <cstdalign>
#include <cfenv>
#include <cinttypes>
#include <atomic>
#include <thread>
#include <mutex>
#include <shared_mutex>
#include <condition_variable>
#include <future>
using namespace std::literals;
*/

// TODO: プログラムに必要な追加ヘッダーはここまで ↑
