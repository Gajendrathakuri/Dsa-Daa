#include <iostream>
#include <fstream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <cstring>

using namespace std;

int main() {
    int server_fd, client_fd;
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    const int PORT = 8080;

    // 1. Create socket
    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (server_fd == 0) { cerr << "Socket failed\n"; return -1; }

    // 2. Bind
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);
    if (bind(server_fd, (struct sockaddr*)&address, sizeof(address)) < 0) {
        cerr << "Bind failed\n"; return -1;
    }

    // 3. Listen
    listen(server_fd, 3);
    cout << "Server listening on port " << PORT << endl;

    // 4. Accept
    client_fd = accept(server_fd, (struct sockaddr*)&address, (socklen_t*)&addrlen);
    if (client_fd < 0) { cerr << "Accept failed\n"; return -1; }

    // 5. Receive file
    ofstream outfile("received_file", ios::binary);
    char buffer[1024];
    int bytesRead;
    while ((bytesRead = read(client_fd, buffer, sizeof(buffer))) > 0) {
        outfile.write(buffer, bytesRead);
    }

    cout << "File received successfully!\n";

    // 6. Close
    outfile.close();
    close(client_fd);
    close(server_fd);
    return 0;
}
