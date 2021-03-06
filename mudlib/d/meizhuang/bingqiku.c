// Room: /d/wudu/wuku.c

inherit ROOM;

int mount,dao,shouzhang,zhang,ding,jian;
string* w_dao=({
	"mudao",
	"zhudao",
	"tiedao",
	"gangdao",
});
string* w_zhang=({
	"muzhang",
	"zhuzhang",
	"tiezhang",
	"gangzhang",
});
string* w_ding=({
	"muding",
	"zhuding",
	"tieding",
	"gangding",
});
string* w_jian=({
	"mujian",
	"zhujian",
	"tiejian",
	"gangjian",
});
int mount=5;
int dao=mount;
int jian=mount;
int zhang=mount;
int ding=mount;
int jian=mount;
void create()
{
	set("short","兵器库");
	set("long", @LONG
这是一间石头建筑，看上去坚固异常，没有窗，靠墙是一排排的兵器
架，各色各样的兵器被擦拭得雪亮，摆放的整整齐齐，通常梅庄弟子们都
到这里来取自己称手的武器。你可以先看看(list)。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"north":__DIR__"shibanlu3",
]));

	setup();
}
void init()
{
	add_action("do_list", "list");
	add_action("do_qu", "qu");
}

int do_list(object me)
{
    write("武器架上整齐的排列着:\n" +
	"刀(dao)共有"+dao+"柄\n"+
	"剑(jian)共有"+jian+"把\n"+
	"钉(ding)共有"+ding+"百枚\n"+
	"杖(zhang)共有"+zhang+"根\n"+
	"梅庄弟子可以在此取(qu)所需兵器，当然是有限制的，要想好啊！\n");
	return 1;
}	

int do_qu(string weapon)
{
	object me,ob1;
	me=this_player();

	if(me->query("family/family_name")!="孤山梅庄")
	return notify_fail("此处兵器只提供给本庄弟子！\n");

	if (me->query_temp("can't_qu")==0){
	if(weapon=="dao")	{

	if(dao<1) return notify_fail("兵器架上已没有刀啦！选别的吧。\n");

	ob1=new(__DIR__"npc/obj/"+w_dao[random(4)]);
	ob1->set("no_sell",1);
	ob1->set("no_get",1);
	ob1->set("no_give",1);
	        ob1->move(me);
	        me->set_temp("can't_qu",1);
	        dao=dao-1;
	message_vision("$N从兵器架上取出一柄"+ob1->query("name")+"！\n",me);

			return 1;
			}


	if(weapon=="zhang")	{

		if(zhang<1)	
		return notify_fail("兵器架上已没有杖啦！选别的吧。\n");

		ob1=new(__DIR__"npc/obj/"+w_zhang[random(4)]);
		ob1->set("no_sell",1);
		ob1->set("no_give",1);
		ob1->set("no_get",1);
	        ob1->move(me);
	        me->set_temp("can't_qu",1);
		zhang--;
		message_vision("$N从兵器架上取出一根"+ob1->query("name")+"！\n",me);

			return 1;
			}

		if(weapon=="jian")	{

		if(jian<1)
		return notify_fail("兵器架上的剑已被拿光啦，选别的吧！\n");

		ob1=new(__DIR__"npc/obj/"+w_jian[random(4)]);
		ob1->set("no_sell",1);
		ob1->set("no_give",1);
		ob1->set("no_get",1);
	        ob1->move(me);
	        me->set_temp("can't_qu",1);
		jian--;
		message_vision("$N从兵器架上取出一把"+ob1->query("name")+"！\n",me);

			return 1;
			}

		if(weapon=="ding")	{

		if(ding<1)
		return notify_fail("兵器架上已没有钉子了！\n");

		ob1=new(__DIR__"npc/obj/"+w_ding[random(4)]);
		ob1->set("no_sell",1);
		ob1->set("no_give",1);
		ob1->set("no_get",1);
		ob1->set_amount(100);
	        ob1->move(me);
	        me->set_temp("can't_qu",1);
		ding--;
		message_vision("$N从兵器架上取出一百枚"+ob1->query("name")+"！\n",me);

			return 1;
			}
			
		return notify_fail("你要取什么？\n");
	}
	return notify_fail("你已经来取过武器了，过会再来吧！\n");
}
