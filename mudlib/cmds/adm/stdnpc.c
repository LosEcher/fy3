inherit NPC;
inherit F_SAVE;
inherit F_AUTOLOAD;

string query_save_file()	{
	string id;
	id=query("id");
        if( !stringp(id) ) return 0;
	return sprintf(DATA_DIR "user/%c/%s", id[0], id);

}

void create(string data)
{
	if( data)	set("id",data);
	if(! restore())	{
		set_name("ʧ��Ʒ",({"error"}));
		set("no_use",1);
	}
	else	{
		set_name(query("name"),({ query("id")}));
	}
	setup();
}


