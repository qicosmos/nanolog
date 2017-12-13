#include<iostream>
#include "nanolog.hpp"

int main() {
	nanolog::initialize(nanolog::GuaranteedLogger(), "/tmp/", "nanolog", 1);
	LOG_INFO << "Sample NanoLog: " << 1 << 2.5 << 'c';
	// Or if you want to use the non guaranteed logger -
	// ring_buffer_size_mb - LogLines are pushed into a mpsc ring buffer whose size
	// is determined by this parameter. Since each LogLine is 256 bytes,
	// ring_buffer_size = ring_buffer_size_mb * 1024 * 1024 / 256
	// In this example ring_buffer_size_mb = 3.
	// nanolog::initialize(nanolog::NonGuaranteedLogger(3), "/tmp/", "nanolog", 1);

	//for (int i = 0; i < 50000; ++i)
	//{
	//	LOG_INFO << "Sample NanoLog: " << i;
	//}

	return 0;
}