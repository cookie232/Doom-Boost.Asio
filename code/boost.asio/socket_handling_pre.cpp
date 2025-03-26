// Synchronous Socket Handling - Pre-Refactoring
// This code is taken from the original inline implementation.
void handle_connection(io_context& io) {
    ip::tcp::socket socket(io);
    socket.connect(ip::tcp::endpoint(ip::address::from_string("127.0.0.1"), 8080));
    std::string message = "Hello, server!";
    write(socket, buffer(message));
    char response[128];
    size_t length = socket.read_some(buffer(response));
    std::cout << "Server Response: " << std::string(response, length) << std::endl;
}
