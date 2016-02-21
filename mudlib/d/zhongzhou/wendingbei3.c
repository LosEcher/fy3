//wendingbei3
  

inherit ROOM;

void create()
{
	set("short", "文定北街");
	set("long", @LONG
这是中州城文定北街，宽敞的街道看的人不竟心情一畅。街道的
东面就是中州的巡捕房，你不竟加快步伐，这种地方还是少去为妙。
西面一座大房子，门口的两只石狮子朝你瞪着眼睛。门口还有一只大
鼓，原来这就是中州的县衙门。
LONG
	);
set("outdoors","/d/zhongzhou");

	set("exits", ([
		"east" : __DIR__"xunbu",
		"south" : __DIR__"wendingbei2",
		"west" : __DIR__"yamen",
		"north" : __DIR__"wendingbei4",
	]));
	set("objects",([
	"/d/hangzhou/npc/man":2,
	]));

	setup();
	replace_program(ROOM);
}

