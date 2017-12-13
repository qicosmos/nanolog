# 一个header only的c++ 日志库

# 背景
[NanoLog](https://github.com/Iyengar111/NanoLog)是一个非常小巧的log库，代码很少，不到一千行，速度比spdlog还快，应用上也能满足需求，我很喜欢。但是也存在一些不足，比如日志文件的数量没有限制，每次重启之后会从头开始写等等问题，还需要进一步完善。于是我新建了一个工程[nanolog](https://github.com/qicosmos/nanolog)，这个工程继承于nanolog，将原工程改成header only，并用了一些最新的特性来简化原来的代码。

# 快速示例

	#include "nanolog.hpp"

	nanolog::initialize(nanolog::GuaranteedLogger(), "/tmp/", "nanolog", 1);
	LOG_INFO << "Sample NanoLog: " << 1 << 2.5 << 'c';

# 如何编译

由于使用了C++17的新特性，所以需要支持C++17的编译器，gcc7.2，vs2017 15.5

# roadmap

1. 增加文件数量上限
2. 重新写日志从上次的位置继续写
