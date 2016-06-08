/*
	Author: Chris(tian) "infiSTAR" Lorenzen
	Contact: infiSTAR23@gmail.com // www.infiSTAR.de
*/
class CfgPatches
{
	class a3_infiSTAR_Exile
	{
		requiredVersion = 0.223;
		requiredAddons[] = 
		{
			"exile_server",
			"exile_client",
			"exile_server_config"
		};
		a3_infiSTAR_Exile_version = 0.223;
	};
};
class CfgFunctions
{
	class a3_infiSTAR_Exile
	{
		class main
		{
			file = "a3_infiSTAR_Exile";
			class preInit { preInit = 1; };
		};
	};
};