#pragma once

#include "../server.hpp"

typedef struct
{
	std::string					cmnd_name;
	std::vector<std::string>	cmnd_args;
} commandInfo;

class Client;
class Server;

//commands
commandInfo parseCmndBuffer(const std::string &cmndBuffer);
void ft_pong(commandInfo& cmd, Server& server, Client& client);
void ft_join(commandInfo& cmd, Server& server, Client& client);
void ft_part(commandInfo& cmd, Server& server, Client& client);
void ft_privMsg(commandInfo& cmd, Server& server, Client& client);
void ft_quit(commandInfo& cmd, Server& server, Client& client);
void ft_topic(commandInfo& cmd, Server& server, Client& client);
void ft_invite(commandInfo &cmd, Server& server, Client& client);
void ft_kick(commandInfo& cmd, Server& server, Client& client);
void ft_mode(commandInfo& cmd, Server& server, Client& client);
