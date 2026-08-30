#include <memory>
#include <utility>

#include <LIEF/logging.hpp>
#include <spdlog/sinks/stdout_color_sinks.h>

int main() {
  std::shared_ptr<spdlog::logger> logger =
      spdlog::stderr_color_mt("lief-consumer-test");
  LIEF::logging::set_logger(std::move(logger));
  LIEF::logging::set_level(LIEF::logging::LEVEL::DEBUG);
  LIEF::logging::debug("external spdlog consumer test");
  LIEF::logging::reset();
  return 0;
}
