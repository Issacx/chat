//Full Code belongs to Issac. Project Started: Saturday October 17th ~ 9:00 PM -7 //
#include <iostream>
#include <stdio.h>
#include <string>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>

char bufferSize[1024];

void serverConnect()
{

    int sock = socket(AF_INET , SOCK_STREAM , 0);
    
    //struct sockaddr_in serv_addr, cli_addr;
    
    sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = 8080;
    serverAddress.sin_add.s_addr = inet_addr("0.0.0.0");

    if(sock==true)
    {
        std::cout << "Searching for host...\n";
        std::cout << "HOST FOUND: 0.0.0.0\n";
        std::cout << "PORT FOUND: 8080\n";
        std::cout << "Attempting to Connect...";
        
        bool server_connect;
        //server_connect = connect(int sock, const struct sockaddr *addr, socklen_t addrlen);
        if(server_connect == true)
        {
            std::cout << "Connected.\n";
            std::cout << "You are now connected to the server\n\n";
            return;
        }
        else
        {
            std::cout < "Failed.\n\n";
            return;
        }
        
        bind(sock, (struct sockaddr*) &serverAddress, sizeof(struct sockaddr_in));
        return;
    }
    server_connect = false;
  	std::cout << "The socket could not bind\n";
}
void sendMessage()
{
    std::string client = "CLIENT: ";
    std::string message;
    std::string stranger = "Stranger: ";
    std::string you = "You: ";
    
    if(stranger == true)
    {
        std::cout << stranger << message << "\n";
    }
    else
    {
        std::cout << you << message << "\n";
    }
    if(message == "help")
    {
        std::cout << client << "This is a Chat Client programmed in C++\n";
        std::cout << client << "You cannot send two messages at a time yet, it currently alternates.\n";
        std::cout << client << "Version 1.0";
    }
}
int main()
{
    serverConnect();
    return 1;
}
