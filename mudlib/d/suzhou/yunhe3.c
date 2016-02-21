// Room: /d/suzhou/yunhe3.c

inherit ROOM;

void create()
{
	set("short", "运河");
	set("long", @LONG
运河南北沿伸，一眼望不到头。两岸绿树成荫，风光宜人。远远一只木船
驶了过来，还没等你看个真切，却已顺流而去踪影不见。这条千里运河真不知
前人花了多少精力才得以建成。你放眼四周心中感叹不已。
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
    if(me->query_temp("yz_sz")==1)  {
		str="/d/suzhou/yunhe4";
                    }
    if(me->query_temp("yz_sz")==2)  {
		str="/d/yangzhou/yunhe2";
                    }
	call_out("yz_sz",5,str,me);
}
void yz_sz(string str,object me)
{
    me->move(str);
}
