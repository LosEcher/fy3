inherit ITEM;
inherit F_SAVE;

void create(string area)
{
	if( area)	set("area",area);
	if(! restore())	{
		set_name("��Ч����",({"area"}));
		set("no_use",1);
	}
	else	{
		set_name(area+"����",({"area"}));
		set("no_use",0);
	}
	set("unit","��");
        seteuid(getuid());
}

string query_save_file() { return DATA_DIR + "area/"+query("area"); }


