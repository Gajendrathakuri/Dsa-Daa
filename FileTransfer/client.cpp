#include <iostream>
#include <fstream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>

using namespace std;

int main() {
    int sock = 0;
    struct sockaddr_in serv_addr;
    const int PORT = 8080;

    // 1. Create socket
    sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) { cerr << "Socket creation error\n"; return -1; }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);
    inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr);

    // 2. Connect
    if (connect(sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) < 0) {
        cerr << "Connection Failed\n"; return -1;
    }

    // 3. Open file
    ifstream infile("file_to_send", ios::binary);
    if (!infile) { cerr << "File not found\n"; return -1; }

    // 4. Send file
    char buffer[1024];
    while (!infile.eof()) {
        infile.read(buffer, sizeof(buffer));
        send(sock, buffer, infile.gcount(), 0);
    }

    cout << "File sent successfully!\n";

    // 5. Close
    infile.close();
    close(sock);
    return 0;
}
