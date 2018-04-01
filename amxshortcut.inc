/*
				Basic Functions to make your life easier :)
				   Functions: GetName(id), GetAuthId(id)
		      v0.1 - Be updated: https://github.com/Nobodyamx/amxshortcut.inc
*/
#include <amxmodx>
#include <amxmisc>
#include <cstrike>

stock GetName(id)
{
	new name[128];
	get_user_name(id, name, sizeof(name))
	return name;
}

stock GetUserAuthId(id)
{
	new authid[128];
	get_user_authid(id, authid, sizeof(authid))
	return authid;
}
