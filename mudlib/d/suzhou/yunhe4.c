// Room: /d/suzhou/yunhe4.c

inherit ROOM;

void create()
{
	set("short", "运河");
	set("long", @LONG
抬头但见北方水天一色，正是通往扬州的方向。南面则隐约可见苏州城角，
由于靠近苏州城，来往于运河上的船只着实不少。
LONG
	);
	set("outdoors","suzhou");
	set("no_clean_up", 0);

	setup();
}
void init()
{
	object me;
	string str;
	me=this_player();
	if(me->query_temp("yz_sz")==1)	{
		str="/d/suzhou/matou";
					}
	if(me->query_temp("yz_sz")==2)	{
		str="/d/suzhou/yunhe3";
					}
	call_out("yz_sz",5,str,me);
}
void yz_sz(string str,object me)
{
	me->move(str);
}
