#include <iostream>

int main() {
	std::cout << "hello" << std::endl;
}
//#include <cppcoro/task.hpp>
//#include <cppcoro/task.hpp>
//#include <cppcoro/io_service.hpp>
//#include <cppcoro/read_only_file.hpp>

//#include <experimental/filesystem>
//#include <memory>
//#include <algorithm>
//#include <iostream>

//namespace fs = std::experimental::filesystem;

//cppcoro::task<std::uint64_t> count_lines(cppcoro::io_service& ioService, fs::path path)
//{
  //auto file = cppcoro::read_only_file::open(ioService, path);

  //constexpr size_t bufferSize = 4096;
  //auto buffer = std::make_unique<std::uint8_t[]>(bufferSize);

  //std::uint64_t newlineCount = 0;

  //for (std::uint64_t offset = 0, fileSize = file.size(); offset < fileSize;)
  //{
    //const auto bytesToRead = static_cast<size_t>(
      //std::min<std::uint64_t>(bufferSize, fileSize - offset));

    //const auto bytesRead = co_await file.read(offset, buffer.get(), bytesToRead);

    //newlineCount += std::count(buffer.get(), buffer.get() + bytesRead, '\n');

    //offset += bytesRead;
  //}

  //co_return newlineCount;
//}

//cppcoro::task<> run(cppcoro::io_service& ioService)
//{
  //cppcoro::io_work_scope ioScope(ioService);

  //auto lineCount = co_await count_lines(ioService, fs::path{"foo.txt"});

  //std::cout << "foo.txt has " << lineCount << " lines." << std::endl;;
//}

//cppcoro::task<> process_events(cppcoro::io_service& ioService)
//{
	 //Process events until the io_service is stopped.
	 //ie. when the last io_work_scope goes out of scope.
  //ioService.process_events();
  //co_return;
//}

//int main()
//{
  //cppcoro::io_service ioService;

  //cppcoro::sync_wait(cppcoro::when_all_ready(
    //run(ioService),
    //process_events(ioService)));

  //return 0;
//}
