#include "rpc/client.h"
#include "rpc/rpc_error.h"

#include <exception>
#include <iostream>

int main() {
  // Creating a client that connects to the localhost on port 8080
  rpc::client client("127.0.0.1", 6666);

  std::cout << "Got here lel" << std::endl;

  // Calling a function with paramters and converting the result to int
  try {
    client.call("nvim_command", "echo 'Hello, World!'");
  } catch (rpc::rpc_error &e) {
    std::cout << std::endl << e.what() << std::endl;
    std::cout << "in function " << e.get_function_name() << ": ";

    using err_t = std::tuple<int, std::string>;
    auto err = e.get_error().as<err_t>();
    std::cout << "[error " << std::get<0>(err) << "]: " << std::get<1>(err)
              << std::endl;
  }

  return 0;
}
