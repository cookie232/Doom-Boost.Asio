// TcpClient Class - Post-Refactoring
// Refactored implementation using an object-oriented approach to encapsulate socket handling.
using namespace boost::asio; // Simplifies notation
class TcpClient {
public:
    TcpClient(io_context& io, const std::string& address, int port)
        : socket_(io) {
        socket_.connect(ip::tcp::endpoint(ip::address::from_string(address), port));
    }
    void sendMessage(const std::string& message) {
        write(socket_, buffer(message));
    }
    std::string receiveMessage() {
        char response[128];
        size_t length = socket_.read_some(buffer(response));
        return std::string(response, length);
    }
private:
    ip::tcp::socket socket_;
};
